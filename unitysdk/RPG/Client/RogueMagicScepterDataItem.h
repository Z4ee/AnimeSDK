#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCategory.h"
#include "unitysdk/Struct_2_276321B6B122C69C_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_738;
class Class_1_CC65FF4377016C5E;
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class BattleRogueMagicData_Scepter; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicScepterDisplayRow; }
namespace RPG::GameCore { class RogueMagicScepterRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_CREATEDISPLAYITEMDIFFCOMPMODIFIED_OFFSET UNITYSDK_OFFSET(0xA329340)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_CREATEDISPLAYITEM_1_OFFSET UNITYSDK_OFFSET(0xA3292D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_CREATEDISPLAYITEM_OFFSET UNITYSDK_OFFSET(0xA31E470)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_CREATEFROMBATTLE_OFFSET UNITYSDK_OFFSET(0xA329430)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA3290C0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA329550)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_FINDHAVINGUNITBYCATEGORY_OFFSET UNITYSDK_OFFSET(0xA329CA0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_FINDHAVINGUNITBYUNITID_OFFSET UNITYSDK_OFFSET(0xA329D90)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETALLSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xA3299D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETBASICPOWER_OFFSET UNITYSDK_OFFSET(0xA32A560)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETLOCKEDUNITS_OFFSET UNITYSDK_OFFSET(0xA329640)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETOPERABLESLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xA329AF0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETSLOTUNITDATAITEM_OFFSET UNITYSDK_OFFSET(0xA329740)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETSLOTUNITUID_OFFSET UNITYSDK_OFFSET(0xA3297D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETTOTALPOWER_OFFSET UNITYSDK_OFFSET(0xA329F10)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_BASICPOWER_OFFSET UNITYSDK_OFFSET(0xA32AE70)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_BIGICONPATH_OFFSET UNITYSDK_OFFSET(0xA320320)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_EFFECTTYPES_OFFSET UNITYSDK_OFFSET(0xA32ADD0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA320B00)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA3201F0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA32A780)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_LIMITRANGETYPE_OFFSET UNITYSDK_OFFSET(0xA32AD30)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_LOCKEDUNITEFFECTSIMPLE_OFFSET UNITYSDK_OFFSET(0xA32A980)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_LOCKEDUNITEFFECT_OFFSET UNITYSDK_OFFSET(0xA320620)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_LOCKEDUNITEXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0xA320830)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_SCEPTERBGDESC_OFFSET UNITYSDK_OFFSET(0xA32A800)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_SCEPTERID_OFFSET UNITYSDK_OFFSET(0xA32A760)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_SCEPTERNAME_OFFSET UNITYSDK_OFFSET(0xA320080)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_SCEPTERTRIGGERDESC_OFFSET UNITYSDK_OFFSET(0xA320450)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0xA320A40)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET__DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xA32A7A0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET__MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xA32A8D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA329260)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_ISEQUIPPEDUNITSHOWNOEFFECTMARK_OFFSET UNITYSDK_OFFSET(0xA329E80)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_ISHAVINGUNIT_OFFSET UNITYSDK_OFFSET(0xA329C50)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA32A790)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_SET_SCEPTERID_OFFSET UNITYSDK_OFFSET(0xA32A770)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xA3291A0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xA32AF20)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA329190)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterDataItem_TypeDefinitionIndex = 54936;

	class RogueMagicScepterDataItem : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_MaxLevel()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RogueMagicScepterDataItem_TypeDefinitionIndex)->GetStaticField(0x6A60);
		}
		::RPG::Client::RogueMagicScepterInfo* _BelongScepterInfo; // 0x10
		::Class_0_16E4307DCC419505_738* _SlotDataImpl; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x20
		::System::UInt32 _ScepterID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueMagicScepterDataItem* Create(::Class_1_CC65FF4377016C5E* proto, ::RPG::Client::RogueMagicScepterInfo* belongScepterInfo)
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::Class_1_CC65FF4377016C5E*, ::RPG::Client::RogueMagicScepterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_CREATE_OFFSET))(proto, belongScepterInfo);
		}

		static ::RPG::Client::RogueMagicScepterDataItem* CreateDisplayItem(::System::UInt32 specterID, ::System::UInt32 level)
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_CREATEDISPLAYITEM_OFFSET))(specterID, level);
		}

		static ::RPG::Client::RogueMagicScepterDataItem* CreateDisplayItem_1(::Struct_2_276321B6B122C69C_1 identifier)
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::Struct_2_276321B6B122C69C_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_CREATEDISPLAYITEM_1_OFFSET))(identifier);
		}

		static ::RPG::Client::RogueMagicScepterDataItem* CreateDisplayItemDiffCompModified(::System::UInt32 specterID, ::System::UInt32 level, ::System::UInt32 diffCompLevel)
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_CREATEDISPLAYITEMDIFFCOMPMODIFIED_OFFSET))(specterID, level, diffCompLevel);
		}

		static ::RPG::Client::RogueMagicScepterDataItem* CreateFromBattle(::RPG::GameCore::BattleRogueMagicData_Scepter* battleScepter, ::RPG::Client::RogueMagicScepterInfo* belongScepterInfo, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* lockedUnitItems, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>* slotCountMap, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>, ::System::UInt32>* equipUnitMap)
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::RPG::GameCore::BattleRogueMagicData_Scepter*, ::RPG::Client::RogueMagicScepterInfo*, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_CREATEFROMBATTLE_OFFSET))(battleScepter, belongScepterInfo, lockedUnitItems, slotCountMap, equipUnitMap);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_CC65FF4377016C5E* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CC65FF4377016C5E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_SYNC_OFFSET))(this, proto);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetLockedUnits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETLOCKEDUNITS_OFFSET))(this);
		}

		::RPG::Client::RogueMagicUnitDataItem* GetSlotUnitDataItem(::RPG::GameCore::RogueMagicMountType mountType, ::System::UInt32 slotID)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETSLOTUNITDATAITEM_OFFSET))(this, mountType, slotID);
		}

		::System::UInt32 GetAllSlotCount(::RPG::GameCore::RogueMagicMountType mountType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETALLSLOTCOUNT_OFFSET))(this, mountType);
		}

		::System::UInt32 GetOperableSlotCount(::RPG::GameCore::RogueMagicMountType mountType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETOPERABLESLOTCOUNT_OFFSET))(this, mountType);
		}

		::System::UInt32 GetSlotUnitUID(::RPG::GameCore::RogueMagicMountType mountType, ::System::UInt32 slotID)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETSLOTUNITUID_OFFSET))(this, mountType, slotID);
		}

		::System::Boolean IsHavingUnit(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_ISHAVINGUNIT_OFFSET))(this, uid);
		}

		::System::Void FindHavingUnitByCategory(::RPG::GameCore::RogueMagicUnitCategory category, ::RPG::Client::RogueMagicUnitDataItem*& unitData, ::System::UInt32& slotID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicUnitCategory, ::RPG::Client::RogueMagicUnitDataItem*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_FINDHAVINGUNITBYCATEGORY_OFFSET))(this, category, unitData, slotID);
		}

		::System::Void FindHavingUnitByUnitID(::System::UInt32 unitID, ::RPG::Client::RogueMagicUnitDataItem*& unitData, ::System::UInt32& slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RogueMagicUnitDataItem*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_FINDHAVINGUNITBYUNITID_OFFSET))(this, unitID, unitData, slotID);
		}

		::System::Boolean IsEquippedUnitShowNoEffectMark(::RPG::Client::RogueMagicUnitDataItem* unitData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_ISEQUIPPEDUNITSHOWNOEFFECTMARK_OFFSET))(this, unitData);
		}

		::System::UInt32 GetTotalPower()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETTOTALPOWER_OFFSET))(this);
		}

		::System::UInt32 GetBasicPower()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GETBASICPOWER_OFFSET))(this);
		}

		::System::UInt32 get_ScepterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_SCEPTERID_OFFSET))(this);
		}

		::System::Void set_ScepterID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_SET_SCEPTERID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_SET_LEVEL_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicScepterFuncType get_FuncType()
		{
			return ((::RPG::GameCore::RogueMagicScepterFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_FUNCTYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_BigIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_BIGICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_ScepterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_SCEPTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ScepterBgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_SCEPTERBGDESC_OFFSET))(this);
		}

		::System::String* get_ScepterTriggerDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_SCEPTERTRIGGERDESC_OFFSET))(this);
		}

		::System::String* get_LockedUnitEffect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_LOCKEDUNITEFFECT_OFFSET))(this);
		}

		::System::String* get_LockedUnitEffectSimple()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_LOCKEDUNITEFFECTSIMPLE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_LockedUnitExtraEffects()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_LOCKEDUNITEXTRAEFFECTS_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicStyleType get_StyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_STYLETYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicRangeType get_LimitRangeType()
		{
			return ((::RPG::GameCore::RogueMagicRangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_LIMITRANGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* get_EffectTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_EFFECTTYPES_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BasicPower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET_BASICPOWER_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicScepterRow* get__Row()
		{
			return ((::RPG::GameCore::RogueMagicScepterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicScepterDisplayRow* get__DisplayRow()
		{
			return ((::RPG::GameCore::RogueMagicScepterDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET__DISPLAYROW_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get__MazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM_GET__MAZEBUFFROW_OFFSET))(this);
		}
	};
}
