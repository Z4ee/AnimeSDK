#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MVVM/Model/LimaoNewsStateTag.h"
#include "unitysdk/System/Object.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_FA4F4A67B1C04320_478;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyItem; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsStateTagViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A80F10)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETCUROFFICESURVEYS_OFFSET UNITYSDK_OFFSET(0x9A8B6E0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETSHOWSURVEYTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x9A8B9D0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETSURVEYDISPLAYREWARDID_OFFSET UNITYSDK_OFFSET(0x9A8BE30)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETSURVEYITEMSTATETAGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A8B720)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETSURVEYITEMSTATETAG_1_OFFSET UNITYSDK_OFFSET(0x9A8B7C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETSURVEYITEMSTATETAG_OFFSET UNITYSDK_OFFSET(0x9A8BF30)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GET_RECOMMENDSERVICEID_OFFSET UNITYSDK_OFFSET(0x9A8BF90)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GOTOSURVEYMISSIONPAGE_OFFSET UNITYSDK_OFFSET(0x9A8BC10)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_ISANYSURVEYCANSHOW_OFFSET UNITYSDK_OFFSET(0x9A8B980)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_ISFINISHEDALLSURVEY_OFFSET UNITYSDK_OFFSET(0x9A8BAE0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_ISOFFICESURVEYFINISH_OFFSET UNITYSDK_OFFSET(0x9A8B870)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_ISOFFICESURVEYSHOW_OFFSET UNITYSDK_OFFSET(0x9A8B8F0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_ISSURVEYHIDEREWARDAFTERSTART_OFFSET UNITYSDK_OFFSET(0x9A8BEA0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_REBUILDSURVEYITEMSBYRECOMMENDID_OFFSET UNITYSDK_OFFSET(0x9A8A260)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_REFRESHCUROFFICESURVEY_OFFSET UNITYSDK_OFFSET(0x9A89F10)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_SETRECOMMENDSURVEYID_OFFSET UNITYSDK_OFFSET(0x9A8A6C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_SET_RECOMMENDSERVICEID_OFFSET UNITYSDK_OFFSET(0x9A8BFA0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A807C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE__DISPOSECUROFFICESURVEYS_OFFSET UNITYSDK_OFFSET(0x9A8B530)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyService_TypeDefinitionIndex = 61039;

	class LimaoNewsOfficeSurveyService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*>* _CurOfficeSurveyItems; // 0x10
		::Class_1_0BE9E9C1D5A3C687* _ConditionService; // 0x18
		::System::UInt32 _RecommendServiceID_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_0BE9E9C1D5A3C687* conditionService)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE__CTOR_OFFSET))(this, conditionService);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RebuildSurveyItemsByRecommendID(::System::UInt32 recommendSurveyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_REBUILDSURVEYITEMSBYRECOMMENDID_OFFSET))(this, recommendSurveyID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*>* GetCurOfficeSurveys()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETCUROFFICESURVEYS_OFFSET))(this);
		}

		::RPG::Client::MVVM::ViewModel::LimaoNewsStateTagViewModel* GetSurveyItemStateTagViewModel(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* surveyItem)
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsStateTagViewModel*(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETSURVEYITEMSTATETAGVIEWMODEL_OFFSET))(this, surveyItem);
		}

		::System::Boolean IsOfficeSurveyFinish(::System::UInt32 surveyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_ISOFFICESURVEYFINISH_OFFSET))(this, surveyID);
		}

		::System::Boolean IsOfficeSurveyShow(::System::UInt32 surveyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_ISOFFICESURVEYSHOW_OFFSET))(this, surveyID);
		}

		::System::Boolean IsAnySurveyCanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_ISANYSURVEYCANSHOW_OFFSET))(this);
		}

		::System::Int32 GetShowSurveyTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETSHOWSURVEYTOTALCOUNT_OFFSET))(this);
		}

		::System::Boolean IsFinishedAllSurvey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_ISFINISHEDALLSURVEY_OFFSET))(this);
		}

		::System::Void GotoSurveyMissionPage(::System::UInt32 surveyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GOTOSURVEYMISSIONPAGE_OFFSET))(this, surveyID);
		}

		::System::UInt32 GetSurveyDisplayRewardID(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* surveyItem)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETSURVEYDISPLAYREWARDID_OFFSET))(this, surveyItem);
		}

		::System::Boolean IsSurveyHideRewardAfterStart(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* surveyItem)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_ISSURVEYHIDEREWARDAFTERSTART_OFFSET))(this, surveyItem);
		}

		::RPG::Client::MVVM::Model::LimaoNewsStateTag GetSurveyItemStateTag(::System::UInt32 surveyID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsStateTag(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETSURVEYITEMSTATETAG_OFFSET))(this, surveyID);
		}

		::RPG::Client::MVVM::Model::LimaoNewsStateTag GetSurveyItemStateTag_1(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* surveyItem)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsStateTag(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GETSURVEYITEMSTATETAG_1_OFFSET))(this, surveyItem);
		}

		::System::Void RefreshCurOfficeSurvey(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_478*>* curOfficeSurveys)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_478*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_REFRESHCUROFFICESURVEY_OFFSET))(this, curOfficeSurveys);
		}

		::System::Void SetRecommendSurveyID(::System::UInt32 recommendSurveyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_SETRECOMMENDSURVEYID_OFFSET))(this, recommendSurveyID);
		}

		::System::Void _DisposeCurOfficeSurveys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE__DISPOSECUROFFICESURVEYS_OFFSET))(this);
		}

		::System::UInt32 get_RecommendServiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_GET_RECOMMENDSERVICEID_OFFSET))(this);
		}

		::System::Void set_RecommendServiceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE_SET_RECOMMENDSERVICEID_OFFSET))(this, value);
		}
	};
}
