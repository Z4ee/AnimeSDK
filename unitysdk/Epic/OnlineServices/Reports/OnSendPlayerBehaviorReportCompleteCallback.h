#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Reports { class SendPlayerBehaviorReportCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0BE5F0)
#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0BE620)
#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0BE5E0)
#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BE4F0)

namespace Epic::OnlineServices::Reports
{
	inline static constexpr unsigned int OnSendPlayerBehaviorReportCompleteCallback_TypeDefinitionIndex = 43073;

	class OnSendPlayerBehaviorReportCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
