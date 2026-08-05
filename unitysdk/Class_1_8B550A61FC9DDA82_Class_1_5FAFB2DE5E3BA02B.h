#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F152DBF108B0858.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_2_D02DABCF41CDA271;
class Class_2_E23E4CB2769CC93F;

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5FAFB2DE5E3BA02B_METHOD_1_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x18112580)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5FAFB2DE5E3BA02B__CTOR_OFFSET UNITYSDK_OFFSET(0x18112570)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_5FAFB2DE5E3BA02B_TypeDefinitionIndex = 50141;

class Class_1_8B550A61FC9DDA82_Class_1_5FAFB2DE5E3BA02B : public ::System::Object
{
public:
	::Class_2_D02DABCF41CDA271* Field_1_6; // 0x10
	::Class_2_E23E4CB2769CC93F* Field_1_7; // 0x18
	::Enum_3_5F152DBF108B0858 Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5FAFB2DE5E3BA02B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F68D6D1D153FE6C(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5FAFB2DE5E3BA02B_METHOD_1_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}
};
