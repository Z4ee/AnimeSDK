#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomOutputDeviceObserver_OutputDeviceType.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare { class CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback; }

#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_ADD_ONDEVICECONNECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D378650)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_ADD__ONDEVICECONNECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D3787B0)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D378B00)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3790D0)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1D378FD0)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_GET_DEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1D378900)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_GET_ISDEVICECONNECTED_OFFSET UNITYSDK_OFFSET(0x1D378860)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D378E80)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_REMOVE_ONDEVICECONNECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D378920)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_REMOVE__ONDEVICECONNECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D3789D0)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3790E0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomOutputDeviceObserver_TypeDefinitionIndex = 38638;

	class CriAtomOutputDeviceObserver : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback** StaticGet__onDeviceConnectionChanged()
		{
			return (::CriWare::CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback**)Il2CppClass::FromTypeDefinitionIndex(CriAtomOutputDeviceObserver_TypeDefinitionIndex)->GetStaticField(0x5D110);
		}
		static ::CriWare::CriAtomOutputDeviceObserver** StaticGet_instance()
		{
			return (::CriWare::CriAtomOutputDeviceObserver**)Il2CppClass::FromTypeDefinitionIndex(CriAtomOutputDeviceObserver_TypeDefinitionIndex)->GetStaticField(0x5D118);
		}
		::System::Boolean dontDestroyOnLoad; // 0x28
		::System::Boolean lastIsConnected; // 0x29
		::System::Boolean isConnected; // 0x2A
		::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType lastDeviceType; // 0x2C
		::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType deviceType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnDeviceConnectionChanged(::CriWare::CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_ADD_ONDEVICECONNECTIONCHANGED_OFFSET))(a1);
		}

		static ::System::Void remove_OnDeviceConnectionChanged(::CriWare::CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_REMOVE_ONDEVICECONNECTIONCHANGED_OFFSET))(a1);
		}

		static ::System::Boolean get_IsDeviceConnected()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_GET_ISDEVICECONNECTED_OFFSET))();
		}

		static ::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType get_DeviceType()
		{
			return ((::CriWare::CriAtomOutputDeviceObserver_OutputDeviceType(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_GET_DEVICETYPE_OFFSET))();
		}

		static ::System::Void add__onDeviceConnectionChanged(::CriWare::CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_ADD__ONDEVICECONNECTIONCHANGED_OFFSET))(a1);
		}

		static ::System::Void remove__onDeviceConnectionChanged(::CriWare::CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomOutputDeviceObserver_DeviceConnectionChangeCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_REMOVE__ONDEVICECONNECTIONCHANGED_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_ONDESTROY_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}
	};
}
