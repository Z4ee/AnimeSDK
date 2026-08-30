#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Ecom { class QueryOwnershipTokenCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB363F70)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB363FA0)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB35EBE0)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB363E80)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int OnQueryOwnershipTokenCallback_TypeDefinitionIndex = 46048;

	class OnQueryOwnershipTokenCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
