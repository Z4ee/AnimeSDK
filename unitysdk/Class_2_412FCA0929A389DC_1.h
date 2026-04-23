#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_E1DC3D0DDD796244;

#define CLASS_2_412FCA0929A389DC_1_METHOD_2_395DDF764F1A4A6F_OFFSET UNITYSDK_OFFSET(0x17E9D6E0)
#define CLASS_2_412FCA0929A389DC_1_METHOD_2_397CE710F45A0727_OFFSET UNITYSDK_OFFSET(0x17E9D360)
#define CLASS_2_412FCA0929A389DC_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x17E9DA70)
#define CLASS_2_412FCA0929A389DC_1_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x17E9DAE0)
#define CLASS_2_412FCA0929A389DC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9D350)

inline static constexpr unsigned int Class_2_412FCA0929A389DC_1_TypeDefinitionIndex = 38733;

class Class_2_412FCA0929A389DC_1 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_E1DC3D0DDD796244* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void _ctor(::Class_2_E1DC3D0DDD796244* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E1DC3D0DDD796244*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_397CE710F45A0727()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_1_METHOD_2_397CE710F45A0727_OFFSET))(this);
	}

	::System::Void Method_2_395DDF764F1A4A6F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_1_METHOD_2_395DDF764F1A4A6F_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_1_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
