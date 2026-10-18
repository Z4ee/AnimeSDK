#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_472;
namespace System { class String; }

#define CLASS_1_144A9DD221938390_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0xBCAF170)
#define CLASS_1_144A9DD221938390_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xBCAEF30)
#define CLASS_1_144A9DD221938390_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCAEE40)
#define CLASS_1_144A9DD221938390_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBCAED90)
#define CLASS_1_144A9DD221938390_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBCAED80)
#define CLASS_1_144A9DD221938390_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xBCAF150)
#define CLASS_1_144A9DD221938390_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xBCAEEA0)
#define CLASS_1_144A9DD221938390_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xBCAF0F0)
#define CLASS_1_144A9DD221938390_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0xBCAF000)
#define CLASS_1_144A9DD221938390_METHOD_1_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xBCAEF70)
#define CLASS_1_144A9DD221938390_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xBCAF0A0)
#define CLASS_1_144A9DD221938390_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0xBCAF1B0)
#define CLASS_1_144A9DD221938390_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0xBCAF1F0)
#define CLASS_1_144A9DD221938390_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0xBCAF230)
#define CLASS_1_144A9DD221938390_SAMPLE_OFFSET UNITYSDK_OFFSET(0xBCAF290)
#define CLASS_1_144A9DD221938390_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBCAEDA0)
#define CLASS_1_144A9DD221938390_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xBCAF160)
#define CLASS_1_144A9DD221938390__CTOR_OFFSET UNITYSDK_OFFSET(0xBCAEDB0)

inline static constexpr unsigned int Class_1_144A9DD221938390_TypeDefinitionIndex = 74043;

class Class_1_144A9DD221938390 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_472* _OwnerFMSystem_k__BackingField; // 0x10
	::System::String* _Name_k__BackingField; // 0x18
	::System::Single COCJDAKNIAP; // 0x20
	::System::Boolean _IsActive_k__BackingField; // 0x24

	::System::Void _ctor(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_GET_NAME_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_1_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_METHOD_1_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_472* get_OwnerFMSystem()
	{
		return ((::Class_0_16E4307DCC419505_472*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_GET_OWNERFMSYSTEM_OFFSET))(this);
	}

	::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_472* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_472*))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
	}

	::System::Boolean AutoActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_AUTOACTIVE_OFFSET))(this);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_CHANNELNAME_OFFSET))(this);
	}

	::System::Void OnChannelActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_ONCHANNELACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_ONCHANNELDEACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_ONCHANNELUPDATE_OFFSET))(this, a1);
	}

	::System::Single Sample(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_SAMPLE_OFFSET))(this, a1);
	}
};
