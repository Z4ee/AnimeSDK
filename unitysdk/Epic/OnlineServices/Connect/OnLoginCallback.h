#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class LoginCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONLOGINCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF21410)
#define EPIC_ONLINESERVICES_CONNECT_ONLOGINCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF21440)
#define EPIC_ONLINESERVICES_CONNECT_ONLOGINCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF21400)
#define EPIC_ONLINESERVICES_CONNECT_ONLOGINCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF21310)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnLoginCallback_TypeDefinitionIndex = 46162;

	class OnLoginCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLOGINCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::LoginCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::LoginCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLOGINCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::LoginCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::LoginCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLOGINCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONLOGINCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
