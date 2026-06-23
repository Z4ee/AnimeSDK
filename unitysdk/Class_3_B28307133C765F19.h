#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6140430CE1FE631F.h"

class Class_0_16E4307DCC419505_178;

#define CLASS_3_B28307133C765F19_METHOD_3_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x130F9160)
#define CLASS_3_B28307133C765F19_METHOD_3_CA6F6BE86A71AD17_OFFSET UNITYSDK_OFFSET(0x130F9320)
#define CLASS_3_B28307133C765F19__CTOR_OFFSET UNITYSDK_OFFSET(0x130F94E0)

inline static constexpr unsigned int Class_3_B28307133C765F19_TypeDefinitionIndex = 66424;

class Class_3_B28307133C765F19 : public ::Class_2_6140430CE1FE631F
{
public:
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B28307133C765F19__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B28307133C765F19_METHOD_3_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Method_3_CA6F6BE86A71AD17(::Class_0_16E4307DCC419505_178* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_178*))((::PBYTE)hIl2Cpp + CLASS_3_B28307133C765F19_METHOD_3_CA6F6BE86A71AD17_OFFSET))(this, a1);
	}
};
