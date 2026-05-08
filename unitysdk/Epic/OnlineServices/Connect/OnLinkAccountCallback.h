#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class LinkAccountCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19415970)
#define EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x194159A0)
#define EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19415470)
#define EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19415460)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnLinkAccountCallback_TypeDefinitionIndex = 34533;

	class OnLinkAccountCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::LinkAccountCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::LinkAccountCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::LinkAccountCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::LinkAccountCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
