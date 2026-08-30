#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_10.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_00C1046829D4D237;
class Class_1_6CCF78AD1D4E6598;
class Class_1_76D768243EB57C1F;
class Class_1_963E317C37FB5E9A_12;
class Class_1_C086E47345F86771_4;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChenLingBattleSoldierConfig; }
namespace RPG::Client { class ChenLingBattleSoldierLevelConfig; }
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::Client::ChenLingBattle { class Enchant; }
namespace RPG::Client::ChenLingBattle { class SoldierProperty; }
namespace RPG::Client::ChenLingBattle { class SoldierUnit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_CREATE_OFFSET UNITYSDK_OFFSET(0x1CC33AB0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLDISPLAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CC362E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLENCHANTS_OFFSET UNITYSDK_OFFSET(0x1CC36490)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBASEADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1CC363D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBATTLESCORE_OFFSET UNITYSDK_OFFSET(0x1CC34D60)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETDESC_OFFSET UNITYSDK_OFFSET(0x1CC353C0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETMULTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1CC36430)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROMOTIONSKILLDESC_OFFSET UNITYSDK_OFFSET(0x1CC35490)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTYADDDATA_OFFSET UNITYSDK_OFFSET(0x1CC36370)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1CC361B0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETTOTALENCHANTSLEVEL_OFFSET UNITYSDK_OFFSET(0x1CC35190)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1CC36110)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDTYPE_OFFSET UNITYSDK_OFFSET(0x1CC35F80)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1CC346C0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ENCHANTDICT_OFFSET UNITYSDK_OFFSET(0x1CC365D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_FORMATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CC359D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_INITIALMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1CC36020)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x1CC36000)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1CC352E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1CC355E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1CC36190)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1CC35CD0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC35DC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0x1CC35BE0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC35AF0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1CC35EA0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CC35AE0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITDICT_OFFSET UNITYSDK_OFFSET(0x1CC35750)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITS_OFFSET UNITYSDK_OFFSET(0x1CC35AC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET__SERVEREFFECTPROVIDER_OFFSET UNITYSDK_OFFSET(0x1CC365C0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_INITPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0x1CC34490)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETENCHANTS_OFFSET UNITYSDK_OFFSET(0x1CC34040)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x1CC33ED0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1CC33FF0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETPROMOTION_OFFSET UNITYSDK_OFFSET(0x1CC344F0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x1CC36010)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1CC361A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_UNITS_OFFSET UNITYSDK_OFFSET(0x1CC35AD0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCENCHANT_OFFSET UNITYSDK_OFFSET(0x1CC34C70)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYREMOVE_OFFSET UNITYSDK_OFFSET(0x1CC34C10)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYUPDATE_OFFSET UNITYSDK_OFFSET(0x1CC34BB0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC33D20)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER__REBUILDUNITFORMATION_OFFSET UNITYSDK_OFFSET(0x1CC34920)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Soldier_TypeDefinitionIndex = 75894;

	class Soldier : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattleSoldierLevelConfig* _LevelConfig; // 0x10
		::Class_1_6CCF78AD1D4E6598* __ServerEffectProvider_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>* _EnchantDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::SoldierUnit*>* _UnitDict; // 0x28
		::RPG::Client::ChenLingBattleSoldierConfig* _Config; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>* _Units_k__BackingField; // 0x38
		::RPG::Client::ChenLingBattle::CardConfig* _CardConfig; // 0x40
		::System::UInt32 _MaxLevel_k__BackingField; // 0x48
		::System::Boolean _IsPromotion_k__BackingField; // 0x4C
		::System::UInt32 _UniqueID_k__BackingField; // 0x50

		::System::Void _ctor(::RPG::Client::ChenLingBattle::CardConfig* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ChenLingBattle::Soldier* Create(::Class_1_76D768243EB57C1F* a1)
		{
			return ((::RPG::Client::ChenLingBattle::Soldier*(*)(::Class_1_76D768243EB57C1F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_CREATE_OFFSET))(a1);
		}

		::System::Void SetLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETLEVEL_OFFSET))(this, a1);
		}

		::System::Void SetMaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETMAXLEVEL_OFFSET))(this, a1);
		}

		::System::Void SetEnchants(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_4*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_4*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETENCHANTS_OFFSET))(this, a1);
		}

		::System::Void SetPromotion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETPROMOTION_OFFSET))(this, a1);
		}

		::System::Void InitPropertyData(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_00C1046829D4D237*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_00C1046829D4D237*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_INITPROPERTYDATA_OFFSET))(this, a1);
		}

		::System::Void SyncPropertyUpdate(::Class_1_00C1046829D4D237* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_00C1046829D4D237*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncPropertyRemove(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYREMOVE_OFFSET))(this, a1);
		}

		::System::Void SyncEnchant(::Class_1_963E317C37FB5E9A_12* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCENCHANT_OFFSET))(this, a1);
		}

		::System::UInt32 GetBattleScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBATTLESCORE_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETDESC_OFFSET))(this);
		}

		::System::String* GetPromotionSkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROMOTIONSKILLDESC_OFFSET))(this);
		}

		::System::Void _RebuildUnitFormation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER__REBUILDUNITFORMATION_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::SoldierUnit*>* get_UnitDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::SoldierUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITDICT_OFFSET))(this);
		}

		::System::UInt32 get_FormationType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_FORMATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>* get_Units()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITS_OFFSET))(this);
		}

		::System::Void set_Units(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_UNITS_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNIQUEID_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconOutlinePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONOUTLINEPATH_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_TypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_TYPENAME_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingCardType get_CardType()
		{
			return ((::RPG::GameCore::ChenLingCardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDTYPE_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CONFIGID_OFFSET))(this);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::Void set_IsPromotion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_ISPROMOTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_InitialMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_INITIALMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_CardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDID_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattle::SoldierProperty* GetProperty(::Enum_3_71AA90D596A09AC8_10 a1)
		{
			return ((::RPG::Client::ChenLingBattle::SoldierProperty*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>* GetAllDisplayProperties()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLDISPLAYPROPERTIES_OFFSET))(this);
		}

		::Class_1_00C1046829D4D237* GetPropertyAddData(::Enum_3_71AA90D596A09AC8_10 a1)
		{
			return ((::Class_1_00C1046829D4D237*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTYADDDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GetBaseAddSequence(::Enum_3_71AA90D596A09AC8_10 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBASEADDSEQUENCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GetMultSequence(::Enum_3_71AA90D596A09AC8_10 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETMULTSEQUENCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Enchant*>* GetAllEnchants()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Enchant*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLENCHANTS_OFFSET))(this);
		}

		::System::UInt32 GetTotalEnchantsLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETTOTALENCHANTSLEVEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattleSoldierLevelConfig* get_LevelConfig()
		{
			return ((::RPG::Client::ChenLingBattleSoldierLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVELCONFIG_OFFSET))(this);
		}

		::Class_1_6CCF78AD1D4E6598* get__ServerEffectProvider()
		{
			return ((::Class_1_6CCF78AD1D4E6598*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET__SERVEREFFECTPROVIDER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>* get_EnchantDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ENCHANTDICT_OFFSET))(this);
		}
	};
}
