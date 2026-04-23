#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Ecom { class QueryOwnershipTokenCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8E7FD60)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8E7FD90)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8E79A30)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8E7FD40)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int OnQueryOwnershipTokenCallback_TypeDefinitionIndex = 42202;

	class OnQueryOwnershipTokenCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPTOKENCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
