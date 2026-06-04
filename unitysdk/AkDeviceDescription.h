#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioDeviceState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKDEVICEDESCRIPTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B42AE20)
#define AKDEVICEDESCRIPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1B42AF80)
#define AKDEVICEDESCRIPTION_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B42A660)
#define AKDEVICEDESCRIPTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B42A540)
#define AKDEVICEDESCRIPTION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B42A5F0)
#define AKDEVICEDESCRIPTION_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B42A400)
#define AKDEVICEDESCRIPTION_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1B42AED0)
#define AKDEVICEDESCRIPTION_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1B42AA70)
#define AKDEVICEDESCRIPTION_GET_DEVICESTATEMASK_OFFSET UNITYSDK_OFFSET(0x1B42AC00)
#define AKDEVICEDESCRIPTION_GET_IDDEVICE_OFFSET UNITYSDK_OFFSET(0x1B42A900)
#define AKDEVICEDESCRIPTION_GET_ISDEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x1B42AD70)
#define AKDEVICEDESCRIPTION_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B42A450)
#define AKDEVICEDESCRIPTION_SET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1B42A9B0)
#define AKDEVICEDESCRIPTION_SET_DEVICESTATEMASK_OFFSET UNITYSDK_OFFSET(0x1B42AB40)
#define AKDEVICEDESCRIPTION_SET_IDDEVICE_OFFSET UNITYSDK_OFFSET(0x1B42A840)
#define AKDEVICEDESCRIPTION_SET_ISDEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x1B42ACB0)
#define AKDEVICEDESCRIPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B42B0A0)
#define AKDEVICEDESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42A3F0)

inline static constexpr unsigned int AkDeviceDescription_TypeDefinitionIndex = 41114;

class AkDeviceDescription : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkDeviceDescription* a1)
	{
		return ((::System::IntPtr(*)(::AkDeviceDescription*))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_idDevice(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_SET_IDDEVICE_OFFSET))(this, a1);
	}

	::System::UInt32 get_idDevice()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_GET_IDDEVICE_OFFSET))(this);
	}

	::System::Void set_deviceName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_SET_DEVICENAME_OFFSET))(this, a1);
	}

	::System::String* get_deviceName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_GET_DEVICENAME_OFFSET))(this);
	}

	::System::Void set_deviceStateMask(::AkAudioDeviceState a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkAudioDeviceState))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_SET_DEVICESTATEMASK_OFFSET))(this, a1);
	}

	::AkAudioDeviceState get_deviceStateMask()
	{
		return ((::AkAudioDeviceState(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_GET_DEVICESTATEMASK_OFFSET))(this);
	}

	::System::Void set_isDefaultDevice(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_SET_ISDEFAULTDEVICE_OFFSET))(this, a1);
	}

	::System::Boolean get_isDefaultDevice()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_GET_ISDEFAULTDEVICE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_CLEAR_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_GETSIZEOF_OFFSET))();
	}

	::System::Void Clone(::AkDeviceDescription* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkDeviceDescription*))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_CLONE_OFFSET))(this, a1);
	}
};
