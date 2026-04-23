#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenGameEnergyType.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenGameTargetType.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/RPG/GameCore/HipplenStatGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_4B6B1EA474B8E7B0;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentSentence; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace RPG::GameCore { class ActivityHipplenGameGradeRow; }
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace RPG::GameCore { class ActivityHipplenStatConfigRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HipplenMiniGameGradeConfig; }
namespace RPG::GameCore { class HipplenRequireStatGrade; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CALCULATEGRADETYPE_OFFSET UNITYSDK_OFFSET(0x9B0C7F0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKPHASESTATVALUETARGETWITHCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x9B181E0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKPHASEUNLOCKAUTOTRIAL_OFFSET UNITYSDK_OFFSET(0x9B02250)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKREQUIRESTATGRADE_OFFSET UNITYSDK_OFFSET(0x9B06FA0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKSTATGRADEUP_OFFSET UNITYSDK_OFFSET(0x9B17A80)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKWORKDATAISOPTIONINCIDENT_OFFSET UNITYSDK_OFFSET(0x9B18530)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_FETCHMAXREQUIRETIMES_OFFSET UNITYSDK_OFFSET(0x9B0BD80)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETCYCLEGROWTHPHASETRIALNAMELIST_OFFSET UNITYSDK_OFFSET(0x9B18B20)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETEVENTNAMEBYEMOTION_OFFSET UNITYSDK_OFFSET(0x9B193E0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETFIRSTSENTENCEDESC_OFFSET UNITYSDK_OFFSET(0x9B17F40)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETGAMEGRADECONFIG_OFFSET UNITYSDK_OFFSET(0x9B17CF0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETGAMEGRADETYPEINT_OFFSET UNITYSDK_OFFSET(0x9B17D50)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENENTITY_OFFSET UNITYSDK_OFFSET(0x9B17BE0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENGAMEENERGYTYPE_OFFSET UNITYSDK_OFFSET(0x9B183A0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENINTERACTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x9B17BA0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETINTERACTCAMERANAME_OFFSET UNITYSDK_OFFSET(0x9AF19F0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETINTERACTCONFIG_OFFSET UNITYSDK_OFFSET(0x9B17B40)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETINTERACTPLANEANCHORNAME_OFFSET UNITYSDK_OFFSET(0x9B18090)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETITEMDISPLAYDATAFROMGIFTLIST_OFFSET UNITYSDK_OFFSET(0x9B19100)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETNEWUNLOCKEDINTERACTPROPS_OFFSET UNITYSDK_OFFSET(0x9B18760)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETOUTFITTYPEINT_OFFSET UNITYSDK_OFFSET(0x9B17D90)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETOVERRIDESORTINGORDER_OFFSET UNITYSDK_OFFSET(0x9B18FA0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSENTENCEDATA_OFFSET UNITYSDK_OFFSET(0x9B17EA0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSENTENCEIDLIST_OFFSET UNITYSDK_OFFSET(0x9B17E30)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATCONFIG_OFFSET UNITYSDK_OFFSET(0x9B17DD0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATGRADETYPE_OFFSET UNITYSDK_OFFSET(0x9B00DE0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x9B01B50)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETWORKDATABEFORECURWORKDATA_OFFSET UNITYSDK_OFFSET(0x9B185E0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_ISMAINPAGEOPEND_OFFSET UNITYSDK_OFFSET(0x9B15DC0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_OPENHIPPLENMAINPAGE_OFFSET UNITYSDK_OFFSET(0x9B17690)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_SHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x9B17AD0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_SMOOTHEXITGAME_OFFSET UNITYSDK_OFFSET(0x9B00090)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_TRYGETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x9B18320)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHipplenUtils_TypeDefinitionIndex = 56743;

	class ActivityHipplenUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetStatTypeCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATTYPECOUNT_OFFSET))();
		}

		static ::RPG::GameCore::HipplenStatGradeType GetStatGradeType(::System::Single value, ::Il2CppArray<::Class_1_4B6B1EA474B8E7B0*>* statGradeParam, ::System::Int32& maxValue)
		{
			return ((::RPG::GameCore::HipplenStatGradeType(*)(::System::Single, ::Il2CppArray<::Class_1_4B6B1EA474B8E7B0*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATGRADETYPE_OFFSET))(value, statGradeParam, maxValue);
		}

		static ::System::Boolean CheckStatGradeUp(::RPG::GameCore::HipplenStatGradeType preType, ::RPG::GameCore::HipplenStatGradeType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::HipplenStatGradeType, ::RPG::GameCore::HipplenStatGradeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKSTATGRADEUP_OFFSET))(preType, type);
		}

		static ::System::Void ShowLoadingPage(::System::String* loadingPagePath, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_SHOWLOADINGPAGE_OFFSET))(loadingPagePath, args);
		}

		static ::RPG::GameCore::ActivityHipplenInteractInfoRow* GetInteractConfig(::RPG::GameCore::HipplenInteractType type)
		{
			return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::RPG::GameCore::HipplenInteractType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETINTERACTCONFIG_OFFSET))(type);
		}

		static ::System::Int32 GetHipplenInteractTypeCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENINTERACTTYPECOUNT_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* GetHipplenEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENENTITY_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenGameGradeRow* GetGameGradeConfig(::RPG::GameCore::HipplenGameGradeType gradeType)
		{
			return ((::RPG::GameCore::ActivityHipplenGameGradeRow*(*)(::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETGAMEGRADECONFIG_OFFSET))(gradeType);
		}

		static ::System::Int32 GetGameGradeTypeInt(::RPG::GameCore::HipplenGameGradeType gradeType)
		{
			return ((::System::Int32(*)(::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETGAMEGRADETYPEINT_OFFSET))(gradeType);
		}

		static ::System::UInt32 GetOutfitTypeInt(::RPG::GameCore::HipplenOutfitType outfitType)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETOUTFITTYPEINT_OFFSET))(outfitType);
		}

		static ::RPG::GameCore::ActivityHipplenStatConfigRow* GetStatConfig(::RPG::GameCore::HipplenStatType statType)
		{
			return ((::RPG::GameCore::ActivityHipplenStatConfigRow*(*)(::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATCONFIG_OFFSET))(statType);
		}

		static ::Il2CppArray<::System::UInt32>* GetSentenceIDList(::System::UInt32 dialogID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSENTENCEIDLIST_OFFSET))(dialogID);
		}

		static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentSentence* GetSentenceData(::System::UInt32 sentenceID)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentSentence*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSENTENCEDATA_OFFSET))(sentenceID);
		}

		static ::RPG::Client::TextID GetFirstSentenceDesc(::System::UInt32 dialogID)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETFIRSTSENTENCEDESC_OFFSET))(dialogID);
		}

		static ::System::String* GetInteractPlaneAnchorName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETINTERACTPLANEANCHORNAME_OFFSET))();
		}

		static ::System::String* GetInteractCameraName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETINTERACTCAMERANAME_OFFSET))();
		}

		static ::System::Boolean CheckPhaseUnlockAutoTrial()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKPHASEUNLOCKAUTOTRIAL_OFFSET))();
		}

		static ::System::Boolean CheckPhaseStatValueTargetWithChangeValue(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* changeValue, ::RPG::GameCore::HipplenStatType statType)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKPHASESTATVALUETARGETWITHCHANGEVALUE_OFFSET))(changeValue, statType);
		}

		static ::RPG::GameCore::GameEntity* TryGetTargetEntity(::RPG::GameCore::HipplenGameTargetType type, ::System::String* param)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::HipplenGameTargetType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_TRYGETTARGETENTITY_OFFSET))(type, param);
		}

		static ::RPG::GameCore::HipplenGameGradeType CalculateGradeType(::System::Int32 successCount, ::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>* gradeConfigs)
		{
			return ((::RPG::GameCore::HipplenGameGradeType(*)(::System::Int32, ::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_CALCULATEGRADETYPE_OFFSET))(successCount, gradeConfigs);
		}

		static ::System::Int32 FetchMaxRequireTimes(::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>* gradeConfigs)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_FETCHMAXREQUIRETIMES_OFFSET))(gradeConfigs);
		}

		static ::System::Boolean CheckRequireStatGrade(::RPG::GameCore::HipplenRequireStatGrade* config)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::HipplenRequireStatGrade*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKREQUIRESTATGRADE_OFFSET))(config);
		}

		static ::RPG::GameCore::HipplenGameEnergyType GetHipplenGameEnergyType(::System::Int32 energy)
		{
			return ((::RPG::GameCore::HipplenGameEnergyType(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENGAMEENERGYTYPE_OFFSET))(energy);
		}

		static ::System::Boolean CheckWorkDataIsOptionIncident(::System::UInt32 workID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKWORKDATAISOPTIONINCIDENT_OFFSET))(workID);
		}

		static ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* GetWorkDataBeforeCurWorkData(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* curWorkData)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*(*)(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETWORKDATABEFORECURWORKDATA_OFFSET))(curWorkData);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*>* GetNewUnlockedInteractProps()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETNEWUNLOCKEDINTERACTPROPS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetCycleGrowthPhaseTrialNameList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETCYCLEGROWTHPHASETRIALNAMELIST_OFFSET))();
		}

		static ::System::Int32 GetOverrideSortingOrder()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETOVERRIDESORTINGORDER_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetItemDisplayDataFromGiftList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>* giftList)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETITEMDISPLAYDATAFROMGIFTLIST_OFFSET))(giftList);
		}

		static ::System::String* GetEventNameByEmotion(::System::Int32 emotionIndex)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETEVENTNAMEBYEMOTION_OFFSET))(emotionIndex);
		}

		static ::System::Void SmoothExitGame(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_SMOOTHEXITGAME_OFFSET))(game);
		}

		static ::System::Void OpenHipplenMainPage(::System::Action* onEnter)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_OPENHIPPLENMAINPAGE_OFFSET))(onEnter);
		}

		static ::System::Boolean IsMainPageOpend()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_ISMAINPAGEOPEND_OFFSET))();
		}
	};
}
