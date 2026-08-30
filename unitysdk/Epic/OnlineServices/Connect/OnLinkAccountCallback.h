#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class LinkAccountCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB3469C0)
#define EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB3469F0)
#define EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB3469B0)
#define EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB3468C0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnLinkAccountCallback_TypeDefinitionIndex = 46160;

	class OnLinkAccountCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::LinkAccountCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::LinkAccountCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::LinkAccountCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::LinkAccountCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLINKACCOUNTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
