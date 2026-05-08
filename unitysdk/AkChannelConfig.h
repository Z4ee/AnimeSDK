#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKCHANNELCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C371D30)
#define AKCHANNELCONFIG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C3720C0)
#define AKCHANNELCONFIG_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C371770)
#define AKCHANNELCONFIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C371650)
#define AKCHANNELCONFIG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C371700)
#define AKCHANNELCONFIG_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C371590)
#define AKCHANNELCONFIG_GET_ECONFIGTYPE_OFFSET UNITYSDK_OFFSET(0x1C371AA0)
#define AKCHANNELCONFIG_GET_UCHANNELMASK_OFFSET UNITYSDK_OFFSET(0x1C371BA0)
#define AKCHANNELCONFIG_GET_UNUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x1C3719A0)
#define AKCHANNELCONFIG_ISCHANNELCONFIGSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C3722E0)
#define AKCHANNELCONFIG_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C371FC0)
#define AKCHANNELCONFIG_REMOVECENTER_OFFSET UNITYSDK_OFFSET(0x1C372210)
#define AKCHANNELCONFIG_REMOVELFE_OFFSET UNITYSDK_OFFSET(0x1C372140)
#define AKCHANNELCONFIG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C372040)
#define AKCHANNELCONFIG_SETAMBISONIC_OFFSET UNITYSDK_OFFSET(0x1C371F40)
#define AKCHANNELCONFIG_SETANONYMOUS_OFFSET UNITYSDK_OFFSET(0x1C371EC0)
#define AKCHANNELCONFIG_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C3715A0)
#define AKCHANNELCONFIG_SETSTANDARDORANONYMOUS_OFFSET UNITYSDK_OFFSET(0x1C371E30)
#define AKCHANNELCONFIG_SETSTANDARD_OFFSET UNITYSDK_OFFSET(0x1C371DB0)
#define AKCHANNELCONFIG_SET_ECONFIGTYPE_OFFSET UNITYSDK_OFFSET(0x1C371A20)
#define AKCHANNELCONFIG_SET_UCHANNELMASK_OFFSET UNITYSDK_OFFSET(0x1C371B20)
#define AKCHANNELCONFIG_SET_UNUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x1C371920)
#define AKCHANNELCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C371C20)
#define AKCHANNELCONFIG__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C371CA0)
#define AKCHANNELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C371580)

inline static constexpr unsigned int AkChannelConfig_TypeDefinitionIndex = 31402;

class AkChannelConfig : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::UInt32 in_uNumChannels, ::System::UInt32 in_uChannelMask)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG__CTOR_2_OFFSET))(this, in_uNumChannels, in_uChannelMask);
	}

	static ::System::IntPtr getCPtr(::AkChannelConfig* obj)
	{
		return ((::System::IntPtr(*)(::AkChannelConfig*))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_uNumChannels(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SET_UNUMCHANNELS_OFFSET))(this, value);
	}

	::System::UInt32 get_uNumChannels()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_GET_UNUMCHANNELS_OFFSET))(this);
	}

	::System::Void set_eConfigType(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SET_ECONFIGTYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_eConfigType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_GET_ECONFIGTYPE_OFFSET))(this);
	}

	::System::Void set_uChannelMask(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SET_UCHANNELMASK_OFFSET))(this, value);
	}

	::System::UInt32 get_uChannelMask()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_GET_UCHANNELMASK_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_CLEAR_OFFSET))(this);
	}

	::System::Void SetStandard(::System::UInt32 in_uChannelMask)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SETSTANDARD_OFFSET))(this, in_uChannelMask);
	}

	::System::Void SetStandardOrAnonymous(::System::UInt32 in_uNumChannels, ::System::UInt32 in_uChannelMask)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SETSTANDARDORANONYMOUS_OFFSET))(this, in_uNumChannels, in_uChannelMask);
	}

	::System::Void SetAnonymous(::System::UInt32 in_uNumChannels)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SETANONYMOUS_OFFSET))(this, in_uNumChannels);
	}

	::System::Void SetAmbisonic(::System::UInt32 in_uNumChannels)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SETAMBISONIC_OFFSET))(this, in_uNumChannels);
	}

	::System::Boolean IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_ISVALID_OFFSET))(this);
	}

	::System::UInt32 Serialize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SERIALIZE_OFFSET))(this);
	}

	::System::Void Deserialize(::System::UInt32 in_uChannelConfig)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_DESERIALIZE_OFFSET))(this, in_uChannelConfig);
	}

	::AkChannelConfig* RemoveLFE()
	{
		return ((::AkChannelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_REMOVELFE_OFFSET))(this);
	}

	::AkChannelConfig* RemoveCenter()
	{
		return ((::AkChannelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_REMOVECENTER_OFFSET))(this);
	}

	::System::Boolean IsChannelConfigSupported()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_ISCHANNELCONFIGSUPPORTED_OFFSET))(this);
	}
};
