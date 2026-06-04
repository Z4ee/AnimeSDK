#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CD3913E549C48DA4;

#define CLASS_1_680E3EEEB9187334_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C1BD70)
#define CLASS_1_680E3EEEB9187334__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1BDF0)

inline static constexpr unsigned int Class_1_680E3EEEB9187334_TypeDefinitionIndex = 39866;

class Class_1_680E3EEEB9187334 : public ::System::Object
{
public:
	::Class_1_CD3913E549C48DA4* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680E3EEEB9187334__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680E3EEEB9187334_CLEAR_OFFSET))(this);
	}
};
