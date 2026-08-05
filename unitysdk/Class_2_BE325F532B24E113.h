#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9E31DBDCCF0E950.h"
#include "unitysdk/Struct_2_D7E802D2192B688B_2.h"

#define CLASS_2_BE325F532B24E113_METHOD_2_FAC861A05E244D33_OFFSET UNITYSDK_OFFSET(0x15085420)
#define CLASS_2_BE325F532B24E113__CTOR_OFFSET UNITYSDK_OFFSET(0x150854B0)

inline static constexpr unsigned int Class_2_BE325F532B24E113_TypeDefinitionIndex = 45369;

class Class_2_BE325F532B24E113 : public ::Class_1_D9E31DBDCCF0E950
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE325F532B24E113__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_FAC861A05E244D33(::Struct_2_D7E802D2192B688B_2& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D7E802D2192B688B_2&))((::PBYTE)hIl2Cpp + CLASS_2_BE325F532B24E113_METHOD_2_FAC861A05E244D33_OFFSET))(this, a1);
	}
};
