#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKAUDIOSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B9515D0)
#define AKAUDIOSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B9513E0)
#define AKAUDIOSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B951500)
#define AKAUDIOSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B951330)
#define AKAUDIOSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x1B951870)
#define AKAUDIOSETTINGS_GET_UNUMSAMPLESPERSECOND_OFFSET UNITYSDK_OFFSET(0x1B9519E0)
#define AKAUDIOSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B951380)
#define AKAUDIOSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x1B9517B0)
#define AKAUDIOSETTINGS_SET_UNUMSAMPLESPERSECOND_OFFSET UNITYSDK_OFFSET(0x1B951920)
#define AKAUDIOSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B951A90)
#define AKAUDIOSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B951320)

inline static constexpr unsigned int AkAudioSettings_TypeDefinitionIndex = 41914;

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
