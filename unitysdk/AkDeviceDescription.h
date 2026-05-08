#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioDeviceState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKDEVICEDESCRIPTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C29C410)
#define AKDEVICEDESCRIPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1C29C510)
#define AKDEVICEDESCRIPTION_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C29BDF0)
#define AKDEVICEDESCRIPTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C29BCD0)
#define AKDEVICEDESCRIPTION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C29BD80)
#define AKDEVICEDESCRIPTION_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C29BC10)
#define AKDEVICEDESCRIPTION_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1C29C490)
#define AKDEVICEDESCRIPTION_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1C29C130)
#define AKDEVICEDESCRIPTION_GET_DEVICESTATEMASK_OFFSET UNITYSDK_OFFSET(0x1C29C290)
#define AKDEVICEDESCRIPTION_GET_IDDEVICE_OFFSET UNITYSDK_OFFSET(0x1C29C020)
#define AKDEVICEDESCRIPTION_GET_ISDEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x1C29C390)
#define AKDEVICEDESCRIPTION_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C29BC20)
#define AKDEVICEDESCRIPTION_SET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1C29C0A0)
#define AKDEVICEDESCRIPTION_SET_DEVICESTATEMASK_OFFSET UNITYSDK_OFFSET(0x1C29C210)
#define AKDEVICEDESCRIPTION_SET_IDDEVICE_OFFSET UNITYSDK_OFFSET(0x1C29BFA0)
#define AKDEVICEDESCRIPTION_SET_ISDEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x1C29C310)
#define AKDEVICEDESCRIPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C29C5B0)
#define AKDEVICEDESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29BC00)

inline static constexpr unsigned int AkDeviceDescription_TypeDefinitionIndex = 31408;

class AkDeviceDescription : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkDeviceDescription* obj)
	{
		return ((::System::IntPtr(*)(::AkDeviceDescription*))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_idDevice(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_SET_IDDEVICE_OFFSET))(this, value);
	}

	::System::UInt32 get_idDevice()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_GET_IDDEVICE_OFFSET))(this);
	}

	::System::Void set_deviceName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_SET_DEVICENAME_OFFSET))(this, value);
	}

	::System::String* get_deviceName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_GET_DEVICENAME_OFFSET))(this);
	}

	::System::Void set_deviceStateMask(::AkAudioDeviceState value)
	{
		return ((::System::Void(*)(::PVOID, ::AkAudioDeviceState))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_SET_DEVICESTATEMASK_OFFSET))(this, value);
	}

	::AkAudioDeviceState get_deviceStateMask()
	{
		return ((::AkAudioDeviceState(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_GET_DEVICESTATEMASK_OFFSET))(this);
	}

	::System::Void set_isDefaultDevice(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_SET_ISDEFAULTDEVICE_OFFSET))(this, value);
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

	::System::Void Clone(::AkDeviceDescription* other)
	{
		return ((::System::Void(*)(::PVOID, ::AkDeviceDescription*))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTION_CLONE_OFFSET))(this, other);
	}
};
