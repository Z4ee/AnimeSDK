#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class UnlinkAccountCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB347680)
#define EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB3476B0)
#define EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB347670)
#define EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB347580)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnUnlinkAccountCallback_TypeDefinitionIndex = 46172;

	class OnUnlinkAccountCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
