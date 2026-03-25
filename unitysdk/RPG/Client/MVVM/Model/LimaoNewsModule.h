#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_03D6D30E62EFB374_1;
class Class_1_0BE9E9C1D5A3C687;
class Class_1_4780C96744815F8D;
class Class_1_895FB63906FAA27E;
namespace RPG::Client::MVVM::Service { class LimaoNewsIssueService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsMessageService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsNetworkService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsOfferingService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsOfficeSurveyService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsPostService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsTrackService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsTutorialService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsWindowService; }

#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A80A00)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_CONDITIONSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81290)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_ISSUESERVICE_OFFSET UNITYSDK_OFFSET(0x9A812F0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_LIMAOSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81330)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_MESSAGESERVICE_OFFSET UNITYSDK_OFFSET(0x9A813B0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_NETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81230)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_OFFERINGSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81350)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_OFFICEEVENTSERVICE_OFFSET UNITYSDK_OFFSET(0x9A812D0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_OFFICESURVEYSERVICE_OFFSET UNITYSDK_OFFSET(0x9A812B0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_POSTSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81310)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_SPONSORSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81390)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_TRACKSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81370)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_TUTORIALSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81270)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_WINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81250)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9A80440)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_CONDITIONSERVICE_OFFSET UNITYSDK_OFFSET(0x9A812A0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_ISSUESERVICE_OFFSET UNITYSDK_OFFSET(0x9A81300)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_LIMAOSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81340)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_MESSAGESERVICE_OFFSET UNITYSDK_OFFSET(0x9A813C0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_NETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81240)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_OFFERINGSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81360)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_OFFICEEVENTSERVICE_OFFSET UNITYSDK_OFFSET(0x9A812E0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_OFFICESURVEYSERVICE_OFFSET UNITYSDK_OFFSET(0x9A812C0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_POSTSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81320)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_SPONSORSERVICE_OFFSET UNITYSDK_OFFSET(0x9A813A0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_TRACKSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81380)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_TUTORIALSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81280)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_WINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0x9A81260)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A813D0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A81480)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9A813F0)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int LimaoNewsModule_TypeDefinitionIndex = 61061;

	class LimaoNewsModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::MVVM::Service::LimaoNewsTrackService* _TrackService_k__BackingField; // 0x10
		::Class_1_4780C96744815F8D* _LimaoService_k__BackingField; // 0x18
		::Class_1_0BE9E9C1D5A3C687* _ConditionService_k__BackingField; // 0x20
		::Class_1_895FB63906FAA27E* _OfficeEventService_k__BackingField; // 0x28
		::RPG::Client::MVVM::Service::LimaoNewsIssueService* _IssueService_k__BackingField; // 0x30
		::RPG::Client::MVVM::Service::LimaoNewsOfferingService* _OfferingService_k__BackingField; // 0x38
		::RPG::Client::MVVM::Service::LimaoNewsTutorialService* _TutorialService_k__BackingField; // 0x40
		::RPG::Client::MVVM::Service::LimaoNewsWindowService* _WindowService_k__BackingField; // 0x48
		::RPG::Client::MVVM::Service::LimaoNewsMessageService* _MessageService_k__BackingField; // 0x50
		::Class_1_03D6D30E62EFB374_1* _SponsorService_k__BackingField; // 0x58
		::RPG::Client::MVVM::Service::LimaoNewsPostService* _PostService_k__BackingField; // 0x60
		::RPG::Client::MVVM::Service::LimaoNewsOfficeSurveyService* _OfficeSurveyService_k__BackingField; // 0x68
		::RPG::Client::MVVM::Service::LimaoNewsNetworkService* _NetworkService_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::MVVM::Service::LimaoNewsNetworkService* get_NetworkService()
		{
			return ((::RPG::Client::MVVM::Service::LimaoNewsNetworkService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_NETWORKSERVICE_OFFSET))(this);
		}

		::System::Void set_NetworkService(::RPG::Client::MVVM::Service::LimaoNewsNetworkService* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsNetworkService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_NETWORKSERVICE_OFFSET))(this, value);
		}

		::RPG::Client::MVVM::Service::LimaoNewsWindowService* get_WindowService()
		{
			return ((::RPG::Client::MVVM::Service::LimaoNewsWindowService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_WINDOWSERVICE_OFFSET))(this);
		}

		::System::Void set_WindowService(::RPG::Client::MVVM::Service::LimaoNewsWindowService* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsWindowService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_WINDOWSERVICE_OFFSET))(this, value);
		}

		::RPG::Client::MVVM::Service::LimaoNewsTutorialService* get_TutorialService()
		{
			return ((::RPG::Client::MVVM::Service::LimaoNewsTutorialService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_TUTORIALSERVICE_OFFSET))(this);
		}

		::System::Void set_TutorialService(::RPG::Client::MVVM::Service::LimaoNewsTutorialService* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsTutorialService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_TUTORIALSERVICE_OFFSET))(this, value);
		}

		::Class_1_0BE9E9C1D5A3C687* get_ConditionService()
		{
			return ((::Class_1_0BE9E9C1D5A3C687*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_CONDITIONSERVICE_OFFSET))(this);
		}

		::System::Void set_ConditionService(::Class_1_0BE9E9C1D5A3C687* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_CONDITIONSERVICE_OFFSET))(this, value);
		}

		::RPG::Client::MVVM::Service::LimaoNewsOfficeSurveyService* get_OfficeSurveyService()
		{
			return ((::RPG::Client::MVVM::Service::LimaoNewsOfficeSurveyService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_OFFICESURVEYSERVICE_OFFSET))(this);
		}

		::System::Void set_OfficeSurveyService(::RPG::Client::MVVM::Service::LimaoNewsOfficeSurveyService* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsOfficeSurveyService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_OFFICESURVEYSERVICE_OFFSET))(this, value);
		}

		::Class_1_895FB63906FAA27E* get_OfficeEventService()
		{
			return ((::Class_1_895FB63906FAA27E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_OFFICEEVENTSERVICE_OFFSET))(this);
		}

		::System::Void set_OfficeEventService(::Class_1_895FB63906FAA27E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_895FB63906FAA27E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_OFFICEEVENTSERVICE_OFFSET))(this, value);
		}

		::RPG::Client::MVVM::Service::LimaoNewsIssueService* get_IssueService()
		{
			return ((::RPG::Client::MVVM::Service::LimaoNewsIssueService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_ISSUESERVICE_OFFSET))(this);
		}

		::System::Void set_IssueService(::RPG::Client::MVVM::Service::LimaoNewsIssueService* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsIssueService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_ISSUESERVICE_OFFSET))(this, value);
		}

		::RPG::Client::MVVM::Service::LimaoNewsPostService* get_PostService()
		{
			return ((::RPG::Client::MVVM::Service::LimaoNewsPostService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_POSTSERVICE_OFFSET))(this);
		}

		::System::Void set_PostService(::RPG::Client::MVVM::Service::LimaoNewsPostService* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsPostService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_POSTSERVICE_OFFSET))(this, value);
		}

		::Class_1_4780C96744815F8D* get_LimaoService()
		{
			return ((::Class_1_4780C96744815F8D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_LIMAOSERVICE_OFFSET))(this);
		}

		::System::Void set_LimaoService(::Class_1_4780C96744815F8D* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4780C96744815F8D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_LIMAOSERVICE_OFFSET))(this, value);
		}

		::RPG::Client::MVVM::Service::LimaoNewsOfferingService* get_OfferingService()
		{
			return ((::RPG::Client::MVVM::Service::LimaoNewsOfferingService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_OFFERINGSERVICE_OFFSET))(this);
		}

		::System::Void set_OfferingService(::RPG::Client::MVVM::Service::LimaoNewsOfferingService* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsOfferingService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_OFFERINGSERVICE_OFFSET))(this, value);
		}

		::RPG::Client::MVVM::Service::LimaoNewsTrackService* get_TrackService()
		{
			return ((::RPG::Client::MVVM::Service::LimaoNewsTrackService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_TRACKSERVICE_OFFSET))(this);
		}

		::System::Void set_TrackService(::RPG::Client::MVVM::Service::LimaoNewsTrackService* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsTrackService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_TRACKSERVICE_OFFSET))(this, value);
		}

		::Class_1_03D6D30E62EFB374_1* get_SponsorService()
		{
			return ((::Class_1_03D6D30E62EFB374_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_SPONSORSERVICE_OFFSET))(this);
		}

		::System::Void set_SponsorService(::Class_1_03D6D30E62EFB374_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_03D6D30E62EFB374_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_SPONSORSERVICE_OFFSET))(this, value);
		}

		::RPG::Client::MVVM::Service::LimaoNewsMessageService* get_MessageService()
		{
			return ((::RPG::Client::MVVM::Service::LimaoNewsMessageService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_GET_MESSAGESERVICE_OFFSET))(this);
		}

		::System::Void set_MessageService(::RPG::Client::MVVM::Service::LimaoNewsMessageService* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsMessageService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE_SET_MESSAGESERVICE_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
