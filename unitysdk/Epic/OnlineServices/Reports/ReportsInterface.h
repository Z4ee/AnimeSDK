#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"

namespace Epic::OnlineServices::Reports { class OnSendPlayerBehaviorReportCompleteCallback; }
namespace Epic::OnlineServices::Reports { class SendPlayerBehaviorReportOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DE53E80)
#define EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE_SENDPLAYERBEHAVIORREPORT_OFFSET UNITYSDK_OFFSET(0x1DE53F40)
#define EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE53F30)
#define EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE53F20)

namespace Epic::OnlineServices::Reports
{
	inline static constexpr unsigned int ReportsInterface_TypeDefinitionIndex = 45258;

	class ReportsInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 ReportcontextMaxLength = 0x1000; // 0x0
		// static const ::System::Int32 ReportmessageMaxLength = 0x200; // 0x0
		// static const ::System::Int32 SendplayerbehaviorreportApiLatest = 0x2; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void SendPlayerBehaviorReport(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions*, ::System::Object*, ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE_SENDPLAYERBEHAVIORREPORT_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
