#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"

namespace Epic::OnlineServices::Reports { class OnSendPlayerBehaviorReportCompleteCallback; }
namespace Epic::OnlineServices::Reports { class SendPlayerBehaviorReportOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D393400)
#define EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE_SENDPLAYERBEHAVIORREPORT_OFFSET UNITYSDK_OFFSET(0x1D3934B0)
#define EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3934A0)
#define EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D393490)

namespace Epic::OnlineServices::Reports
{
	inline static constexpr unsigned int ReportsInterface_TypeDefinitionIndex = 35853;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::Void SendPlayerBehaviorReport(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions*, ::System::Object*, ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE_SENDPLAYERBEHAVIORREPORT_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_REPORTSINTERFACE_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
