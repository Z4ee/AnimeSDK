#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Ecom { class RedeemEntitlementsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2C11E0)
#define EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2C1210)
#define EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2BBC50)
#define EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C10F0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int OnRedeemEntitlementsCallback_TypeDefinitionIndex = 43007;

	class OnRedeemEntitlementsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONREDEEMENTITLEMENTSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
