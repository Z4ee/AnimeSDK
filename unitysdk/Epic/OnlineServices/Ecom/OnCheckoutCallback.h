#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Ecom { class CheckoutCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_ONCHECKOUTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8E7EEA0)
#define EPIC_ONLINESERVICES_ECOM_ONCHECKOUTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8E7EED0)
#define EPIC_ONLINESERVICES_ECOM_ONCHECKOUTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8E784F0)
#define EPIC_ONLINESERVICES_ECOM_ONCHECKOUTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8E7EE80)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int OnCheckoutCallback_TypeDefinitionIndex = 42194;

	class OnCheckoutCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONCHECKOUTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Ecom::CheckoutCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CheckoutCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONCHECKOUTCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Ecom::CheckoutCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Ecom::CheckoutCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONCHECKOUTCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONCHECKOUTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
