#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5C2C676B93EF9ABA.h"
#include "unitysdk/System/Object.h"

class Class_3_01B4CC30216C9ABE_5;

#define CLASS_1_18EDCA630000643A_METHOD_1_AD3781BE4BEB3323_OFFSET UNITYSDK_OFFSET(0x1E2D23A0)
#define CLASS_1_18EDCA630000643A__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D2390)

inline static constexpr unsigned int Class_1_18EDCA630000643A_TypeDefinitionIndex = 92940;

class Class_1_18EDCA630000643A : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x14
	::Enum_3_5C2C676B93EF9ABA Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18EDCA630000643A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_AD3781BE4BEB3323(::Class_3_01B4CC30216C9ABE_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_01B4CC30216C9ABE_5*))((::PBYTE)hIl2Cpp + CLASS_1_18EDCA630000643A_METHOD_1_AD3781BE4BEB3323_OFFSET))(this, a1);
	}
};
