#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class QueryPermissionsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8E94E80)
#define EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8E94EB0)
#define EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8E93360)
#define EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8E94E60)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnQueryPermissionsCallback_TypeDefinitionIndex = 42070;

	class OnQueryPermissionsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONQUERYPERMISSIONSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
