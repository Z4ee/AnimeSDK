#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974_3.h"

class Class_2_208CC9941471731A_282;
class Class_2_EE5CA22072C05B40;

#define CLASS_3_60E1D351EE1DEED8_1_METHOD_3_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x10C06380)
#define CLASS_3_60E1D351EE1DEED8_1_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10C06370)
#define CLASS_3_60E1D351EE1DEED8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10C06270)

inline static constexpr unsigned int Class_3_60E1D351EE1DEED8_1_TypeDefinitionIndex = 59391;

class Class_3_60E1D351EE1DEED8_1 : public ::Class_2_855BB6A8CC9E7974_3
{
public:
	::Class_2_EE5CA22072C05B40* Field_3_0; // 0x30
	::Class_2_208CC9941471731A_282* Field_3_1; // 0x38

	::System::Void _ctor(::Class_2_EE5CA22072C05B40* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_EE5CA22072C05B40*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_1_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_1_METHOD_3_735EE20B25F86BF4_OFFSET))(this);
	}
};
