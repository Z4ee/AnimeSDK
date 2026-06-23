#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class UnlinkAccountCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C4BB0C0)
#define EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C4BB0F0)
#define EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C4BABC0)
#define EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BABA0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnUnlinkAccountCallback_TypeDefinitionIndex = 36108;

	class OnUnlinkAccountCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONUNLINKACCOUNTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
