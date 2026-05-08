#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Ecom { class QueryOwnershipCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7FEF20)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A7FEF50)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7FEA20)
#define EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FEA10)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int OnQueryOwnershipCallback_TypeDefinitionIndex = 34419;

	class OnQueryOwnershipCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ONQUERYOWNERSHIPCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
