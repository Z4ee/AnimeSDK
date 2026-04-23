#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomOutputDeviceObserver_OutputDeviceType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12BF6470)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12BF6500)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BF5BA0)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF6450)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback_TypeDefinitionIndex = 36686;

	class CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean isConnected, ::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType deviceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_INVOKE_OFFSET))(this, isConnected, deviceType);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean isConnected, ::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType deviceType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_BEGININVOKE_OFFSET))(this, isConnected, deviceType, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
