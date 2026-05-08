#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTC { class DisconnectedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19FA87B0)
#define EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19FA87E0)
#define EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19FA82B0)
#define EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA82A0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int OnDisconnectedCallback_TypeDefinitionIndex = 33758;

	class OnDisconnectedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTC::DisconnectedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::DisconnectedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTC::DisconnectedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTC::DisconnectedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONDISCONNECTEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
