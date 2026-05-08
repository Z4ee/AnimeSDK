#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Reports/PlayerReportsCategory.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1ADEE170)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1ADEE1B0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1ADEE190)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_REPORTEDUSERID_OFFSET UNITYSDK_OFFSET(0x1ADEE150)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_REPORTERUSERID_OFFSET UNITYSDK_OFFSET(0x1ADEE130)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1ADEE180)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1ADEE1C0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1ADEE1A0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_REPORTEDUSERID_OFFSET UNITYSDK_OFFSET(0x1ADEE160)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_REPORTERUSERID_OFFSET UNITYSDK_OFFSET(0x1ADEE140)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEE1D0)

namespace Epic::OnlineServices::Reports
{
	inline static constexpr unsigned int SendPlayerBehaviorReportOptions_TypeDefinitionIndex = 33634;

	class SendPlayerBehaviorReportOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _ReportedUserId_k__BackingField; // 0x10
		::System::String* _Context_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _ReporterUserId_k__BackingField; // 0x20
		::System::String* _Message_k__BackingField; // 0x28
		::Epic::OnlineServices::Reports::PlayerReportsCategory _Category_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ReporterUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_REPORTERUSERID_OFFSET))(this);
		}

		::System::Void set_ReporterUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_REPORTERUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_ReportedUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_REPORTEDUSERID_OFFSET))(this);
		}

		::System::Void set_ReportedUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_REPORTEDUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Reports::PlayerReportsCategory get_Category()
		{
			return ((::Epic::OnlineServices::Reports::PlayerReportsCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::Epic::OnlineServices::Reports::PlayerReportsCategory value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Reports::PlayerReportsCategory))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_CATEGORY_OFFSET))(this, value);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void set_Message(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_MESSAGE_OFFSET))(this, value);
		}

		::System::String* get_Context()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONS_SET_CONTEXT_OFFSET))(this, value);
		}
	};
}
