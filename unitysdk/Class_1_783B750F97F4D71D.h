#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_783B750F97F4D71D_GET_ENABLEIPV6_OFFSET UNITYSDK_OFFSET(0x17A7B260)
#define CLASS_1_783B750F97F4D71D_GET_MAXLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17A7B320)
#define CLASS_1_783B750F97F4D71D_GET_MINLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17A7B340)
#define CLASS_1_783B750F97F4D71D_GET_PACKETLOSSRATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17A7B300)
#define CLASS_1_783B750F97F4D71D_GET_PINGTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x17A7B2A0)
#define CLASS_1_783B750F97F4D71D_GET_PREFERIPV6RTTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17A7B2C0)
#define CLASS_1_783B750F97F4D71D_GET_RECVTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x17A7B280)
#define CLASS_1_783B750F97F4D71D_GET_RTTUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17A7B2E0)
#define CLASS_1_783B750F97F4D71D_SET_ENABLEIPV6_OFFSET UNITYSDK_OFFSET(0x17A7B270)
#define CLASS_1_783B750F97F4D71D_SET_MAXLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17A7B330)
#define CLASS_1_783B750F97F4D71D_SET_MINLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17A7B350)
#define CLASS_1_783B750F97F4D71D_SET_PACKETLOSSRATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17A7B310)
#define CLASS_1_783B750F97F4D71D_SET_PINGTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x17A7B2B0)
#define CLASS_1_783B750F97F4D71D_SET_PREFERIPV6RTTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17A7B2D0)
#define CLASS_1_783B750F97F4D71D_SET_RECVTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x17A7B290)
#define CLASS_1_783B750F97F4D71D_SET_RTTUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17A7B2F0)
#define CLASS_1_783B750F97F4D71D__CTOR_OFFSET UNITYSDK_OFFSET(0x17A721B0)

inline static constexpr unsigned int Class_1_783B750F97F4D71D_TypeDefinitionIndex = 33880;

class Class_1_783B750F97F4D71D : public ::System::Object
{
public:
	::System::UInt32 _PreferIPv6RttThreshold_k__BackingField; // 0x10
	::System::Boolean _EnableIpv6_k__BackingField; // 0x14
	::System::UInt32 _PingTimeoutMiliSeconds_k__BackingField; // 0x18
	::System::Single _MaxLongUnstableThreshold_k__BackingField; // 0x1C
	::System::Single _MinLongUnstableThreshold_k__BackingField; // 0x20
	::System::Single _PacketLossRateThreshold_k__BackingField; // 0x24
	::System::UInt32 _RttUnstableThreshold_k__BackingField; // 0x28
	::System::Int32 _RecvTimeoutMiliSeconds_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D__CTOR_OFFSET))(this);
	}

	::System::Boolean get_EnableIpv6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_GET_ENABLEIPV6_OFFSET))(this);
	}

	::System::Void set_EnableIpv6(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_SET_ENABLEIPV6_OFFSET))(this, value);
	}

	::System::Int32 get_RecvTimeoutMiliSeconds()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_GET_RECVTIMEOUTMILISECONDS_OFFSET))(this);
	}

	::System::Void set_RecvTimeoutMiliSeconds(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_SET_RECVTIMEOUTMILISECONDS_OFFSET))(this, value);
	}

	::System::UInt32 get_PingTimeoutMiliSeconds()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_GET_PINGTIMEOUTMILISECONDS_OFFSET))(this);
	}

	::System::Void set_PingTimeoutMiliSeconds(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_SET_PINGTIMEOUTMILISECONDS_OFFSET))(this, value);
	}

	::System::UInt32 get_PreferIPv6RttThreshold()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_GET_PREFERIPV6RTTTHRESHOLD_OFFSET))(this);
	}

	::System::Void set_PreferIPv6RttThreshold(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_SET_PREFERIPV6RTTTHRESHOLD_OFFSET))(this, value);
	}

	::System::UInt32 get_RttUnstableThreshold()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_GET_RTTUNSTABLETHRESHOLD_OFFSET))(this);
	}

	::System::Void set_RttUnstableThreshold(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_SET_RTTUNSTABLETHRESHOLD_OFFSET))(this, value);
	}

	::System::Single get_PacketLossRateThreshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_GET_PACKETLOSSRATETHRESHOLD_OFFSET))(this);
	}

	::System::Void set_PacketLossRateThreshold(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_SET_PACKETLOSSRATETHRESHOLD_OFFSET))(this, value);
	}

	::System::Single get_MaxLongUnstableThreshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_GET_MAXLONGUNSTABLETHRESHOLD_OFFSET))(this);
	}

	::System::Void set_MaxLongUnstableThreshold(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_SET_MAXLONGUNSTABLETHRESHOLD_OFFSET))(this, value);
	}

	::System::Single get_MinLongUnstableThreshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_GET_MINLONGUNSTABLETHRESHOLD_OFFSET))(this);
	}

	::System::Void set_MinLongUnstableThreshold(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_783B750F97F4D71D_SET_MINLONGUNSTABLETHRESHOLD_OFFSET))(this, value);
	}
};
