#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKAUDIOSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18B91DC0)
#define AKAUDIOSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B91CD0)
#define AKAUDIOSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18B91D50)
#define AKAUDIOSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18B91BC0)
#define AKAUDIOSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x18B92020)
#define AKAUDIOSETTINGS_GET_UNUMSAMPLESPERSECOND_OFFSET UNITYSDK_OFFSET(0x18B92190)
#define AKAUDIOSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x18B91C10)
#define AKAUDIOSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x18B91F60)
#define AKAUDIOSETTINGS_SET_UNUMSAMPLESPERSECOND_OFFSET UNITYSDK_OFFSET(0x18B920D0)
#define AKAUDIOSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B92240)
#define AKAUDIOSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18B91BB0)

inline static constexpr unsigned int AkAudioSettings_TypeDefinitionIndex = 34453;

class AkAudioSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkAudioSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkAudioSettings*))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_uNumSamplesPerFrame(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET))(this, value);
	}

	::System::UInt32 get_uNumSamplesPerFrame()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET))(this);
	}

	::System::Void set_uNumSamplesPerSecond(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_SET_UNUMSAMPLESPERSECOND_OFFSET))(this, value);
	}

	::System::UInt32 get_uNumSamplesPerSecond()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_GET_UNUMSAMPLESPERSECOND_OFFSET))(this);
	}
};
