#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7291C38274750BA2.h"

namespace System { class String; }

#define CLASS_2_7ACB45B3FB06EB46__CTOR_OFFSET UNITYSDK_OFFSET(0x1671CFB0)

inline static constexpr unsigned int Class_2_7ACB45B3FB06EB46_TypeDefinitionIndex = 42014;

class Class_2_7ACB45B3FB06EB46 : public ::Class_1_7291C38274750BA2
{
public:
	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7ACB45B3FB06EB46__CTOR_OFFSET))(this, a1);
	}
};
