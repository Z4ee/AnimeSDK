#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1E2BCC44350175D1;
class Class_1_41D140539C030FAC_2;

#define CLASS_1_7043F373F25220E6_METHOD_1_A995DA74F5B5D8B4_OFFSET UNITYSDK_OFFSET(0xBF03E80)
#define CLASS_1_7043F373F25220E6__CTOR_OFFSET UNITYSDK_OFFSET(0xBF03E30)

inline static constexpr unsigned int Class_1_7043F373F25220E6_TypeDefinitionIndex = 62774;

class Class_1_7043F373F25220E6 : public ::System::Object
{
public:
	::Class_1_41D140539C030FAC_2* BLLLBFKIGIL; // 0x10

	::System::Void _ctor(::Class_1_41D140539C030FAC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41D140539C030FAC_2*))((::PBYTE)hIl2Cpp + CLASS_1_7043F373F25220E6__CTOR_OFFSET))(this, a1);
	}

	::Class_1_1E2BCC44350175D1* Method_1_A995DA74F5B5D8B4(::Struct_2_F1C4ECC5EFDCA1EF_1& a1)
	{
		return ((::Class_1_1E2BCC44350175D1*(*)(::PVOID, ::Struct_2_F1C4ECC5EFDCA1EF_1&))((::PBYTE)hIl2Cpp + CLASS_1_7043F373F25220E6_METHOD_1_A995DA74F5B5D8B4_OFFSET))(this, a1);
	}
};
