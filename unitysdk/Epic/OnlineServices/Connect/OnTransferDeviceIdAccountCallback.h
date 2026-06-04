#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class TransferDeviceIdAccountCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2A44C0)
#define EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2A44F0)
#define EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2A44B0)
#define EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A43C0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnTransferDeviceIdAccountCallback_TypeDefinitionIndex = 43127;

	class OnTransferDeviceIdAccountCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
