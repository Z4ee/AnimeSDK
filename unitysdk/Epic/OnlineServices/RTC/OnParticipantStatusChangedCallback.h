#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTC { class ParticipantStatusChangedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x86E35F0)
#define EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x86E3620)
#define EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x86E30A0)
#define EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x86E3080)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int OnParticipantStatusChangedCallback_TypeDefinitionIndex = 35719;

	class OnParticipantStatusChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
