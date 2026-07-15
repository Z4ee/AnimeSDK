#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

#define CLASS_2_3A64E3CC87877DD7_METHOD_2_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x19CAF880)
#define CLASS_2_3A64E3CC87877DD7__CTOR_OFFSET UNITYSDK_OFFSET(0x19CAF870)

inline static constexpr unsigned int Class_2_3A64E3CC87877DD7_TypeDefinitionIndex = 40044;

class Class_2_3A64E3CC87877DD7 : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::Single Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x1C

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3A64E3CC87877DD7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3A64E3CC87877DD7_METHOD_2_A5ADA4706DA592FA_OFFSET))(this, a1);
	}
};
