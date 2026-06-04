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
#include "unitysdk/Struct_2_276321B6B122C69C_5.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_842;
class Class_1_F11CBE4D3C7DF06D_1;
namespace RPG::GameCore { class BattleRogueMagicData_MagicUnit; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicUnitDisplayRow; }
namespace RPG::GameCore { class RogueMagicUnitRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEDISPLAYITEM_1_OFFSET UNITYSDK_OFFSET(0xC7B7850)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEDISPLAYITEM_OFFSET UNITYSDK_OFFSET(0xC7A2F10)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEFROMBATTLE_OFFSET UNITYSDK_OFFSET(0xC7B1C90)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC7B77D0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC7B0960)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7B0920)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_ATTACHRANGETYPES_OFFSET UNITYSDK_OFFSET(0xC7B7BE0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BASICPOWERORFACTOR_OFFSET UNITYSDK_OFFSET(0xC7B7DC0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xC7A4350)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BUFFSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xC7AF2A0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xC7A41F0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_EFFECTTYPES_OFFSET UNITYSDK_OFFSET(0xC7B7C80)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_EXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0xC7A4530)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0xC7A47F0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xC7B7B20)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_LIMITRANGETYPE_OFFSET UNITYSDK_OFFSET(0xC7B7B40)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITICON_OFFSET UNITYSDK_OFFSET(0xC78ACE0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITID_OFFSET UNITYSDK_OFFSET(0xC7B7960)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITLEVEL_OFFSET UNITYSDK_OFFSET(0xC7B7980)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITNAME_OFFSET UNITYSDK_OFFSET(0xC7A40F0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MOUNTTYPE_OFFSET UNITYSDK_OFFSET(0xC7A45F0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_SPECIALTYPE_OFFSET UNITYSDK_OFFSET(0xC7B7D20)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0xC7A4730)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_UID_OFFSET UNITYSDK_OFFSET(0xC7B7940)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xC7B7A10)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xC7B7A70)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC7B79A0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_REFRESH_OFFSET UNITYSDK_OFFSET(0xC7B13A0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SETISLOCK_OFFSET UNITYSDK_OFFSET(0xC7B78F0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xC7B7B30)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITID_OFFSET UNITYSDK_OFFSET(0xC7B7970)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITLEVEL_OFFSET UNITYSDK_OFFSET(0xC7B7990)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_UID_OFFSET UNITYSDK_OFFSET(0xC7B7950)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC7B7840)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicUnitDataItem_TypeDefinitionIndex = 63068;

	class RogueMagicUnitDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _MagicUnitID_k__BackingField; // 0x10
		::System::Boolean _IsLock_k__BackingField; // 0x14
		::System::UInt32 _MagicUnitLevel_k__BackingField; // 0x18
		::System::UInt32 _UID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* Create(::Class_1_F11CBE4D3C7DF06D_1* a1)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::Class_1_F11CBE4D3C7DF06D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* Create_1(::Class_1_D17272E82AE804C2_842* a1)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::Class_1_D17272E82AE804C2_842*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* CreateDisplayItem(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEDISPLAYITEM_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* CreateDisplayItem_1(::Struct_2_276321B6B122C69C_5 a1)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::Struct_2_276321B6B122C69C_5))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEDISPLAYITEM_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* CreateFromBattle(::RPG::GameCore::BattleRogueMagicData_MagicUnit* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::RPG::GameCore::BattleRogueMagicData_MagicUnit*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEFROMBATTLE_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void SetIsLock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SETISLOCK_OFFSET))(this, a1);
		}

		::System::Void Refresh(::Class_1_F11CBE4D3C7DF06D_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_REFRESH_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_UID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MagicUnitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITID_OFFSET))(this);
		}

		::System::Void set_MagicUnitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MagicUnitLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITLEVEL_OFFSET))(this);
		}

		::System::Void set_MagicUnitLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITLEVEL_OFFSET))(this, a1);
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

		::System::Void set_IsLock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_ISLOCK_OFFSET))(this, a1);
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
