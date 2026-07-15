#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkTransform;

#define AKCHANNELEMITTER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B95DE20)
#define AKCHANNELEMITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B95DC30)
#define AKCHANNELEMITTER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B95DD50)
#define AKCHANNELEMITTER_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B95DB80)
#define AKCHANNELEMITTER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B95E120)
#define AKCHANNELEMITTER_GET_UINPUTCHANNELS_OFFSET UNITYSDK_OFFSET(0x1B95E2F0)
#define AKCHANNELEMITTER_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B95DBD0)
#define AKCHANNELEMITTER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B95E000)
#define AKCHANNELEMITTER_SET_UINPUTCHANNELS_OFFSET UNITYSDK_OFFSET(0x1B95E230)
#define AKCHANNELEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B95DB70)

inline static constexpr unsigned int AkChannelEmitter_TypeDefinitionIndex = 41925;

class AkChannelEmitter : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::IntPtr getCPtr(::AkChannelEmitter* a1)
	{
		return ((::System::IntPtr(*)(::AkChannelEmitter*))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_position(::AkTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkTransform*))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_SET_POSITION_OFFSET))(this, a1);
	}

	::AkTransform* get_position()
	{
		return ((::AkTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_uInputChannels(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_SET_UINPUTCHANNELS_OFFSET))(this, a1);
	}

	::System::UInt32 get_uInputChannels()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_GET_UINPUTCHANNELS_OFFSET))(this);
	}
};
