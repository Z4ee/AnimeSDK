#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class RequestPermissionsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DCA7660)
#define EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DCA7690)
#define EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DCA7140)
#define EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA7120)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnRequestPermissionsCallback_TypeDefinitionIndex = 36513;

	class OnRequestPermissionsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
