#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_FBAA779B2229F6F3.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

#define CLASS_2_CEE6CD96B563200B_METHOD_2_0DF1A33BA5CABE69_1_OFFSET UNITYSDK_OFFSET(0x13FA2490)
#define CLASS_2_CEE6CD96B563200B_METHOD_2_0DF1A33BA5CABE69_OFFSET UNITYSDK_OFFSET(0x13FA2350)
#define CLASS_2_CEE6CD96B563200B_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13FA22C0)
#define CLASS_2_CEE6CD96B563200B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13FA2400)
#define CLASS_2_CEE6CD96B563200B__CCTOR_OFFSET UNITYSDK_OFFSET(0x13FA2240)
#define CLASS_2_CEE6CD96B563200B__CTOR_OFFSET UNITYSDK_OFFSET(0x13FA22B0)

inline static constexpr unsigned int Class_2_CEE6CD96B563200B_TypeDefinitionIndex = 41784;

class Class_2_CEE6CD96B563200B : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_11 = 0xA4; // 0x0
	::System::Single Field_2_7; // 0x20
	::MoleMole::Config::PropertyModifyFunction Field_2_0; // 0x24
	::Enum_3_FBAA779B2229F6F3 Field_2_4; // 0x28
	::System::Single Field_2_6; // 0x2C
	::System::Boolean Field_2_5; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CEE6CD96B563200B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6CD96B563200B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6CD96B563200B_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_0DF1A33BA5CABE69(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3, ::Enum_3_FBAA779B2229F6F3 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::Enum_3_FBAA779B2229F6F3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CEE6CD96B563200B_METHOD_2_0DF1A33BA5CABE69_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6CD96B563200B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0DF1A33BA5CABE69_1(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3, ::Enum_3_FBAA779B2229F6F3 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::Enum_3_FBAA779B2229F6F3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CEE6CD96B563200B_METHOD_2_0DF1A33BA5CABE69_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
