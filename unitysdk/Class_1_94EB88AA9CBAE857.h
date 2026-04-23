#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_335;
namespace System { class String; }

#define CLASS_1_94EB88AA9CBAE857_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0x10AE8270)
#define CLASS_1_94EB88AA9CBAE857_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x10AE8030)
#define CLASS_1_94EB88AA9CBAE857_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AE7F40)
#define CLASS_1_94EB88AA9CBAE857_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10AE7E80)
#define CLASS_1_94EB88AA9CBAE857_GET_NAME_OFFSET UNITYSDK_OFFSET(0x10AE7E70)
#define CLASS_1_94EB88AA9CBAE857_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x10AE8250)
#define CLASS_1_94EB88AA9CBAE857_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10AE81F0)
#define CLASS_1_94EB88AA9CBAE857_METHOD_1_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x10AE8070)
#define CLASS_1_94EB88AA9CBAE857_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x10AE7FA0)
#define CLASS_1_94EB88AA9CBAE857_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x10AE8100)
#define CLASS_1_94EB88AA9CBAE857_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x10AE81A0)
#define CLASS_1_94EB88AA9CBAE857_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0x10AE82B0)
#define CLASS_1_94EB88AA9CBAE857_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0x10AE82F0)
#define CLASS_1_94EB88AA9CBAE857_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0x10AE8330)
#define CLASS_1_94EB88AA9CBAE857_SAMPLE_OFFSET UNITYSDK_OFFSET(0x10AE8390)
#define CLASS_1_94EB88AA9CBAE857_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10AE7E90)
#define CLASS_1_94EB88AA9CBAE857_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x10AE8260)
#define CLASS_1_94EB88AA9CBAE857__CTOR_OFFSET UNITYSDK_OFFSET(0x10AE7EA0)

inline static constexpr unsigned int Class_1_94EB88AA9CBAE857_TypeDefinitionIndex = 68158;

class Class_1_94EB88AA9CBAE857 : public ::System::Object
{
public:
	::System::String* _Name_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_335* _OwnerFMSystem_k__BackingField; // 0x18
	::System::Boolean _IsActive_k__BackingField; // 0x20
	::System::Single Field_1_3; // 0x24

	::System::Void _ctor(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_GET_NAME_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_SET_ISACTIVE_OFFSET))(this, value);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_METHOD_1_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_METHOD_1_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_335* get_OwnerFMSystem()
	{
		return ((::Class_0_16E4307DCC419505_335*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_GET_OWNERFMSYSTEM_OFFSET))(this);
	}

	::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_335* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_335*))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_SET_OWNERFMSYSTEM_OFFSET))(this, value);
	}

	::System::Boolean AutoActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_AUTOACTIVE_OFFSET))(this);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_CHANNELNAME_OFFSET))(this);
	}

	::System::Void OnChannelActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_ONCHANNELACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_ONCHANNELDEACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_ONCHANNELUPDATE_OFFSET))(this, a1);
	}

	::System::Single Sample(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_94EB88AA9CBAE857_SAMPLE_OFFSET))(this, a1);
	}
};
