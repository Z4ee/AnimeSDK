#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Ecom { class QueryEntitlementsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_ONQUERYENTITLEMENTSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D683A60)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYENTITLEMENTSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D683A90)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYENTITLEMENTSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D67ECC0)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYENTITLEMENTSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D683970)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int OnQueryEntitlementsCallback_TypeDefinitionIndex = 46042;

	class OnQueryEntitlementsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYENTITLEMENTSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYENTITLEMENTSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYENTITLEMENTSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYENTITLEMENTSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
