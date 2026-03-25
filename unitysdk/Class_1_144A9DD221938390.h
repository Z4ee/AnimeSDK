#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_327;
namespace System { class String; }

#define CLASS_1_144A9DD221938390_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0x116F4150)
#define CLASS_1_144A9DD221938390_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x116F3F10)
#define CLASS_1_144A9DD221938390_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116F3E20)
#define CLASS_1_144A9DD221938390_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x116F3D60)
#define CLASS_1_144A9DD221938390_GET_NAME_OFFSET UNITYSDK_OFFSET(0x116F3D50)
#define CLASS_1_144A9DD221938390_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x116F4130)
#define CLASS_1_144A9DD221938390_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x116F40D0)
#define CLASS_1_144A9DD221938390_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x116F3FE0)
#define CLASS_1_144A9DD221938390_METHOD_1_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x116F3F50)
#define CLASS_1_144A9DD221938390_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x116F3E80)
#define CLASS_1_144A9DD221938390_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x116F4080)
#define CLASS_1_144A9DD221938390_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0x116F4190)
#define CLASS_1_144A9DD221938390_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0x116F41D0)
#define CLASS_1_144A9DD221938390_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0x116F4210)
#define CLASS_1_144A9DD221938390_SAMPLE_OFFSET UNITYSDK_OFFSET(0x116F4270)
#define CLASS_1_144A9DD221938390_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x116F3D70)
#define CLASS_1_144A9DD221938390_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x116F4140)
#define CLASS_1_144A9DD221938390__CTOR_OFFSET UNITYSDK_OFFSET(0x116F3D80)

inline static constexpr unsigned int Class_1_144A9DD221938390_TypeDefinitionIndex = 60716;

class Class_1_144A9DD221938390 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_327* _OwnerFMSystem_k__BackingField; // 0x10
	::System::String* _Name_k__BackingField; // 0x18
	::System::Boolean _IsActive_k__BackingField; // 0x20
	::System::Single Field_1_3; // 0x24

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

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_SET_ISACTIVE_OFFSET))(this, value);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_METHOD_1_57D5ED2C4C06D908_OFFSET))(this);
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

	::Class_0_16E4307DCC419505_327* get_OwnerFMSystem()
	{
		return ((::Class_0_16E4307DCC419505_327*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_GET_OWNERFMSYSTEM_OFFSET))(this);
	}

	::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_327* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_327*))((::PBYTE)hIl2Cpp + CLASS_1_144A9DD221938390_SET_OWNERFMSYSTEM_OFFSET))(this, value);
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
