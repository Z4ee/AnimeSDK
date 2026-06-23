#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class CreateDeviceIdCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ADDC260)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ADDC290)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADDBD60)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDBD40)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnCreateDeviceIdCallback_TypeDefinitionIndex = 36090;

	class OnCreateDeviceIdCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
