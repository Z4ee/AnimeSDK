#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class CreateUserCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2D1370)
#define EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2D13A0)
#define EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2D1220)
#define EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2D1280)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnCreateUserCallback_TypeDefinitionIndex = 42867;

	class OnCreateUserCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::KWS::CreateUserCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::CreateUserCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::KWS::CreateUserCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::KWS::CreateUserCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
