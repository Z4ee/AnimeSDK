#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_037EA204E69EBC75;

#define CLASS_2_412FCA0929A389DC_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x1A8F44E0)
#define CLASS_2_412FCA0929A389DC_METHOD_2_5EB6B43A59A0A89B_OFFSET UNITYSDK_OFFSET(0x1A8F4770)
#define CLASS_2_412FCA0929A389DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F44D0)

inline static constexpr unsigned int Class_2_412FCA0929A389DC_TypeDefinitionIndex = 40309;

class Class_2_412FCA0929A389DC : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_037EA204E69EBC75* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void _ctor(::Class_2_037EA204E69EBC75* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_037EA204E69EBC75*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_5EB6B43A59A0A89B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_METHOD_2_5EB6B43A59A0A89B_OFFSET))(this, a1);
	}
};
