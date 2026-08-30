#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DFBCCCD7D8D6C4CC_GET_ENABLEIPV6_OFFSET UNITYSDK_OFFSET(0x1EADEBF0)
#define CLASS_1_DFBCCCD7D8D6C4CC_GET_MAXLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EADECB0)
#define CLASS_1_DFBCCCD7D8D6C4CC_GET_MINLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EADECD0)
#define CLASS_1_DFBCCCD7D8D6C4CC_GET_PACKETLOSSRATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EADEC90)
#define CLASS_1_DFBCCCD7D8D6C4CC_GET_PINGTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x1EADEC30)
#define CLASS_1_DFBCCCD7D8D6C4CC_GET_PREFERIPV6RTTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EADEC50)
#define CLASS_1_DFBCCCD7D8D6C4CC_GET_RECVTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x1EADEC10)
#define CLASS_1_DFBCCCD7D8D6C4CC_GET_RTTUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EADEC70)
#define CLASS_1_DFBCCCD7D8D6C4CC_SET_ENABLEIPV6_OFFSET UNITYSDK_OFFSET(0x1EADEC00)
#define CLASS_1_DFBCCCD7D8D6C4CC_SET_MAXLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EADECC0)
#define CLASS_1_DFBCCCD7D8D6C4CC_SET_MINLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EADECE0)
#define CLASS_1_DFBCCCD7D8D6C4CC_SET_PACKETLOSSRATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EADECA0)
#define CLASS_1_DFBCCCD7D8D6C4CC_SET_PINGTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x1EADEC40)
#define CLASS_1_DFBCCCD7D8D6C4CC_SET_PREFERIPV6RTTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EADEC60)
#define CLASS_1_DFBCCCD7D8D6C4CC_SET_RECVTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x1EADEC20)
#define CLASS_1_DFBCCCD7D8D6C4CC_SET_RTTUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EADEC80)
#define CLASS_1_DFBCCCD7D8D6C4CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EACF7B0)

inline static constexpr unsigned int Class_1_DFBCCCD7D8D6C4CC_TypeDefinitionIndex = 42279;

class Class_1_DFBCCCD7D8D6C4CC : public ::System::Object
{
public:
	::System::Single _PacketLossRateThreshold_k__BackingField; // 0x10
	::System::UInt32 _PingTimeoutMiliSeconds_k__BackingField; // 0x14
	::System::Single _MinLongUnstableThreshold_k__BackingField; // 0x18
	::System::UInt32 _PreferIPv6RttThreshold_k__BackingField; // 0x1C
	::System::Single _MaxLongUnstableThreshold_k__BackingField; // 0x20
	::System::Int32 _RecvTimeoutMiliSeconds_k__BackingField; // 0x24
	::System::Boolean _EnableIpv6_k__BackingField; // 0x28
	::System::UInt32 _RttUnstableThreshold_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC__CTOR_OFFSET))(this);
	}

	::System::Boolean get_EnableIpv6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_GET_ENABLEIPV6_OFFSET))(this);
	}

	::System::Void set_EnableIpv6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_SET_ENABLEIPV6_OFFSET))(this, a1);
	}

	::System::Int32 get_RecvTimeoutMiliSeconds()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_GET_RECVTIMEOUTMILISECONDS_OFFSET))(this);
	}

	::System::Void set_RecvTimeoutMiliSeconds(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_SET_RECVTIMEOUTMILISECONDS_OFFSET))(this, a1);
	}

	::System::UInt32 get_PingTimeoutMiliSeconds()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_GET_PINGTIMEOUTMILISECONDS_OFFSET))(this);
	}

	::System::Void set_PingTimeoutMiliSeconds(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_SET_PINGTIMEOUTMILISECONDS_OFFSET))(this, a1);
	}

	::System::UInt32 get_PreferIPv6RttThreshold()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_GET_PREFERIPV6RTTTHRESHOLD_OFFSET))(this);
	}

	::System::Void set_PreferIPv6RttThreshold(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_SET_PREFERIPV6RTTTHRESHOLD_OFFSET))(this, a1);
	}

	::System::UInt32 get_RttUnstableThreshold()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_GET_RTTUNSTABLETHRESHOLD_OFFSET))(this);
	}

	::System::Void set_RttUnstableThreshold(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_SET_RTTUNSTABLETHRESHOLD_OFFSET))(this, a1);
	}

	::System::Single get_PacketLossRateThreshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_GET_PACKETLOSSRATETHRESHOLD_OFFSET))(this);
	}

	::System::Void set_PacketLossRateThreshold(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_SET_PACKETLOSSRATETHRESHOLD_OFFSET))(this, a1);
	}

	::System::Single get_MaxLongUnstableThreshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_GET_MAXLONGUNSTABLETHRESHOLD_OFFSET))(this);
	}

	::System::Void set_MaxLongUnstableThreshold(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_SET_MAXLONGUNSTABLETHRESHOLD_OFFSET))(this, a1);
	}

	::System::Single get_MinLongUnstableThreshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_GET_MINLONGUNSTABLETHRESHOLD_OFFSET))(this);
	}

	::System::Void set_MinLongUnstableThreshold(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DFBCCCD7D8D6C4CC_SET_MINLONGUNSTABLETHRESHOLD_OFFSET))(this, a1);
	}
};
