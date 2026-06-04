#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_9.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_1B0D7D2CB27F3D72;
class Class_1_4AF393E7839B85AC;
class Class_1_6CCF78AD1D4E6598;
class Class_1_963E317C37FB5E9A_9;
class Class_1_C086E47345F86771_2;
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

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_CREATE_OFFSET UNITYSDK_OFFSET(0xB5CC2A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLDISPLAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0xB5CE290)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLENCHANTS_OFFSET UNITYSDK_OFFSET(0xB5CE440)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBASEADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB5CE380)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBATTLESCORE_OFFSET UNITYSDK_OFFSET(0xB5CD080)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETDESC_OFFSET UNITYSDK_OFFSET(0xB5CD720)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETMULTSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB5CE3E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROMOTIONSKILLDESC_OFFSET UNITYSDK_OFFSET(0xB5CD780)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTYADDDATA_OFFSET UNITYSDK_OFFSET(0xB5CE320)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xB5CE160)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETTOTALENCHANTSLEVEL_OFFSET UNITYSDK_OFFSET(0xB5CD510)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDID_OFFSET UNITYSDK_OFFSET(0xB5CE110)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDTYPE_OFFSET UNITYSDK_OFFSET(0xB5CDFD0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xB5B6B30)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ENCHANTDICT_OFFSET UNITYSDK_OFFSET(0xB5CE580)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_FORMATIONTYPE_OFFSET UNITYSDK_OFFSET(0xB5CDBC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_INITIALMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB5CE020)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0xB5CE000)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xB5CD660)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB5B8E30)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB5CE140)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xB5CDED0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB5CDF50)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0xB5CDDE0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xB5CDCF0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0xB5CDF90)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB5CDCE0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITDICT_OFFSET UNITYSDK_OFFSET(0xB5CD940)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITS_OFFSET UNITYSDK_OFFSET(0xB5CDCC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET__SERVEREFFECTPROVIDER_OFFSET UNITYSDK_OFFSET(0xB5CE570)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_INITPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0xB5CC9C0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETENCHANTS_OFFSET UNITYSDK_OFFSET(0xB5CC690)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0xB5B49C0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB5B4A90)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETPROMOTION_OFFSET UNITYSDK_OFFSET(0xB5B4BD0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0xB5CE010)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB5CE150)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_UNITS_OFFSET UNITYSDK_OFFSET(0xB5CDCD0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCENCHANT_OFFSET UNITYSDK_OFFSET(0xB5B4CF0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYREMOVE_OFFSET UNITYSDK_OFFSET(0xB5CD020)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYUPDATE_OFFSET UNITYSDK_OFFSET(0xB5CCFC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER__CTOR_OFFSET UNITYSDK_OFFSET(0xB5CC510)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER__REBUILDUNITFORMATION_OFFSET UNITYSDK_OFFSET(0xB5CCC40)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Soldier_TypeDefinitionIndex = 70945;

	class Soldier : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::SoldierUnit*>* _UnitDict; // 0x10
		::Class_1_6CCF78AD1D4E6598* __ServerEffectProvider_k__BackingField; // 0x18
		::RPG::Client::ChenLingBattleSoldierLevelConfig* _LevelConfig; // 0x20
		::RPG::Client::ChenLingBattleSoldierConfig* _Config; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>* _EnchantDict; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>* _Units_k__BackingField; // 0x38
		::RPG::Client::ChenLingBattle::CardConfig* _CardConfig; // 0x40
		::System::UInt32 _UniqueID_k__BackingField; // 0x48
		::System::Boolean _IsPromotion_k__BackingField; // 0x4C
		::System::UInt32 _MaxLevel_k__BackingField; // 0x50

		::System::Void _ctor(::RPG::Client::ChenLingBattle::CardConfig* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ChenLingBattle::Soldier* Create(::Class_1_1B0D7D2CB27F3D72* a1)
		{
			return ((::RPG::Client::ChenLingBattle::Soldier*(*)(::Class_1_1B0D7D2CB27F3D72*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_CREATE_OFFSET))(a1);
		}

		::System::Void SetLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETLEVEL_OFFSET))(this, a1);
		}

		::System::Void SetMaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETMAXLEVEL_OFFSET))(this, a1);
		}

		::System::Void SetEnchants(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETENCHANTS_OFFSET))(this, a1);
		}

		::System::Void SetPromotion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETPROMOTION_OFFSET))(this, a1);
		}

		::System::Void InitPropertyData(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4AF393E7839B85AC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4AF393E7839B85AC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_INITPROPERTYDATA_OFFSET))(this, a1);
		}

		::System::Void SyncPropertyUpdate(::Class_1_4AF393E7839B85AC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AF393E7839B85AC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncPropertyRemove(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYREMOVE_OFFSET))(this, a1);
		}

		::System::Void SyncEnchant(::Class_1_963E317C37FB5E9A_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCENCHANT_OFFSET))(this, a1);
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

		::RPG::Client::ChenLingBattle::SoldierProperty* GetProperty(::Enum_3_71AA90D596A09AC8_9 a1)
		{
			return ((::RPG::Client::ChenLingBattle::SoldierProperty*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>* GetAllDisplayProperties()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLDISPLAYPROPERTIES_OFFSET))(this);
		}

		::Class_1_4AF393E7839B85AC* GetPropertyAddData(::Enum_3_71AA90D596A09AC8_9 a1)
		{
			return ((::Class_1_4AF393E7839B85AC*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTYADDDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GetBaseAddSequence(::Enum_3_71AA90D596A09AC8_9 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBASEADDSEQUENCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GetMultSequence(::Enum_3_71AA90D596A09AC8_9 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETMULTSEQUENCE_OFFSET))(this, a1);
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
