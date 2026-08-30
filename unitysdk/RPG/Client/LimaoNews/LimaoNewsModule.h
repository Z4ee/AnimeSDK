#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_895FB63906FAA27E;
class Class_1_9917656EF7E54194;
class Class_1_AB4ED2B21F301DB7;
class Class_1_C56ACF52E09DFFD3;
namespace RPG::Client::LimaoNews { class LimaoNewsEntityTrackService; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueService; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageService; }
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfferingService; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostService; }
namespace RPG::Client::LimaoNews { class LimaoNewsTrackService; }
namespace RPG::Client::LimaoNews { class LimaoNewsTutorialService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD46F6C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_CONDITIONSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FE20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_EMPLOYEECHECKSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FF80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_ENTITYTRACKSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FFA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_ISSUESERVICE_OFFSET UNITYSDK_OFFSET(0xD46FE80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_LIMAOSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FEC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_MESSAGESERVICE_OFFSET UNITYSDK_OFFSET(0xD46FF40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_NETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FDC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_OFFERINGSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FEE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_OFFICEEVENTSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FE60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_OFFICESURVEYSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FE40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_PLANSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FF60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_POSTSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FEA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_SPONSORSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FF20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_TRACKSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FF00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_TUTORIALSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FE00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_WINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FDE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD46EED0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_CONDITIONSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FE30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_EMPLOYEECHECKSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FF90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_ENTITYTRACKSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FFB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_ISSUESERVICE_OFFSET UNITYSDK_OFFSET(0xD46FE90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_LIMAOSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FED0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_MESSAGESERVICE_OFFSET UNITYSDK_OFFSET(0xD46FF50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_NETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FDD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_OFFERINGSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FEF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_OFFICEEVENTSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FE70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_OFFICESURVEYSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FE50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_PLANSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FF70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_POSTSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FEB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_SPONSORSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FF30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_TRACKSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FF10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_TUTORIALSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FE10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_WINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0xD46FDF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD46FFC0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsModule_TypeDefinitionIndex = 78968;

	class LimaoNewsModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPlanService* _PlanService_k__BackingField; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsIssueService* _IssueService_k__BackingField; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService* _OfficeSurveyService_k__BackingField; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsPostService* _PostService_k__BackingField; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsTutorialService* _TutorialService_k__BackingField; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsEntityTrackService* _EntityTrackService_k__BackingField; // 0x38
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService_k__BackingField; // 0x40
		::RPG::Client::LimaoNews::LimaoNewsMessageService* _MessageService_k__BackingField; // 0x48
		::RPG::Client::LimaoNews::LimaoNewsOfferingService* _OfferingService_k__BackingField; // 0x50
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService_k__BackingField; // 0x58
		::Class_1_9917656EF7E54194* _SponsorService_k__BackingField; // 0x60
		::Class_1_0BE9E9C1D5A3C687* _ConditionService_k__BackingField; // 0x68
		::Class_1_AB4ED2B21F301DB7* _EmployeeCheckService_k__BackingField; // 0x70
		::Class_1_895FB63906FAA27E* _OfficeEventService_k__BackingField; // 0x78
		::Class_1_C56ACF52E09DFFD3* _LimaoService_k__BackingField; // 0x80
		::RPG::Client::LimaoNews::LimaoNewsTrackService* _TrackService_k__BackingField; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsNetworkService* get_NetworkService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsNetworkService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_NETWORKSERVICE_OFFSET))(this);
		}

		::System::Void set_NetworkService(::RPG::Client::LimaoNews::LimaoNewsNetworkService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsNetworkService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_NETWORKSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWindowService* get_WindowService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWindowService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_WINDOWSERVICE_OFFSET))(this);
		}

		::System::Void set_WindowService(::RPG::Client::LimaoNews::LimaoNewsWindowService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWindowService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_WINDOWSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsTutorialService* get_TutorialService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsTutorialService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_TUTORIALSERVICE_OFFSET))(this);
		}

		::System::Void set_TutorialService(::RPG::Client::LimaoNews::LimaoNewsTutorialService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsTutorialService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_TUTORIALSERVICE_OFFSET))(this, a1);
		}

		::Class_1_0BE9E9C1D5A3C687* get_ConditionService()
		{
			return ((::Class_1_0BE9E9C1D5A3C687*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_CONDITIONSERVICE_OFFSET))(this);
		}

		::System::Void set_ConditionService(::Class_1_0BE9E9C1D5A3C687* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_CONDITIONSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService* get_OfficeSurveyService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_OFFICESURVEYSERVICE_OFFSET))(this);
		}

		::System::Void set_OfficeSurveyService(::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_OFFICESURVEYSERVICE_OFFSET))(this, a1);
		}

		::Class_1_895FB63906FAA27E* get_OfficeEventService()
		{
			return ((::Class_1_895FB63906FAA27E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_OFFICEEVENTSERVICE_OFFSET))(this);
		}

		::System::Void set_OfficeEventService(::Class_1_895FB63906FAA27E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_895FB63906FAA27E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_OFFICEEVENTSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueService* get_IssueService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_ISSUESERVICE_OFFSET))(this);
		}

		::System::Void set_IssueService(::RPG::Client::LimaoNews::LimaoNewsIssueService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsIssueService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_ISSUESERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostService* get_PostService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_POSTSERVICE_OFFSET))(this);
		}

		::System::Void set_PostService(::RPG::Client::LimaoNews::LimaoNewsPostService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_POSTSERVICE_OFFSET))(this, a1);
		}

		::Class_1_C56ACF52E09DFFD3* get_LimaoService()
		{
			return ((::Class_1_C56ACF52E09DFFD3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_LIMAOSERVICE_OFFSET))(this);
		}

		::System::Void set_LimaoService(::Class_1_C56ACF52E09DFFD3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C56ACF52E09DFFD3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_LIMAOSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsOfferingService* get_OfferingService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsOfferingService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_OFFERINGSERVICE_OFFSET))(this);
		}

		::System::Void set_OfferingService(::RPG::Client::LimaoNews::LimaoNewsOfferingService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfferingService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_OFFERINGSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsTrackService* get_TrackService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsTrackService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_TRACKSERVICE_OFFSET))(this);
		}

		::System::Void set_TrackService(::RPG::Client::LimaoNews::LimaoNewsTrackService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsTrackService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_TRACKSERVICE_OFFSET))(this, a1);
		}

		::Class_1_9917656EF7E54194* get_SponsorService()
		{
			return ((::Class_1_9917656EF7E54194*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_SPONSORSERVICE_OFFSET))(this);
		}

		::System::Void set_SponsorService(::Class_1_9917656EF7E54194* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9917656EF7E54194*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_SPONSORSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsMessageService* get_MessageService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMessageService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_MESSAGESERVICE_OFFSET))(this);
		}

		::System::Void set_MessageService(::RPG::Client::LimaoNews::LimaoNewsMessageService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_MESSAGESERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanService* get_PlanService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_PLANSERVICE_OFFSET))(this);
		}

		::System::Void set_PlanService(::RPG::Client::LimaoNews::LimaoNewsPlanService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_PLANSERVICE_OFFSET))(this, a1);
		}

		::Class_1_AB4ED2B21F301DB7* get_EmployeeCheckService()
		{
			return ((::Class_1_AB4ED2B21F301DB7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_EMPLOYEECHECKSERVICE_OFFSET))(this);
		}

		::System::Void set_EmployeeCheckService(::Class_1_AB4ED2B21F301DB7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AB4ED2B21F301DB7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_EMPLOYEECHECKSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsEntityTrackService* get_EntityTrackService()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsEntityTrackService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_ENTITYTRACKSERVICE_OFFSET))(this);
		}

		::System::Void set_EntityTrackService(::RPG::Client::LimaoNews::LimaoNewsEntityTrackService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEntityTrackService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_ENTITYTRACKSERVICE_OFFSET))(this, a1);
		}
	};
}
