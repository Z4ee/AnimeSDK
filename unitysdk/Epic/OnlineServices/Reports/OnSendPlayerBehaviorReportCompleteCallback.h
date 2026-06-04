#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Reports { class SendPlayerBehaviorReportCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA353C20)
#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA353C50)
#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA353C10)
#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA353B20)

namespace Epic::OnlineServices::Reports
{
	inline static constexpr unsigned int OnSendPlayerBehaviorReportCompleteCallback_TypeDefinitionIndex = 42212;

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
