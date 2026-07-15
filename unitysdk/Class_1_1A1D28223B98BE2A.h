#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2EDCA7D63D6FF2D7.h"
#include "unitysdk/System/Object.h"

class Class_2_465A9E6CC2B0EF21;

#define CLASS_1_1A1D28223B98BE2A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17BC5500)
#define CLASS_1_1A1D28223B98BE2A_METHOD_1_8BAE13BA2D9987F5_OFFSET UNITYSDK_OFFSET(0x17BC5150)
#define CLASS_1_1A1D28223B98BE2A__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC5560)

inline static constexpr unsigned int Class_1_1A1D28223B98BE2A_TypeDefinitionIndex = 35591;

class Class_1_1A1D28223B98BE2A : public ::System::Object
{
public:
	::Class_2_465A9E6CC2B0EF21* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A1D28223B98BE2A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8BAE13BA2D9987F5(::Struct_2_2EDCA7D63D6FF2D7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2EDCA7D63D6FF2D7))((::PBYTE)hIl2Cpp + CLASS_1_1A1D28223B98BE2A_METHOD_1_8BAE13BA2D9987F5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A1D28223B98BE2A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
