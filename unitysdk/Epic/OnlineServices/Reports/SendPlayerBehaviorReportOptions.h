#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Reports/PlayerReportsCategory.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xB3F7A70)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xB3F7AB0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xB3F7A90)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_REPORTEDUSERID_OFFSET UNITYSDK_OFFSET(0xB3F7A50)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_REPORTERUSERID_OFFSET UNITYSDK_OFFSET(0xB3F7A30)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xB3F7A80)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xB3F7AC0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xB3F7AA0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_REPORTEDUSERID_OFFSET UNITYSDK_OFFSET(0xB3F7A60)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_REPORTERUSERID_OFFSET UNITYSDK_OFFSET(0xB3F7A40)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB3F7AD0)

namespace Epic::OnlineServices::Reports
{
	inline static constexpr unsigned int SendPlayerBehaviorReportOptions_TypeDefinitionIndex = 45261;

	class SendPlayerBehaviorReportOptions : public ::System::Object
	{
	public:
		::System::String* _Message_k__BackingField; // 0x10
		::System::String* _Context_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _ReporterUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _ReportedUserId_k__BackingField; // 0x28
		::Epic::OnlineServices::Reports::PlayerReportsCategory _Category_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ReporterUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_REPORTERUSERID_OFFSET))(this);
		}

		::System::Void set_ReporterUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_REPORTERUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_ReportedUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_REPORTEDUSERID_OFFSET))(this);
		}

		::System::Void set_ReportedUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_REPORTEDUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Reports::PlayerReportsCategory get_Category()
		{
			return ((::Epic::OnlineServices::Reports::PlayerReportsCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::Epic::OnlineServices::Reports::PlayerReportsCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Reports::PlayerReportsCategory))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_CATEGORY_OFFSET))(this, a1);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void set_Message(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_MESSAGE_OFFSET))(this, a1);
		}

		::System::String* get_Context()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_CONTEXT_OFFSET))(this, a1);
		}
	};
}
