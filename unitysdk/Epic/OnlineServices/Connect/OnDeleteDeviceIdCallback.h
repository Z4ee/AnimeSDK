#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class DeleteDeviceIdCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONDELETEDEVICEIDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2A3800)
#define EPIC_ONLINESERVICES_CONNECT_ONDELETEDEVICEIDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2A3830)
#define EPIC_ONLINESERVICES_CONNECT_ONDELETEDEVICEIDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2A37F0)
#define EPIC_ONLINESERVICES_CONNECT_ONDELETEDEVICEIDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A3700)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnDeleteDeviceIdCallback_TypeDefinitionIndex = 43115;

	class OnDeleteDeviceIdCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONDELETEDEVICEIDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONDELETEDEVICEIDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONDELETEDEVICEIDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONDELETEDEVICEIDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
