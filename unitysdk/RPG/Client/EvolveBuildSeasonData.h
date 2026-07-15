#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_788;
class Class_1_97E659ED8D5D259C_11;
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class EvolveBuildStage; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17CF37F0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETCARDUNLOCK_OFFSET UNITYSDK_OFFSET(0x17D00590)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETCONFIGVALUE_OFFSET UNITYSDK_OFFSET(0x17D01750)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETQUESTFINISHORCLOSE_OFFSET UNITYSDK_OFFSET(0x17D015B0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETREMOVESELECTGEARUNLOCK_OFFSET UNITYSDK_OFFSET(0x17D01660)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETRESETSELECTGEARUNLOCK_OFFSET UNITYSDK_OFFSET(0x17D01700)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETSKIPSELECTGEARUNLOCK_OFFSET UNITYSDK_OFFSET(0x17D016B0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETSTAGEFIRSTPASSQUESTSDATA_OFFSET UNITYSDK_OFFSET(0x17CF9750)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_ACCESSORYDICT_OFFSET UNITYSDK_OFFSET(0x17D01860)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_CARDDICT_OFFSET UNITYSDK_OFFSET(0x17D01870)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_COINCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0x17CF7510)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_COINITEMCONFIGID_OFFSET UNITYSDK_OFFSET(0x17D01B90)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0x17D01890)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_FORGEDWEAPONDICT_OFFSET UNITYSDK_OFFSET(0x17D01850)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_NORMALWEAPONDICT_OFFSET UNITYSDK_OFFSET(0x17D01840)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_NORMALWEAPONLIST_OFFSET UNITYSDK_OFFSET(0x17D01970)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_OFFERINGCONFIG_OFFSET UNITYSDK_OFFSET(0x17D01AC0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_SEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0x17D01AA0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x17D01810)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_STAGEFIRSTPASSQUESTIDS_OFFSET UNITYSDK_OFFSET(0x17D01880)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_STAGES_OFFSET UNITYSDK_OFFSET(0x17D01AE0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_TUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0x17D01830)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET__COINITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x17D01B00)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_INITSTAGES_OFFSET UNITYSDK_OFFSET(0x17CFB5F0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_ISSKILLSHOPAVAILABLE_OFFSET UNITYSDK_OFFSET(0x17CF73C0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_COINNUM_OFFSET UNITYSDK_OFFSET(0x17CFD9D0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_OFFERINGCONFIG_OFFSET UNITYSDK_OFFSET(0x17D01AD0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_SEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0x17D01AB0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_STAGES_OFFSET UNITYSDK_OFFSET(0x17D01AF0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_TUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0x17D01820)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17CFBB30)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA__INITCONSTDATABYSEASON_OFFSET UNITYSDK_OFFSET(0x17D00D70)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA__INITOFFERINGCONFIG_OFFSET UNITYSDK_OFFSET(0x17D01420)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA__INITSEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0x17D01300)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildSeasonData_TypeDefinitionIndex = 61012;

	class EvolveBuildSeasonData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>* _AccessoryDict_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>* _ForgedWeaponDict_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* _Stages_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _StageFirstPassQuestIDs_k__BackingField; // 0x28
		::Class_1_97E659ED8D5D259C_11* _OfferingConfig_k__BackingField; // 0x30
		::Class_0_16E4307DCC419505_788* _SeasonStrategy_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>* _CardDict_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>* _NormalWeaponDict_k__BackingField; // 0x48
		::System::Nullable_1<::System::UInt32> _CardUnlockQuestID; // 0x50
		::System::UInt32 _CoinItemConfigID; // 0x58
		::System::UInt32 _SkipSelectGearQuestID; // 0x5C
		::System::UInt32 _ResetSelectGearQuestID; // 0x60
		::System::UInt32 _RemoveSelectGearQuestID; // 0x64
		::System::UInt32 _TutorialStageID_k__BackingField; // 0x68
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x6C
		::System::UInt32 _SkillShopUnlockQuestID; // 0x70

		::System::Void _ctor(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA__CTOR_OFFSET))(this, a1);
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

		::RPG::GameCore::DynamicValue* GetConfigValue(::System::String* a1)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETCONFIGVALUE_OFFSET))(this, a1);
		}

		::System::Void InitStages(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_INITSTAGES_OFFSET))(this, a1);
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

		static ::System::Boolean GetQuestFinishOrClose(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GETQUESTFINISHORCLOSE_OFFSET))(a1);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_TutorialStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_TUTORIALSTAGEID_OFFSET))(this, a1);
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

		::System::Void set_CoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_COINNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGear*>* get_NormalWeaponList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGear*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_NORMALWEAPONLIST_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_788* get_SeasonStrategy()
		{
			return ((::Class_0_16E4307DCC419505_788*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_SEASONSTRATEGY_OFFSET))(this);
		}

		::System::Void set_SeasonStrategy(::Class_0_16E4307DCC419505_788* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_788*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_SEASONSTRATEGY_OFFSET))(this, a1);
		}

		::Class_1_97E659ED8D5D259C_11* get_OfferingConfig()
		{
			return ((::Class_1_97E659ED8D5D259C_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_OFFERINGCONFIG_OFFSET))(this);
		}

		::System::Void set_OfferingConfig(::Class_1_97E659ED8D5D259C_11* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_OFFERINGCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* get_Stages()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_GET_STAGES_OFFSET))(this);
		}

		::System::Void set_Stages(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA_SET_STAGES_OFFSET))(this, a1);
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
