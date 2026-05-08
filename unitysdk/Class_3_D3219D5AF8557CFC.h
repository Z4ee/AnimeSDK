#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6140430CE1FE631F.h"

class Class_0_16E4307DCC419505_164;

#define CLASS_3_D3219D5AF8557CFC_METHOD_3_04C2E60DB974F6DD_OFFSET UNITYSDK_OFFSET(0x118CE410)
#define CLASS_3_D3219D5AF8557CFC_METHOD_3_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x118CE250)
#define CLASS_3_D3219D5AF8557CFC__CTOR_OFFSET UNITYSDK_OFFSET(0x118CE5F0)

inline static constexpr unsigned int Class_3_D3219D5AF8557CFC_TypeDefinitionIndex = 49033;

class Class_3_D3219D5AF8557CFC : public ::Class_2_6140430CE1FE631F
{
public:
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3219D5AF8557CFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3219D5AF8557CFC_METHOD_3_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Method_3_04C2E60DB974F6DD(::Class_0_16E4307DCC419505_164* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164*))((::PBYTE)hIl2Cpp + CLASS_3_D3219D5AF8557CFC_METHOD_3_04C2E60DB974F6DD_OFFSET))(this, a1);
	}
};
