#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class CreateUserCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DFEBA70)
#define EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DFEBAA0)
#define EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DFEB550)
#define EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEB530)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnCreateUserCallback_TypeDefinitionIndex = 36505;

	class OnCreateUserCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::KWS::CreateUserCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::CreateUserCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::KWS::CreateUserCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::KWS::CreateUserCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONCREATEUSERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
