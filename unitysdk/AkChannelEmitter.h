#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkTransform;

#define AKCHANNELEMITTER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FBDE520)
#define AKCHANNELEMITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FBDE400)
#define AKCHANNELEMITTER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FBDE4B0)
#define AKCHANNELEMITTER_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1FBDE340)
#define AKCHANNELEMITTER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1FBDE770)
#define AKCHANNELEMITTER_GET_UINPUTCHANNELS_OFFSET UNITYSDK_OFFSET(0x1FBDE8D0)
#define AKCHANNELEMITTER_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1FBDE350)
#define AKCHANNELEMITTER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1FBDE6D0)
#define AKCHANNELEMITTER_SET_UINPUTCHANNELS_OFFSET UNITYSDK_OFFSET(0x1FBDE850)
#define AKCHANNELEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDE330)

inline static constexpr unsigned int AkChannelEmitter_TypeDefinitionIndex = 33590;

class AkChannelEmitter : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	static ::System::IntPtr getCPtr(::AkChannelEmitter* obj)
	{
		return ((::System::IntPtr(*)(::AkChannelEmitter*))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_position(::AkTransform* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkTransform*))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_SET_POSITION_OFFSET))(this, value);
	}

	::AkTransform* get_position()
	{
		return ((::AkTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_uInputChannels(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_SET_UINPUTCHANNELS_OFFSET))(this, value);
	}

	::System::UInt32 get_uInputChannels()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTER_GET_UINPUTCHANNELS_OFFSET))(this);
	}
};
