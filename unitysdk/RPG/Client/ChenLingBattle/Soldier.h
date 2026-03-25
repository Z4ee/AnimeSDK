#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_7.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_6CCF78AD1D4E6598;
class Class_1_847DDCF77C99B561_2;
class Class_1_B6D38458ABFFB84C;
class Class_1_D7B17FB02EF70CD8_2;
class Class_1_F4C6CB9A7CE9D3F2;
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

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_CREATE_OFFSET UNITYSDK_OFFSET(0x9343EC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLDISPLAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x93466E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLENCHANTS_OFFSET UNITYSDK_OFFSET(0x9346890)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBASEADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x93467D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBATTLESCORE_OFFSET UNITYSDK_OFFSET(0x9344AB0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETDESC_OFFSET UNITYSDK_OFFSET(0x9345C60)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETMULTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x9346830)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROMOTIONSKILLDESC_OFFSET UNITYSDK_OFFSET(0x9345CC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTYADDDATA_OFFSET UNITYSDK_OFFSET(0x9346770)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x93465B0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETTOTALENCHANTSLEVEL_OFFSET UNITYSDK_OFFSET(0x9345AC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x9346560)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDTYPE_OFFSET UNITYSDK_OFFSET(0x9346420)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9327FB0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ENCHANTDICT_OFFSET UNITYSDK_OFFSET(0x9346930)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_FORMATIONTYPE_OFFSET UNITYSDK_OFFSET(0x9346090)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_INITIALMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9346470)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x9346450)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x9345C20)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9329920)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9346590)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x9346320)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x93463A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0x9346230)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x9346140)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x93463E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9346130)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITDICT_OFFSET UNITYSDK_OFFSET(0x9345E00)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITS_OFFSET UNITYSDK_OFFSET(0x9346110)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET__SERVEREFFECTPROVIDER_OFFSET UNITYSDK_OFFSET(0x9346920)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_INITPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0x93445E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETENCHANTS_OFFSET UNITYSDK_OFFSET(0x93442A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x932F390)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x932F460)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETPROMOTION_OFFSET UNITYSDK_OFFSET(0x932F5A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x9346460)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x93465A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_UNITS_OFFSET UNITYSDK_OFFSET(0x9346120)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCENCHANT_OFFSET UNITYSDK_OFFSET(0x932F6B0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYREMOVE_OFFSET UNITYSDK_OFFSET(0x9344A50)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYUPDATE_OFFSET UNITYSDK_OFFSET(0x93449F0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER__CTOR_OFFSET UNITYSDK_OFFSET(0x9344130)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER__REBUILDUNITFORMATION_OFFSET UNITYSDK_OFFSET(0x9344640)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Soldier_TypeDefinitionIndex = 62134;

	class Soldier : public ::System::Object
	{
	public:
		::Class_1_6CCF78AD1D4E6598* __ServerEffectProvider_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>* _EnchantDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>* _Units_k__BackingField; // 0x20
		::RPG::Client::ChenLingBattleSoldierConfig* _Config; // 0x28
		::RPG::Client::ChenLingBattleSoldierLevelConfig* _LevelConfig; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::SoldierUnit*>* _UnitDict; // 0x38
		::RPG::Client::ChenLingBattle::CardConfig* _CardConfig; // 0x40
		::System::Boolean _IsPromotion_k__BackingField; // 0x48
		::System::UInt32 _UniqueID_k__BackingField; // 0x4C
		::System::UInt32 _MaxLevel_k__BackingField; // 0x50

		::System::Void _ctor(::RPG::Client::ChenLingBattle::CardConfig* cardConfig, ::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER__CTOR_OFFSET))(this, cardConfig, uniqueID);
		}

		static ::RPG::Client::ChenLingBattle::Soldier* Create(::Class_1_F4C6CB9A7CE9D3F2* entityProto)
		{
			return ((::RPG::Client::ChenLingBattle::Soldier*(*)(::Class_1_F4C6CB9A7CE9D3F2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_CREATE_OFFSET))(entityProto);
		}

		::System::Void SetLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETLEVEL_OFFSET))(this, level);
		}

		::System::Void SetMaxLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETMAXLEVEL_OFFSET))(this, level);
		}

		::System::Void SetEnchants(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_847DDCF77C99B561_2*>* enchantList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_847DDCF77C99B561_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETENCHANTS_OFFSET))(this, enchantList);
		}

		::System::Void SetPromotion(::System::Boolean isPromotion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETPROMOTION_OFFSET))(this, isPromotion);
		}

		::System::Void InitPropertyData(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B6D38458ABFFB84C*>* attrAddList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B6D38458ABFFB84C*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_INITPROPERTYDATA_OFFSET))(this, attrAddList);
		}

		::System::Void SyncPropertyUpdate(::Class_1_B6D38458ABFFB84C* propertyAdd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B6D38458ABFFB84C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYUPDATE_OFFSET))(this, propertyAdd);
		}

		::System::Void SyncPropertyRemove(::System::Collections::Generic::IList_1<::System::UInt32>* effectUIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYREMOVE_OFFSET))(this, effectUIDList);
		}

		::System::Void SyncEnchant(::Class_1_D7B17FB02EF70CD8_2* enchantChange)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7B17FB02EF70CD8_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCENCHANT_OFFSET))(this, enchantChange);
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

		::System::Void set_Units(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_UNITS_OFFSET))(this, value);
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

		::System::Void set_IsPromotion(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_ISPROMOTION_OFFSET))(this, value);
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

		::System::Void set_MaxLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_MAXLEVEL_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingBattle::SoldierProperty* GetProperty(::Enum_3_71AA90D596A09AC8_7 type)
		{
			return ((::RPG::Client::ChenLingBattle::SoldierProperty*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTY_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>* GetAllDisplayProperties()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLDISPLAYPROPERTIES_OFFSET))(this);
		}

		::Class_1_B6D38458ABFFB84C* GetPropertyAddData(::Enum_3_71AA90D596A09AC8_7 type)
		{
			return ((::Class_1_B6D38458ABFFB84C*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTYADDDATA_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GetBaseAddSequence(::Enum_3_71AA90D596A09AC8_7 type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBASEADDSEQUENCE_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GetMultSequence(::Enum_3_71AA90D596A09AC8_7 type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETMULTSEQUENCE_OFFSET))(this, type);
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
