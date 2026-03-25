#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Ecom { class RedeemEntitlementsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x864C780)
#define EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x864C7B0)
#define EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x86465E0)
#define EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x864C760)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int OnRedeemEntitlementsCallback_TypeDefinitionIndex = 36378;

	class OnRedeemEntitlementsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
