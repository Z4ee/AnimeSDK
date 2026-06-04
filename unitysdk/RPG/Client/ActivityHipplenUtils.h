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

#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CALCULATEGRADETYPE_OFFSET UNITYSDK_OFFSET(0xB0FD610)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKPHASESTATVALUETARGETWITHCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB0FD450)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKPHASEUNLOCKAUTOTRIAL_OFFSET UNITYSDK_OFFSET(0xB0FD320)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKREQUIRESTATGRADE_OFFSET UNITYSDK_OFFSET(0xB0FD740)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKSTATGRADEUP_OFFSET UNITYSDK_OFFSET(0xB0FCA80)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKWORKDATAISOPTIONINCIDENT_OFFSET UNITYSDK_OFFSET(0xB0FD9B0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_FETCHMAXREQUIRETIMES_OFFSET UNITYSDK_OFFSET(0xB0FD6B0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETCYCLEGROWTHPHASETRIALNAMELIST_OFFSET UNITYSDK_OFFSET(0xB0FE080)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETEVENTNAMEBYEMOTION_OFFSET UNITYSDK_OFFSET(0xB0FE980)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETFIRSTSENTENCEDESC_OFFSET UNITYSDK_OFFSET(0xB0FCF40)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETGAMEGRADECONFIG_OFFSET UNITYSDK_OFFSET(0xB0FCCF0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETGAMEGRADETYPEINT_OFFSET UNITYSDK_OFFSET(0xB0FCD50)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENENTITY_OFFSET UNITYSDK_OFFSET(0xB0FCBE0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENGAMEENERGYTYPE_OFFSET UNITYSDK_OFFSET(0xB0FD820)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENINTERACTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0xB0FCBA0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETINTERACTCAMERANAME_OFFSET UNITYSDK_OFFSET(0xB0FD1D0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETINTERACTCONFIG_OFFSET UNITYSDK_OFFSET(0xB0FCB40)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETINTERACTPLANEANCHORNAME_OFFSET UNITYSDK_OFFSET(0xB0FD080)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETITEMDISPLAYDATAFROMGIFTLIST_OFFSET UNITYSDK_OFFSET(0xB0FE760)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETNEWUNLOCKEDINTERACTPROPS_OFFSET UNITYSDK_OFFSET(0xB0FDBD0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETOUTFITTYPEINT_OFFSET UNITYSDK_OFFSET(0xB0FCD90)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETOVERRIDESORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB0FE600)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSENTENCEDATA_OFFSET UNITYSDK_OFFSET(0xB0FCEA0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSENTENCEIDLIST_OFFSET UNITYSDK_OFFSET(0xB0FCE30)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATCONFIG_OFFSET UNITYSDK_OFFSET(0xB0FCDD0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATGRADETYPE_OFFSET UNITYSDK_OFFSET(0xB0FC6B0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATTYPECOUNT_OFFSET UNITYSDK_OFFSET(0xB0FC670)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETWORKDATABEFORECURWORKDATA_OFFSET UNITYSDK_OFFSET(0xB0FDA60)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_ISMAINPAGEOPEND_OFFSET UNITYSDK_OFFSET(0xB0FA210)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_OPENHIPPLENMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB0FC280)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_SHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xB0FCAD0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_SMOOTHEXITGAME_OFFSET UNITYSDK_OFFSET(0xB0FEA80)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS_TRYGETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xB0FD590)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHipplenUtils_TypeDefinitionIndex = 57527;

	class ActivityHipplenUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetStatTypeCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATTYPECOUNT_OFFSET))();
		}

		static ::RPG::GameCore::HipplenStatGradeType GetStatGradeType(::System::Single a1, ::Il2CppArray<::Class_1_4B6B1EA474B8E7B0*>* a2, ::System::Int32& a3)
		{
			return ((::RPG::GameCore::HipplenStatGradeType(*)(::System::Single, ::Il2CppArray<::Class_1_4B6B1EA474B8E7B0*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATGRADETYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CheckStatGradeUp(::RPG::GameCore::HipplenStatGradeType a1, ::RPG::GameCore::HipplenStatGradeType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::HipplenStatGradeType, ::RPG::GameCore::HipplenStatGradeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKSTATGRADEUP_OFFSET))(a1, a2);
		}

		static ::System::Void ShowLoadingPage(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_SHOWLOADINGPAGE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ActivityHipplenInteractInfoRow* GetInteractConfig(::RPG::GameCore::HipplenInteractType a1)
		{
			return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::RPG::GameCore::HipplenInteractType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETINTERACTCONFIG_OFFSET))(a1);
		}

		static ::System::Int32 GetHipplenInteractTypeCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENINTERACTTYPECOUNT_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* GetHipplenEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENENTITY_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenGameGradeRow* GetGameGradeConfig(::RPG::GameCore::HipplenGameGradeType a1)
		{
			return ((::RPG::GameCore::ActivityHipplenGameGradeRow*(*)(::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETGAMEGRADECONFIG_OFFSET))(a1);
		}

		static ::System::Int32 GetGameGradeTypeInt(::RPG::GameCore::HipplenGameGradeType a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETGAMEGRADETYPEINT_OFFSET))(a1);
		}

		static ::System::UInt32 GetOutfitTypeInt(::RPG::GameCore::HipplenOutfitType a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETOUTFITTYPEINT_OFFSET))(a1);
		}

		static ::RPG::GameCore::ActivityHipplenStatConfigRow* GetStatConfig(::RPG::GameCore::HipplenStatType a1)
		{
			return ((::RPG::GameCore::ActivityHipplenStatConfigRow*(*)(::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSTATCONFIG_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetSentenceIDList(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSENTENCEIDLIST_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentSentence* GetSentenceData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentSentence*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETSENTENCEDATA_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetFirstSentenceDesc(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETFIRSTSENTENCEDESC_OFFSET))(a1);
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

		static ::System::Boolean CheckPhaseStatValueTargetWithChangeValue(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a1, ::RPG::GameCore::HipplenStatType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKPHASESTATVALUETARGETWITHCHANGEVALUE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* TryGetTargetEntity(::RPG::GameCore::HipplenGameTargetType a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::HipplenGameTargetType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_TRYGETTARGETENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::HipplenGameGradeType CalculateGradeType(::System::Int32 a1, ::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>* a2)
		{
			return ((::RPG::GameCore::HipplenGameGradeType(*)(::System::Int32, ::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_CALCULATEGRADETYPE_OFFSET))(a1, a2);
		}

		static ::System::Int32 FetchMaxRequireTimes(::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_FETCHMAXREQUIRETIMES_OFFSET))(a1);
		}

		static ::System::Boolean CheckRequireStatGrade(::RPG::GameCore::HipplenRequireStatGrade* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::HipplenRequireStatGrade*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKREQUIRESTATGRADE_OFFSET))(a1);
		}

		static ::RPG::GameCore::HipplenGameEnergyType GetHipplenGameEnergyType(::System::Int32 a1)
		{
			return ((::RPG::GameCore::HipplenGameEnergyType(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETHIPPLENGAMEENERGYTYPE_OFFSET))(a1);
		}

		static ::System::Boolean CheckWorkDataIsOptionIncident(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_CHECKWORKDATAISOPTIONINCIDENT_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* GetWorkDataBeforeCurWorkData(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*(*)(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETWORKDATABEFORECURWORKDATA_OFFSET))(a1);
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

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetItemDisplayDataFromGiftList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETITEMDISPLAYDATAFROMGIFTLIST_OFFSET))(a1);
		}

		static ::System::String* GetEventNameByEmotion(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_GETEVENTNAMEBYEMOTION_OFFSET))(a1);
		}

		static ::System::Void SmoothExitGame(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_SMOOTHEXITGAME_OFFSET))(a1);
		}

		static ::System::Void OpenHipplenMainPage(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_OPENHIPPLENMAINPAGE_OFFSET))(a1);
		}

		static ::System::Boolean IsMainPageOpend()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS_ISMAINPAGEOPEND_OFFSET))();
		}
	};
}
