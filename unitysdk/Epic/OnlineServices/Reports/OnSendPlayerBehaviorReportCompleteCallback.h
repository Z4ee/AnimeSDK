#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Reports { class SendPlayerBehaviorReportCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8F32A30)
#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8F32A60)
#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8F324E0)
#define EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8F324C0)

namespace Epic::OnlineServices::Reports
{
	inline static constexpr unsigned int OnSendPlayerBehaviorReportCompleteCallback_TypeDefinitionIndex = 41409;

	class OnSendPlayerBehaviorReportCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_REPORTS_ONSENDPLAYERBEHAVIORREPORTCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
