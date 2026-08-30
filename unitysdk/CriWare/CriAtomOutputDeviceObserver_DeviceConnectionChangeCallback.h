#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomOutputDeviceObserver_OutputDeviceType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x164DD120)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x164DD1B0)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x164DC8B0)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x164DD0B0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback_TypeDefinitionIndex = 38640;

	class CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1, ::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_DEVICECONNECTIONCHANGECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
