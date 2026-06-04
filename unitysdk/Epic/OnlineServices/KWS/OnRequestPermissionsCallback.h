#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class RequestPermissionsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2D1BB0)
#define EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2D1BE0)
#define EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2D1260)
#define EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2D1AC0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnRequestPermissionsCallback_TypeDefinitionIndex = 42875;

	class OnRequestPermissionsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONREQUESTPERMISSIONSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
