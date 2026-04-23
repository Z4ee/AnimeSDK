#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_780EF8857848D3F9.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3937603235E18E27_CLEAR_OFFSET UNITYSDK_OFFSET(0x1807BFA0)
#define CLASS_1_3937603235E18E27__CTOR_OFFSET UNITYSDK_OFFSET(0x1807C000)

inline static constexpr unsigned int Class_1_3937603235E18E27_TypeDefinitionIndex = 38055;

class Class_1_3937603235E18E27 : public ::System::Object
{
public:
	::Struct_2_780EF8857848D3F9 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3937603235E18E27__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3937603235E18E27_CLEAR_OFFSET))(this);
	}
};
