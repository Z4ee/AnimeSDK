#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9E31DBDCCF0E950_1.h"
#include "unitysdk/Struct_2_D7E802D2192B688B_1.h"

#define CLASS_2_BE325F532B24E113_METHOD_2_FAC861A05E244D33_OFFSET UNITYSDK_OFFSET(0x181B5EF0)
#define CLASS_2_BE325F532B24E113__CTOR_OFFSET UNITYSDK_OFFSET(0x181B5F80)

inline static constexpr unsigned int Class_2_BE325F532B24E113_TypeDefinitionIndex = 60141;

class Class_2_BE325F532B24E113 : public ::Class_1_D9E31DBDCCF0E950_1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE325F532B24E113__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_FAC861A05E244D33(::Struct_2_D7E802D2192B688B_1& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D7E802D2192B688B_1&))((::PBYTE)hIl2Cpp + CLASS_2_BE325F532B24E113_METHOD_2_FAC861A05E244D33_OFFSET))(this, a1);
	}
};
