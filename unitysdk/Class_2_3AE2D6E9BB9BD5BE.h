#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define CLASS_2_3AE2D6E9BB9BD5BE__CTOR_OFFSET UNITYSDK_OFFSET(0x8900490)

inline static constexpr unsigned int Class_2_3AE2D6E9BB9BD5BE_TypeDefinitionIndex = 49585;

class Class_2_3AE2D6E9BB9BD5BE : public ::System::Exception
{
public:
	::System::Boolean Field_2_0; // 0x88

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3AE2D6E9BB9BD5BE__CTOR_OFFSET))(this, a1);
	}
};
