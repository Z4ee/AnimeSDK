#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Connect { class TransferDeviceIdAccountCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x862B120)
#define EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x862B150)
#define EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x862ABD0)
#define EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x862ABB0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int OnTransferDeviceIdAccountCallback_TypeDefinitionIndex = 36498;

	class OnTransferDeviceIdAccountCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ONTRANSFERDEVICEIDACCOUNTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
