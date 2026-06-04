#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTC { class ParticipantStatusChangedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA33CFA0)
#define EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA33CFD0)
#define EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA33CF90)
#define EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA33CEA0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int OnParticipantStatusChangedCallback_TypeDefinitionIndex = 42348;

	class OnParticipantStatusChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONPARTICIPANTSTATUSCHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
