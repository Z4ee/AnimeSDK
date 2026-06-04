#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_348;
namespace System { class String; }

#define CLASS_1_735D63FF0721B01A_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0x14522B60)
#define CLASS_1_735D63FF0721B01A_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x14522BA0)
#define CLASS_1_735D63FF0721B01A_CLEAR_OFFSET UNITYSDK_OFFSET(0x14522D20)
#define CLASS_1_735D63FF0721B01A_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x14522AD0)
#define CLASS_1_735D63FF0721B01A_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14522D70)
#define CLASS_1_735D63FF0721B01A_METHOD_1_FACE598724AB5897_OFFSET UNITYSDK_OFFSET(0x14522AF0)
#define CLASS_1_735D63FF0721B01A_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0x14522BE0)
#define CLASS_1_735D63FF0721B01A_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0x14522C20)
#define CLASS_1_735D63FF0721B01A_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0x14522C60)
#define CLASS_1_735D63FF0721B01A_SAMPLE_OFFSET UNITYSDK_OFFSET(0x14522CC0)
#define CLASS_1_735D63FF0721B01A_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x14522AE0)
#define CLASS_1_735D63FF0721B01A__CTOR_OFFSET UNITYSDK_OFFSET(0x14522DD0)

inline static constexpr unsigned int Class_1_735D63FF0721B01A_TypeDefinitionIndex = 56920;

class Class_1_735D63FF0721B01A : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_348* _OwnerFMSystem_k__BackingField; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_348* get_OwnerFMSystem()
	{
		return ((::Class_0_16E4307DCC419505_348*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_GET_OWNERFMSYSTEM_OFFSET))(this);
	}

	::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_348* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_348*))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
	}

	::System::Void Method_1_FACE598724AB5897(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_METHOD_1_FACE598724AB5897_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean AutoActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_AUTOACTIVE_OFFSET))(this);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_CHANNELNAME_OFFSET))(this);
	}

	::System::Void OnChannelActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_ONCHANNELACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_ONCHANNELDEACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_ONCHANNELUPDATE_OFFSET))(this, a1);
	}

	::System::Single Sample(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_SAMPLE_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
