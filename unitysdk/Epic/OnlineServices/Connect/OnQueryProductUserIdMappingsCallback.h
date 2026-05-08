#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class QueryProductUserIdMappingsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ADE83A0)
#define EPIC_ONLINESERVICES_CONNECT_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ADE83D0)
#define EPIC_ONLINESERVICES_CONNECT_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADE7EA0)
#define EPIC_ONLINESERVICES_CONNECT_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE7E90)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnQueryProductUserIdMappingsCallback_TypeDefinitionIndex = 34541;

	class OnQueryProductUserIdMappingsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::QueryProductUserIdMappingsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::QueryProductUserIdMappingsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
