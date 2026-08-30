#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class CreateDeviceIdCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF20B90)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF20BC0)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF20B80)
#define EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF20A90)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnCreateDeviceIdCallback_TypeDefinitionIndex = 46154;

	class OnCreateDeviceIdCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONCREATEDEVICEIDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
