#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class CreateUserCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF20DB0)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF20DE0)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF20DA0)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF20CB0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnCreateUserCallback_TypeDefinitionIndex = 46156;

	class OnCreateUserCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::CreateUserCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateUserCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::CreateUserCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateUserCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
