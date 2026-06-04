#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Reports/PlayerReportsCategory.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Reports { class SendPlayerBehaviorReportOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x76D50)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x76CD0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xC4C0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x76C10)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x76B60)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x76CC0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_REPORTEDUSERID_OFFSET UNITYSDK_OFFSET(0x76AA0)
#define EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_REPORTERUSERID_OFFSET UNITYSDK_OFFSET(0x769E0)

namespace Epic::OnlineServices::Reports
{
	inline static constexpr unsigned int SendPlayerBehaviorReportOptionsInternal_TypeDefinitionIndex = 42219;

	struct alignas(8) SendPlayerBehaviorReportOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ReporterUserId; // 0x18
		::System::IntPtr m_ReportedUserId; // 0x20
		::Epic::OnlineServices::Reports::PlayerReportsCategory m_Category; // 0x28
		::System::IntPtr m_Message; // 0x30
		::System::IntPtr m_Context; // 0x38

		::System::Void set_ReporterUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_REPORTERUSERID_OFFSET))(this, a1);
		}

		::System::Void set_ReportedUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_REPORTEDUSERID_OFFSET))(this, a1);
		}

		::System::Void set_Category(::Epic::OnlineServices::Reports::PlayerReportsCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Reports::PlayerReportsCategory))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_CATEGORY_OFFSET))(this, a1);
		}

		::System::Void set_Message(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_MESSAGE_OFFSET))(this, a1);
		}

		::System::Void set_Context(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_CONTEXT_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_SENDPLAYERBEHAVIORREPORTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
