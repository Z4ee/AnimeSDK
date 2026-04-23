#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class AuthExpirationCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONAUTHEXPIRATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8E598A0)
#define EPIC_ONLINESERVICES_CONNECT_ONAUTHEXPIRATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8E598D0)
#define EPIC_ONLINESERVICES_CONNECT_ONAUTHEXPIRATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8E59350)
#define EPIC_ONLINESERVICES_CONNECT_ONAUTHEXPIRATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8E59330)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnAuthExpirationCallback_TypeDefinitionIndex = 42306;

	class OnAuthExpirationCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONAUTHEXPIRATIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONAUTHEXPIRATIONCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONAUTHEXPIRATIONCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONAUTHEXPIRATIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
