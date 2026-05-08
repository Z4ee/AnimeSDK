#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B24306FC54525936.h"
#include "unitysdk/Struct_2_DB31062B5932CACE_1.h"

#define CLASS_2_CBFA685F76E0F61D_METHOD_2_735D2EE048A5ED4C_OFFSET UNITYSDK_OFFSET(0x13A0AD90)
#define CLASS_2_CBFA685F76E0F61D_METHOD_2_B549B3594F20C3DA_OFFSET UNITYSDK_OFFSET(0x13A0AD30)
#define CLASS_2_CBFA685F76E0F61D__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0ADF0)

inline static constexpr unsigned int Class_2_CBFA685F76E0F61D_TypeDefinitionIndex = 40644;

class Class_2_CBFA685F76E0F61D : public ::Class_1_B24306FC54525936
{
public:
	::Struct_2_DB31062B5932CACE_1 Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBFA685F76E0F61D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B549B3594F20C3DA(::System::Int32 a1, ::Struct_2_DB31062B5932CACE_1 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_DB31062B5932CACE_1))((::PBYTE)hIl2Cpp + CLASS_2_CBFA685F76E0F61D_METHOD_2_B549B3594F20C3DA_OFFSET))(this, a1, a2);
	}

	::Struct_2_DB31062B5932CACE_1 Method_2_735D2EE048A5ED4C(::System::Int32 a1)
	{
		return ((::Struct_2_DB31062B5932CACE_1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CBFA685F76E0F61D_METHOD_2_735D2EE048A5ED4C_OFFSET))(this, a1);
	}
};
