#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Reports/PlayerReportsCategory.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Reports { class SendPlayerBehaviorReportOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x708B0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x70840)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xBC50)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x70780)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x706D0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x70830)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_REPORTEDUSERID_OFFSET UNITYSDK_OFFSET(0x70610)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_REPORTERUSERID_OFFSET UNITYSDK_OFFSET(0x70550)

namespace Epic::OnlineServices::Reports
{
	inline static constexpr unsigned int SendPlayerBehaviorReportOptionsInternal_TypeDefinitionIndex = 41416;

	struct alignas(8) SendPlayerBehaviorReportOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ReporterUserId; // 0x18
		::System::IntPtr m_ReportedUserId; // 0x20
		::Epic::OnlineServices::Reports::PlayerReportsCategory m_Category; // 0x28
		::System::IntPtr m_Message; // 0x30
		::System::IntPtr m_Context; // 0x38

		::System::Void set_ReporterUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_REPORTERUSERID_OFFSET))(this, value);
		}

		::System::Void set_ReportedUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_REPORTEDUSERID_OFFSET))(this, value);
		}

		::System::Void set_Category(::Epic::OnlineServices::Reports::PlayerReportsCategory value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Reports::PlayerReportsCategory))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_CATEGORY_OFFSET))(this, value);
		}

		::System::Void set_Message(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_MESSAGE_OFFSET))(this, value);
		}

		::System::Void set_Context(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
