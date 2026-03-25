#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicSpecialType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCategory.h"
#include "unitysdk/Struct_2_276321B6B122C69C_2.h"
#include "unitysdk/System/Object.h"

class Class_1_EFFE981EB501B7BD;
class Class_1_FA4F4A67B1C04320_767;
namespace RPG::GameCore { class BattleRogueMagicData_MagicUnit; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicUnitDisplayRow; }
namespace RPG::GameCore { class RogueMagicUnitRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEDISPLAYITEM_1_OFFSET UNITYSDK_OFFSET(0xA3330D0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEDISPLAYITEM_OFFSET UNITYSDK_OFFSET(0xA31E560)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEFROMBATTLE_OFFSET UNITYSDK_OFFSET(0xA32D290)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA333050)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA32C080)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA32C040)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_ATTACHRANGETYPES_OFFSET UNITYSDK_OFFSET(0xA333460)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BASICPOWERORFACTOR_OFFSET UNITYSDK_OFFSET(0xA333640)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xA31FA90)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BUFFSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xA32AB70)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xA31F890)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_EFFECTTYPES_OFFSET UNITYSDK_OFFSET(0xA333500)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_EXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0xA31FC70)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA31FF30)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xA3333A0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_LIMITRANGETYPE_OFFSET UNITYSDK_OFFSET(0xA3333C0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITICON_OFFSET UNITYSDK_OFFSET(0xA31F9D0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITID_OFFSET UNITYSDK_OFFSET(0xA3331E0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITLEVEL_OFFSET UNITYSDK_OFFSET(0xA333200)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITNAME_OFFSET UNITYSDK_OFFSET(0xA31F7A0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MOUNTTYPE_OFFSET UNITYSDK_OFFSET(0xA31FD30)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_SPECIALTYPE_OFFSET UNITYSDK_OFFSET(0xA3335A0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0xA31FE70)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_UID_OFFSET UNITYSDK_OFFSET(0xA3331C0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xA333290)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xA3332F0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA333220)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_REFRESH_OFFSET UNITYSDK_OFFSET(0xA32C9A0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SETISLOCK_OFFSET UNITYSDK_OFFSET(0xA333170)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xA3333B0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITID_OFFSET UNITYSDK_OFFSET(0xA3331F0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITLEVEL_OFFSET UNITYSDK_OFFSET(0xA333210)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_UID_OFFSET UNITYSDK_OFFSET(0xA3331D0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA3330C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicUnitDataItem_TypeDefinitionIndex = 54947;

	class RogueMagicUnitDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _MagicUnitID_k__BackingField; // 0x10
		::System::UInt32 _UID_k__BackingField; // 0x14
		::System::UInt32 _MagicUnitLevel_k__BackingField; // 0x18
		::System::Boolean _IsLock_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 level, ::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM__CTOR_OFFSET))(this, id, level, uid);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* Create(::Class_1_EFFE981EB501B7BD* proto)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::Class_1_EFFE981EB501B7BD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_OFFSET))(proto);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* Create_1(::Class_1_FA4F4A67B1C04320_767* proto)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::Class_1_FA4F4A67B1C04320_767*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_1_OFFSET))(proto);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* CreateDisplayItem(::System::UInt32 id, ::System::UInt32 level, ::System::UInt32 uid)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEDISPLAYITEM_OFFSET))(id, level, uid);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* CreateDisplayItem_1(::Struct_2_276321B6B122C69C_2 identifier)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::Struct_2_276321B6B122C69C_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEDISPLAYITEM_1_OFFSET))(identifier);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* CreateFromBattle(::RPG::GameCore::BattleRogueMagicData_MagicUnit* battleUnit, ::System::UInt32 dummyUID)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::RPG::GameCore::BattleRogueMagicData_MagicUnit*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEFROMBATTLE_OFFSET))(battleUnit, dummyUID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void SetIsLock(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SETISLOCK_OFFSET))(this, isLock);
		}

		::System::Void Refresh(::Class_1_EFFE981EB501B7BD* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EFFE981EB501B7BD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_REFRESH_OFFSET))(this, instance);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_MagicUnitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITID_OFFSET))(this);
		}

		::System::Void set_MagicUnitID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITID_OFFSET))(this, value);
		}

		::System::UInt32 get_MagicUnitLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITLEVEL_OFFSET))(this);
		}

		::System::Void set_MagicUnitLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITLEVEL_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicUnitCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMagicUnitCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicMountType get_MountType()
		{
			return ((::RPG::GameCore::RogueMagicMountType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MOUNTTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_MagicUnitName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITNAME_OFFSET))(this);
		}

		::System::String* get_MagicUnitIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITICON_OFFSET))(this);
		}

		::System::String* get_BuffDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BUFFDESC_OFFSET))(this);
		}

		::System::String* get_BuffSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BUFFSIMPLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffects()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_EXTRAEFFECTS_OFFSET))(this);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void set_IsLock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_ISLOCK_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicUnitRow* get__Row()
		{
			return ((::RPG::GameCore::RogueMagicUnitRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicUnitDisplayRow* get__DisplayRow()
		{
			return ((::RPG::GameCore::RogueMagicUnitDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__DISPLAYROW_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get__MazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__MAZEBUFFROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicScepterFuncType get_FuncType()
		{
			return ((::RPG::GameCore::RogueMagicScepterFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_FUNCTYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicStyleType get_StyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_STYLETYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicRangeType get_LimitRangeType()
		{
			return ((::RPG::GameCore::RogueMagicRangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_LIMITRANGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RogueMagicRangeType>* get_AttachRangeTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::RogueMagicRangeType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_ATTACHRANGETYPES_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* get_EffectTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_EFFECTTYPES_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicSpecialType get_SpecialType()
		{
			return ((::RPG::GameCore::RogueMagicSpecialType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_SPECIALTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BasicPowerOrFactor()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BASICPOWERORFACTOR_OFFSET))(this);
		}
	};
}
