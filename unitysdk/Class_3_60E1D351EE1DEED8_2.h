#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974.h"

class Class_2_208CC9941471731A_956;
class Class_2_A78FC80A78B3367C_2;

#define CLASS_3_60E1D351EE1DEED8_2_METHOD_3_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x123AB8F0)
#define CLASS_3_60E1D351EE1DEED8_2_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x123AB8E0)
#define CLASS_3_60E1D351EE1DEED8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x123AB7E0)

inline static constexpr unsigned int Class_3_60E1D351EE1DEED8_2_TypeDefinitionIndex = 71648;

class Class_3_60E1D351EE1DEED8_2 : public ::Class_2_855BB6A8CC9E7974
{
public:
	::Class_2_208CC9941471731A_956* Field_3_7; // 0x30
	::Class_2_A78FC80A78B3367C_2* Field_3_0; // 0x38

	::System::Void _ctor(::Class_2_A78FC80A78B3367C_2* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A78FC80A78B3367C_2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_2_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_2_METHOD_3_735EE20B25F86BF4_OFFSET))(this);
	}
};
