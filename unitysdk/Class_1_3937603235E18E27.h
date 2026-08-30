#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_780EF8857848D3F9.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3937603235E18E27_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C57EC90)
#define CLASS_1_3937603235E18E27__CTOR_OFFSET UNITYSDK_OFFSET(0x1C57ECF0)

inline static constexpr unsigned int Class_1_3937603235E18E27_TypeDefinitionIndex = 40478;

class Class_1_3937603235E18E27 : public ::System::Object
{
public:
	::Struct_2_780EF8857848D3F9 CNLHCKELLBE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3937603235E18E27__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3937603235E18E27_CLEAR_OFFSET))(this);
	}
};
