#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTC { class DisconnectedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DD92AF0)
#define EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD92B20)
#define EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD92AE0)
#define EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD929F0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int OnDisconnectedCallback_TypeDefinitionIndex = 45385;

	class OnDisconnectedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTC::DisconnectedCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::DisconnectedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTC::DisconnectedCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTC::DisconnectedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
