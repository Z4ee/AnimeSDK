#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_DEVICEMANAGER_CHECKINVALIDDEVICEID_OFFSET UNITYSDK_OFFSET(0x1CBDFA80)
#define MIHOYO_SDK_DEVICEMANAGER_GETDEVICEID_OFFSET UNITYSDK_OFFSET(0x1CBDF6B0)
#define MIHOYO_SDK_DEVICEMANAGER_ONDEVICEIDREADY_OFFSET UNITYSDK_OFFSET(0x1CBDF4B0)
#define MIHOYO_SDK_DEVICEMANAGER_SETDEVICEID_OFFSET UNITYSDK_OFFSET(0x1CBDF440)
#define MIHOYO_SDK_DEVICEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBDFB20)
#define MIHOYO_SDK_DEVICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDF430)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DeviceManager_TypeDefinitionIndex = 36665;

	class DeviceManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::DeviceManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::DeviceManager**)Il2CppClass::FromTypeDefinitionIndex(DeviceManager_TypeDefinitionIndex)->GetStaticField(0x27C10);
		}
		// static const ::System::String* DEVICE_ID; // 0x0
		// static const ::System::String* REGISTRY_KEY_NAME; // 0x0
		// static const ::System::String* SOFTWARE; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetDeviceID(::System::String* setID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER_SETDEVICEID_OFFSET))(this, setID);
		}

		::System::String* GetDeviceID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER_GETDEVICEID_OFFSET))(this);
		}

		::System::Void OnDeviceIDReady(::System::String* deviceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER_ONDEVICEIDREADY_OFFSET))(this, deviceID);
		}

		::System::Boolean CheckInvalidDeviceID(::System::String* strDeviceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER_CHECKINVALIDDEVICEID_OFFSET))(this, strDeviceID);
		}
	};
}
