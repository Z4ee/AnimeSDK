#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_327;
class Class_1_D27BF54F25500E5F;
namespace System { class String; }

#define CLASS_1_3984705C0D8B5F91_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0x8A83290)
#define CLASS_1_3984705C0D8B5F91_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x8A82FC0)
#define CLASS_1_3984705C0D8B5F91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A83000)
#define CLASS_1_3984705C0D8B5F91_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x8A83270)
#define CLASS_1_3984705C0D8B5F91_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x8A83220)
#define CLASS_1_3984705C0D8B5F91_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x8A830A0)
#define CLASS_1_3984705C0D8B5F91_METHOD_1_F9A791B5381B18AE_OFFSET UNITYSDK_OFFSET(0x8A83140)
#define CLASS_1_3984705C0D8B5F91_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0x8A832D0)
#define CLASS_1_3984705C0D8B5F91_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0x8A83310)
#define CLASS_1_3984705C0D8B5F91_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0x8A83350)
#define CLASS_1_3984705C0D8B5F91_SAMPLE_OFFSET UNITYSDK_OFFSET(0x8A833F0)
#define CLASS_1_3984705C0D8B5F91_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x8A83280)
#define CLASS_1_3984705C0D8B5F91__CTOR_OFFSET UNITYSDK_OFFSET(0x8A82EF0)

inline static constexpr unsigned int Class_1_3984705C0D8B5F91_TypeDefinitionIndex = 56529;

class Class_1_3984705C0D8B5F91 : public ::System::Object
{
public:
	::Class_1_D27BF54F25500E5F* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_327* _OwnerFMSystem_k__BackingField; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F9A791B5381B18AE(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_METHOD_1_F9A791B5381B18AE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_327* get_OwnerFMSystem()
	{
		return ((::Class_0_16E4307DCC419505_327*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_GET_OWNERFMSYSTEM_OFFSET))(this);
	}

	::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_327* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_327*))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_SET_OWNERFMSYSTEM_OFFSET))(this, value);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_CHANNELNAME_OFFSET))(this);
	}

	::System::Boolean AutoActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_AUTOACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_ONCHANNELACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_ONCHANNELDEACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_ONCHANNELUPDATE_OFFSET))(this, a1);
	}

	::System::Single Sample(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3984705C0D8B5F91_SAMPLE_OFFSET))(this, a1);
	}
};
