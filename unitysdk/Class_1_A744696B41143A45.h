#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_472;
class Class_1_5DF5F62C68EF718F;
namespace System { class String; }

#define CLASS_1_A744696B41143A45_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0xC23A530)
#define CLASS_1_A744696B41143A45_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xC23A1D0)
#define CLASS_1_A744696B41143A45_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC23A210)
#define CLASS_1_A744696B41143A45_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xC23A510)
#define CLASS_1_A744696B41143A45_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xC23A4C0)
#define CLASS_1_A744696B41143A45_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xC23A2B0)
#define CLASS_1_A744696B41143A45_METHOD_1_F9F3136523DD73B7_OFFSET UNITYSDK_OFFSET(0xC23A3A0)
#define CLASS_1_A744696B41143A45_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0xC23A570)
#define CLASS_1_A744696B41143A45_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0xC23A5B0)
#define CLASS_1_A744696B41143A45_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0xC23A5F0)
#define CLASS_1_A744696B41143A45_SAMPLE_OFFSET UNITYSDK_OFFSET(0xC23A6D0)
#define CLASS_1_A744696B41143A45_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xC23A520)
#define CLASS_1_A744696B41143A45__CTOR_OFFSET UNITYSDK_OFFSET(0xC23A0B0)

inline static constexpr unsigned int Class_1_A744696B41143A45_TypeDefinitionIndex = 69170;

class Class_1_A744696B41143A45 : public ::System::Object
{
public:
	::Class_1_5DF5F62C68EF718F* INDMABDHFDH; // 0x10
	::Class_0_16E4307DCC419505_472* _OwnerFMSystem_k__BackingField; // 0x18
	::System::String* GIDAEFPOGHI; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_F9F3136523DD73B7(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_METHOD_1_F9F3136523DD73B7_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_472* get_OwnerFMSystem()
	{
		return ((::Class_0_16E4307DCC419505_472*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_GET_OWNERFMSYSTEM_OFFSET))(this);
	}

	::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_472* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_472*))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_CHANNELNAME_OFFSET))(this);
	}

	::System::Boolean AutoActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_AUTOACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_ONCHANNELACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_ONCHANNELDEACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_ONCHANNELUPDATE_OFFSET))(this, a1);
	}

	::System::Single Sample(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A744696B41143A45_SAMPLE_OFFSET))(this, a1);
	}
};
