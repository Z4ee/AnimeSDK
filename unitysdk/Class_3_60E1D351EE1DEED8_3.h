#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974_3.h"

class Class_2_208CC9941471731A_282;
class Class_2_A78FC80A78B3367C_5;

#define CLASS_3_60E1D351EE1DEED8_3_METHOD_3_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xE1770B0)
#define CLASS_3_60E1D351EE1DEED8_3_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xE1770A0)
#define CLASS_3_60E1D351EE1DEED8_3__CTOR_OFFSET UNITYSDK_OFFSET(0xE176FA0)

inline static constexpr unsigned int Class_3_60E1D351EE1DEED8_3_TypeDefinitionIndex = 81841;

class Class_3_60E1D351EE1DEED8_3 : public ::Class_2_855BB6A8CC9E7974_3
{
public:
	::Class_2_A78FC80A78B3367C_5* Field_3_0; // 0x30
	::Class_2_208CC9941471731A_282* Field_3_1; // 0x38

	::System::Void _ctor(::Class_2_A78FC80A78B3367C_5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A78FC80A78B3367C_5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_3_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_3_METHOD_3_735EE20B25F86BF4_OFFSET))(this);
	}
};
