#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKAUDIOSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EEAF540)
#define AKAUDIOSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEAF350)
#define AKAUDIOSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EEAF470)
#define AKAUDIOSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEAF2A0)
#define AKAUDIOSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x1EEAF7E0)
#define AKAUDIOSETTINGS_GET_UNUMSAMPLESPERSECOND_OFFSET UNITYSDK_OFFSET(0x1EEAF950)
#define AKAUDIOSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEAF2F0)
#define AKAUDIOSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x1EEAF720)
#define AKAUDIOSETTINGS_SET_UNUMSAMPLESPERSECOND_OFFSET UNITYSDK_OFFSET(0x1EEAF890)
#define AKAUDIOSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEAFA00)
#define AKAUDIOSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEAF290)

inline static constexpr unsigned int AkAudioSettings_TypeDefinitionIndex = 43525;

class AkAudioSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkAudioSettings* a1)
	{
		return ((::System::IntPtr(*)(::AkAudioSettings*))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_uNumSamplesPerFrame(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET))(this, a1);
	}

	::System::UInt32 get_uNumSamplesPerFrame()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET))(this);
	}

	::System::Void set_uNumSamplesPerSecond(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_SET_UNUMSAMPLESPERSECOND_OFFSET))(this, a1);
	}

	::System::UInt32 get_uNumSamplesPerSecond()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSETTINGS_GET_UNUMSAMPLESPERSECOND_OFFSET))(this);
	}
};
