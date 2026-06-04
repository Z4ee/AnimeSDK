#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_4780C96744815F8D;
class Class_1_895FB63906FAA27E;
class Class_1_9917656EF7E54194;
namespace RPG::Client::LimaoNews { class LimaoNewsIssueService; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageService; }
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfferingService; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostService; }
namespace RPG::Client::LimaoNews { class LimaoNewsTrackService; }
namespace RPG::Client::LimaoNews { class LimaoNewsTutorialService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD95470)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_CONDITIONSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95B30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_ISSUESERVICE_OFFSET UNITYSDK_OFFSET(0xBD95B90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_LIMAOSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95BD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_MESSAGESERVICE_OFFSET UNITYSDK_OFFSET(0xBD95C50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_NETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95AD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_OFFERINGSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95BF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_OFFICEEVENTSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95B70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_OFFICESURVEYSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95B50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_POSTSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95BB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_SPONSORSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95C30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_TRACKSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95C10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_TUTORIALSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95B10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_WINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95AF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBD94E60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_CONDITIONSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95B40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_ISSUESERVICE_OFFSET UNITYSDK_OFFSET(0xBD95BA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_LIMAOSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95BE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_MESSAGESERVICE_OFFSET UNITYSDK_OFFSET(0xBD95C60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_NETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95AE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_OFFERINGSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95C00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_OFFICEEVENTSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95B80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_OFFICESURVEYSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95B60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_POSTSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95BC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_SPONSORSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95C40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_TRACKSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95C20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_TUTORIALSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95B20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_WINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0xBD95B00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBD95C70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD95D10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBD95C90)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsModule_TypeDefinitionIndex = 73766;

	class LimaoNewsModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsIssueService* _IssueService_k__BackingField; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsTrackService* _TrackService_k__BackingField; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService_k__BackingField; // 0x20
		::Class_1_4780C96744815F8D* _LimaoService_k__BackingField; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsTutorialService* _TutorialService_k__BackingField; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsPostService* _PostService_k__BackingField; // 0x38
		::Class_1_0BE9E9C1D5A3C687* _ConditionService_k__BackingField; // 0x40
		::Class_1_895FB63906FAA27E* _OfficeEventService_k__BackingField; // 0x48
		::RPG::Client::LimaoNews::LimaoNewsOfferingService* _OfferingService_k__BackingField; // 0x50
		::Class_1_9917656EF7E54194* _SponsorService_k__BackingField; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService_k__BackingField; // 0x60
		::RPG::Client::LimaoNews::LimaoNewsMessageService* _MessageService_k__BackingField; // 0x68
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService* _OfficeSurveyService_k__BackingField; // 0x70

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

		::Class_1_4780C96744815F8D* get_LimaoService()
		{
			return ((::Class_1_4780C96744815F8D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_GET_LIMAOSERVICE_OFFSET))(this);
		}

		::System::Void set_LimaoService(::Class_1_4780C96744815F8D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4780C96744815F8D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE_SET_LIMAOSERVICE_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
