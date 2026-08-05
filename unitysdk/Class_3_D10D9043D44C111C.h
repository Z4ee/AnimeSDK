#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_032439553AD060FA.h"
#include "unitysdk/Enum_3_06E58405BDB3371A.h"

#define CLASS_3_D10D9043D44C111C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1DB6C720)
#define CLASS_3_D10D9043D44C111C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6C770)

inline static constexpr unsigned int Class_3_D10D9043D44C111C_TypeDefinitionIndex = 92400;

class Class_3_D10D9043D44C111C : public ::Class_2_032439553AD060FA<::Class_3_D10D9043D44C111C*>
{
public:
	::System::Int32 Field_3_0; // 0x28
	::Enum_3_06E58405BDB3371A Field_3_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D10D9043D44C111C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D10D9043D44C111C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
