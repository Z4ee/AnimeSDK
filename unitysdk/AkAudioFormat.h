#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkChannelConfig;

#define AKAUDIOFORMAT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A5C8590)
#define AKAUDIOFORMAT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5C84A0)
#define AKAUDIOFORMAT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5C8520)
#define AKAUDIOFORMAT_GETBITSPERSAMPLE_OFFSET UNITYSDK_OFFSET(0x1A5C9180)
#define AKAUDIOFORMAT_GETBLOCKALIGN_OFFSET UNITYSDK_OFFSET(0x1A5C9230)
#define AKAUDIOFORMAT_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5C8390)
#define AKAUDIOFORMAT_GETINTERLEAVEID_OFFSET UNITYSDK_OFFSET(0x1A5C9390)
#define AKAUDIOFORMAT_GETNUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x1A5C90D0)
#define AKAUDIOFORMAT_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1A5C92E0)
#define AKAUDIOFORMAT_GET_CHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1A5C8A10)
#define AKAUDIOFORMAT_GET_UBITSPERSAMPLE_OFFSET UNITYSDK_OFFSET(0x1A5C8BD0)
#define AKAUDIOFORMAT_GET_UBLOCKALIGN_OFFSET UNITYSDK_OFFSET(0x1A5C8D40)
#define AKAUDIOFORMAT_GET_UINTERLEAVEID_OFFSET UNITYSDK_OFFSET(0x1A5C9020)
#define AKAUDIOFORMAT_GET_USAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1A5C87F0)
#define AKAUDIOFORMAT_GET_UTYPEID_OFFSET UNITYSDK_OFFSET(0x1A5C8EB0)
#define AKAUDIOFORMAT_ISCHANNELCONFIGSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A5C95B0)
#define AKAUDIOFORMAT_SETALL_OFFSET UNITYSDK_OFFSET(0x1A5C9440)
#define AKAUDIOFORMAT_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5C83E0)
#define AKAUDIOFORMAT_SET_CHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1A5C88A0)
#define AKAUDIOFORMAT_SET_UBITSPERSAMPLE_OFFSET UNITYSDK_OFFSET(0x1A5C8B10)
#define AKAUDIOFORMAT_SET_UBLOCKALIGN_OFFSET UNITYSDK_OFFSET(0x1A5C8C80)
#define AKAUDIOFORMAT_SET_UINTERLEAVEID_OFFSET UNITYSDK_OFFSET(0x1A5C8F60)
#define AKAUDIOFORMAT_SET_USAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1A5C8730)
#define AKAUDIOFORMAT_SET_UTYPEID_OFFSET UNITYSDK_OFFSET(0x1A5C8DF0)
#define AKAUDIOFORMAT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5C9660)
#define AKAUDIOFORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C8380)

inline static constexpr unsigned int AkAudioFormat_TypeDefinitionIndex = 40270;

class AkAudioFormat : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkAudioFormat* obj)
	{
		return ((::System::IntPtr(*)(::AkAudioFormat*))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_uSampleRate(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_USAMPLERATE_OFFSET))(this, value);
	}

	::System::UInt32 get_uSampleRate()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_USAMPLERATE_OFFSET))(this);
	}

	::System::Void set_channelConfig(::AkChannelConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkChannelConfig*))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_CHANNELCONFIG_OFFSET))(this, value);
	}

	::AkChannelConfig* get_channelConfig()
	{
		return ((::AkChannelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_CHANNELCONFIG_OFFSET))(this);
	}

	::System::Void set_uBitsPerSample(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_UBITSPERSAMPLE_OFFSET))(this, value);
	}

	::System::UInt32 get_uBitsPerSample()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_UBITSPERSAMPLE_OFFSET))(this);
	}

	::System::Void set_uBlockAlign(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_UBLOCKALIGN_OFFSET))(this, value);
	}

	::System::UInt32 get_uBlockAlign()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_UBLOCKALIGN_OFFSET))(this);
	}

	::System::Void set_uTypeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_UTYPEID_OFFSET))(this, value);
	}

	::System::UInt32 get_uTypeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_UTYPEID_OFFSET))(this);
	}

	::System::Void set_uInterleaveID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_UINTERLEAVEID_OFFSET))(this, value);
	}

	::System::UInt32 get_uInterleaveID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_UINTERLEAVEID_OFFSET))(this);
	}

	::System::UInt32 GetNumChannels()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETNUMCHANNELS_OFFSET))(this);
	}

	::System::UInt32 GetBitsPerSample()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETBITSPERSAMPLE_OFFSET))(this);
	}

	::System::UInt32 GetBlockAlign()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETBLOCKALIGN_OFFSET))(this);
	}

	::System::UInt32 GetTypeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETTYPEID_OFFSET))(this);
	}

	::System::UInt32 GetInterleaveID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETINTERLEAVEID_OFFSET))(this);
	}

	::System::Void SetAll(::System::UInt32 in_uSampleRate, ::AkChannelConfig* in_channelConfig, ::System::UInt32 in_uBitsPerSample, ::System::UInt32 in_uBlockAlign, ::System::UInt32 in_uTypeID, ::System::UInt32 in_uInterleaveID)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkChannelConfig*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SETALL_OFFSET))(this, in_uSampleRate, in_channelConfig, in_uBitsPerSample, in_uBlockAlign, in_uTypeID, in_uInterleaveID);
	}

	::System::Boolean IsChannelConfigSupported()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_ISCHANNELCONFIGSUPPORTED_OFFSET))(this);
	}
};
