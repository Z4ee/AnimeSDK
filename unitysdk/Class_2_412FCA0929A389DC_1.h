#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_037EA204E69EBC75;

#define CLASS_2_412FCA0929A389DC_1_METHOD_2_0EBCBF3C29D8B33D_OFFSET UNITYSDK_OFFSET(0x180E5A80)
#define CLASS_2_412FCA0929A389DC_1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x180E5790)
#define CLASS_2_412FCA0929A389DC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180E5780)

inline static constexpr unsigned int Class_2_412FCA0929A389DC_1_TypeDefinitionIndex = 40310;

class Class_2_412FCA0929A389DC_1 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_037EA204E69EBC75* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void _ctor(::Class_2_037EA204E69EBC75* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_037EA204E69EBC75*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_0EBCBF3C29D8B33D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_1_METHOD_2_0EBCBF3C29D8B33D_OFFSET))(this, a1);
	}
};
