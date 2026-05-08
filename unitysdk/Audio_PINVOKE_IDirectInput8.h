#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Audio_PINVOKE_DeviceClass.h"
#include "unitysdk/Audio_PINVOKE_DeviceEnumerationFlags.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Audio_PINVOKE_IDirectInput8_DirectInputEnumDevicesDelegate;

#define AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESIMPL_OFFSET UNITYSDK_OFFSET(0x12F08920)
#define AUDIO_PINVOKE_IDIRECTINPUT8_ENUMDEVICES_OFFSET UNITYSDK_OFFSET(0x12F08880)
#define AUDIO_PINVOKE_IDIRECTINPUT8_GETDEVICESGUIDPRODUCT_OFFSET UNITYSDK_OFFSET(0x12F087A0)
#define AUDIO_PINVOKE_IDIRECTINPUT8_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x12F08940)
#define AUDIO_PINVOKE_IDIRECTINPUT8__CTOR_OFFSET UNITYSDK_OFFSET(0x12F08730)

inline static constexpr unsigned int Audio_PINVOKE_IDirectInput8_TypeDefinitionIndex = 67768;

class Audio_PINVOKE_IDirectInput8 : public ::System::Object
{
public:
	::Audio_PINVOKE_IDirectInput8_DirectInputEnumDevicesDelegate* _callback; // 0x10
	::System::Guid resultGuidProduct; // 0x18
	::System::IntPtr _nativePtr; // 0x28
	::System::IntPtr _callbackPtr; // 0x30

	::System::Void _ctor(::System::IntPtr nativePtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8__CTOR_OFFSET))(this, nativePtr);
	}

	::System::Guid GetDevicesGuidProduct()
	{
		return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_GETDEVICESGUIDPRODUCT_OFFSET))(this);
	}

	::System::Int32 DirectInputEnumDevicesImpl(::System::Void* deviceInstance, ::System::IntPtr data)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Void*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESIMPL_OFFSET))(this, deviceInstance, data);
	}

	::System::Int32 EnumDevices(::Audio_PINVOKE_DeviceClass dwDevType, ::System::IntPtr lpCallback, ::System::IntPtr pvRef, ::Audio_PINVOKE_DeviceEnumerationFlags dwFlags)
	{
		return ((::System::Int32(*)(::PVOID, ::Audio_PINVOKE_DeviceClass, ::System::IntPtr, ::System::IntPtr, ::Audio_PINVOKE_DeviceEnumerationFlags))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_ENUMDEVICES_OFFSET))(this, dwDevType, lpCallback, pvRef, dwFlags);
	}

	::System::Void* get_Item(::System::UInt32 index)
	{
		return ((::System::Void*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_GET_ITEM_OFFSET))(this, index);
	}
};
