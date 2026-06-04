#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Ecom { class QueryOffersCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_ONQUERYOFFERSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2C0BB0)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOFFERSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2C0BE0)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOFFERSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2BBC20)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOFFERSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C0AC0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int OnQueryOffersCallback_TypeDefinitionIndex = 43001;

	class OnQueryOffersCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOFFERSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Ecom::QueryOffersCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOffersCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOFFERSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Ecom::QueryOffersCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOffersCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOFFERSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOFFERSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
