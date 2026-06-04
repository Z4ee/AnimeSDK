#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_037EA204E69EBC75;

#define CLASS_2_412FCA0929A389DC_1_METHOD_2_0EBCBF3C29D8B33D_OFFSET UNITYSDK_OFFSET(0x18C1D1A0)
#define CLASS_2_412FCA0929A389DC_1_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x18C1D480)
#define CLASS_2_412FCA0929A389DC_1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x18C1CEB0)
#define CLASS_2_412FCA0929A389DC_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x18C1D420)
#define CLASS_2_412FCA0929A389DC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1CEA0)

inline static constexpr unsigned int Class_2_412FCA0929A389DC_1_TypeDefinitionIndex = 39501;

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

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_1_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
