#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class CreateUserCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E5CEFC0)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E5CEFF0)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E5CEAA0)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CEA80)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnCreateUserCallback_TypeDefinitionIndex = 36751;

	class OnCreateUserCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::CreateUserCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateUserCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::CreateUserCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateUserCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEUSERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
