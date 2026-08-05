#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B24306FC54525936.h"
#include "unitysdk/Struct_2_DB31062B5932CACE.h"

#define CLASS_2_CBFA685F76E0F61D_METHOD_2_735D2EE048A5ED4C_OFFSET UNITYSDK_OFFSET(0x17D1B100)
#define CLASS_2_CBFA685F76E0F61D_METHOD_2_B549B3594F20C3DA_OFFSET UNITYSDK_OFFSET(0x17D1B0A0)
#define CLASS_2_CBFA685F76E0F61D__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1B170)

inline static constexpr unsigned int Class_2_CBFA685F76E0F61D_TypeDefinitionIndex = 75856;

class Class_2_CBFA685F76E0F61D : public ::Class_1_B24306FC54525936
{
public:
	::Struct_2_DB31062B5932CACE Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBFA685F76E0F61D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B549B3594F20C3DA(::System::Int32 a1, ::Struct_2_DB31062B5932CACE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_DB31062B5932CACE))((::PBYTE)hIl2Cpp + CLASS_2_CBFA685F76E0F61D_METHOD_2_B549B3594F20C3DA_OFFSET))(this, a1, a2);
	}

	::Struct_2_DB31062B5932CACE Method_2_735D2EE048A5ED4C(::System::Int32 a1)
	{
		return ((::Struct_2_DB31062B5932CACE(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CBFA685F76E0F61D_METHOD_2_735D2EE048A5ED4C_OFFSET))(this, a1);
	}
};
