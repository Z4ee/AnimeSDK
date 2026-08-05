#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9E31DBDCCF0E950.h"
#include "unitysdk/Struct_2_D7E802D2192B688B_2.h"

#define CLASS_2_AEFF401F08AF232B_METHOD_2_05FE9E8413F417D6_OFFSET UNITYSDK_OFFSET(0x11E9EB20)
#define CLASS_2_AEFF401F08AF232B__CTOR_OFFSET UNITYSDK_OFFSET(0x11E9ED00)

inline static constexpr unsigned int Class_2_AEFF401F08AF232B_TypeDefinitionIndex = 65391;

class Class_2_AEFF401F08AF232B : public ::Class_1_D9E31DBDCCF0E950
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEFF401F08AF232B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_05FE9E8413F417D6(::Struct_2_D7E802D2192B688B_2& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D7E802D2192B688B_2&))((::PBYTE)hIl2Cpp + CLASS_2_AEFF401F08AF232B_METHOD_2_05FE9E8413F417D6_OFFSET))(this, a1);
	}
};
