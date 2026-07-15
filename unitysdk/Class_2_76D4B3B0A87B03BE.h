#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B9E6DC87D4879FCD.h"
#include "unitysdk/System/Exception.h"

#define CLASS_2_76D4B3B0A87B03BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E4540)

inline static constexpr unsigned int Class_2_76D4B3B0A87B03BE_TypeDefinitionIndex = 41498;

class Class_2_76D4B3B0A87B03BE : public ::System::Exception
{
public:
	::Struct_2_B9E6DC87D4879FCD Field_2_0; // 0x88

	::System::Void _ctor(::Struct_2_B9E6DC87D4879FCD a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B9E6DC87D4879FCD))((::PBYTE)hIl2Cpp + CLASS_2_76D4B3B0A87B03BE__CTOR_OFFSET))(this, a1);
	}
};
