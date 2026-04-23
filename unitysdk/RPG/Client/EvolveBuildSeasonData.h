#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_702;
class Class_1_1B7044A592B17773_6;
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class EvolveBuildStage; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA301780)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETCARDUNLOCK_OFFSET UNITYSDK_OFFSET(0xA300780)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETCONFIGVALUE_OFFSET UNITYSDK_OFFSET(0xA301E90)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETQUESTFINISHORCLOSE_OFFSET UNITYSDK_OFFSET(0xA301CF0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETREMOVESELECTGEARUNLOCK_OFFSET UNITYSDK_OFFSET(0xA301DA0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETRESETSELECTGEARUNLOCK_OFFSET UNITYSDK_OFFSET(0xA301E40)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETSKIPSELECTGEARUNLOCK_OFFSET UNITYSDK_OFFSET(0xA301DF0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETSTAGEFIRSTPASSQUESTSDATA_OFFSET UNITYSDK_OFFSET(0xA301A30)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_ACCESSORYDICT_OFFSET UNITYSDK_OFFSET(0xA3022C0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_CARDDICT_OFFSET UNITYSDK_OFFSET(0xA3022D0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_COINCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0xA300600)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_COINITEMCONFIGID_OFFSET UNITYSDK_OFFSET(0xA3025F0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0xA3022F0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_FORGEDWEAPONDICT_OFFSET UNITYSDK_OFFSET(0xA3022B0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_NORMALWEAPONDICT_OFFSET UNITYSDK_OFFSET(0xA3022A0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_NORMALWEAPONLIST_OFFSET UNITYSDK_OFFSET(0xA302470)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_OFFERINGCONFIG_OFFSET UNITYSDK_OFFSET(0xA302520)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_SEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA302500)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xA302270)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_STAGEFIRSTPASSQUESTIDS_OFFSET UNITYSDK_OFFSET(0xA3022E0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_STAGES_OFFSET UNITYSDK_OFFSET(0xA302540)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_TUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0xA302290)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET__COINITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xA302560)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_INITSTAGES_OFFSET UNITYSDK_OFFSET(0xA301F00)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_ISSKILLSHOPAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA301980)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_COINNUM_OFFSET UNITYSDK_OFFSET(0xA3023D0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_OFFERINGCONFIG_OFFSET UNITYSDK_OFFSET(0xA302530)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_SEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA302510)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_STAGES_OFFSET UNITYSDK_OFFSET(0xA302550)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_TUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0xA302280)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA300D60)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA__INITCONSTDATABYSEASON_OFFSET UNITYSDK_OFFSET(0xA300FC0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA__INITOFFERINGCONFIG_OFFSET UNITYSDK_OFFSET(0xA301650)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA__INITSEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA301550)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildSeasonData_TypeDefinitionIndex = 58797;

	class EvolveBuildSeasonData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* _Stages_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>* _CardDict_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_702* _SeasonStrategy_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>* _NormalWeaponDict_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>* _AccessoryDict_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>* _ForgedWeaponDict_k__BackingField; // 0x38
		::Class_1_1B7044A592B17773_6* _OfferingConfig_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _StageFirstPassQuestIDs_k__BackingField; // 0x48
		::System::UInt32 _RemoveSelectGearQuestID; // 0x50
		::System::UInt32 _ResetSelectGearQuestID; // 0x54
		::System::UInt32 _SkillShopUnlockQuestID; // 0x58
		::System::UInt32 _CoinItemConfigID; // 0x5C
		::System::UInt32 _SkipSelectGearQuestID; // 0x60
		::System::UInt32 _TutorialStageID_k__BackingField; // 0x64
		::System::Nullable_1<::System::UInt32> _CardUnlockQuestID; // 0x68
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x70

		::System::Void _ctor(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA__CTOR_OFFSET))(this, season);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsSkillShopAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_ISSKILLSHOPAVAILABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetStageFirstPassQuestsData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETSTAGEFIRSTPASSQUESTSDATA_OFFSET))(this);
		}

		::System::Boolean GetCardUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETCARDUNLOCK_OFFSET))(this);
		}

		::System::Boolean GetRemoveSelectGearUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETREMOVESELECTGEARUNLOCK_OFFSET))(this);
		}

		::System::Boolean GetSkipSelectGearUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETSKIPSELECTGEARUNLOCK_OFFSET))(this);
		}

		::System::Boolean GetResetSelectGearUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETRESETSELECTGEARUNLOCK_OFFSET))(this);
		}

		::RPG::GameCore::DynamicValue* GetConfigValue(::System::String* key)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETCONFIGVALUE_OFFSET))(this, key);
		}

		::System::Void InitStages(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* stageList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_INITSTAGES_OFFSET))(this, stageList);
		}

		::System::Void _InitConstDataBySeason()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA__INITCONSTDATABYSEASON_OFFSET))(this);
		}

		::System::Void _InitSeasonStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA__INITSEASONSTRATEGY_OFFSET))(this);
		}

		::System::Void _InitOfferingConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA__INITOFFERINGCONFIG_OFFSET))(this);
		}

		static ::System::Boolean GetQuestFinishOrClose(::System::UInt32 questID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETQUESTFINISHORCLOSE_OFFSET))(questID);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_TutorialStageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_TUTORIALSTAGEID_OFFSET))(this, value);
		}

		::System::UInt32 get_TutorialStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_TUTORIALSTAGEID_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>* get_NormalWeaponDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_NORMALWEAPONDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>* get_ForgedWeaponDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_FORGEDWEAPONDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>* get_AccessoryDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_ACCESSORYDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>* get_CardDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_CARDDICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StageFirstPassQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_STAGEFIRSTPASSQUESTIDS_OFFSET))(this);
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_COINNUM_OFFSET))(this);
		}

		::System::Void set_CoinNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_COINNUM_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGear*>* get_NormalWeaponList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGear*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_NORMALWEAPONLIST_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_702* get_SeasonStrategy()
		{
			return ((::Class_0_16E4307DCC419505_702*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_SEASONSTRATEGY_OFFSET))(this);
		}

		::System::Void set_SeasonStrategy(::Class_0_16E4307DCC419505_702* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_702*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_SEASONSTRATEGY_OFFSET))(this, value);
		}

		::Class_1_1B7044A592B17773_6* get_OfferingConfig()
		{
			return ((::Class_1_1B7044A592B17773_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_OFFERINGCONFIG_OFFSET))(this);
		}

		::System::Void set_OfferingConfig(::Class_1_1B7044A592B17773_6* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1B7044A592B17773_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_OFFERINGCONFIG_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* get_Stages()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_STAGES_OFFSET))(this);
		}

		::System::Void set_Stages(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_STAGES_OFFSET))(this, value);
		}

		::System::String* get_CoinCurrencyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_COINCURRENCYICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_CoinItemConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_COINITEMCONFIGID_OFFSET))(this);
		}

		::RPG::Client::ItemData* get__CoinItemConfig()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET__COINITEMCONFIG_OFFSET))(this);
		}
	};
}
