#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6B2D613E48CA4DA1;

#define CLASS_1_47EB23CB5C4B2615_12_CLEAR_OFFSET UNITYSDK_OFFSET(0x168F3590)
#define CLASS_1_47EB23CB5C4B2615_12__CTOR_OFFSET UNITYSDK_OFFSET(0x168F3610)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_12_TypeDefinitionIndex = 33359;

class Class_1_47EB23CB5C4B2615_12 : public ::System::Object
{
public:
	::Class_1_6B2D613E48CA4DA1* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_12__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_12_CLEAR_OFFSET))(this);
	}
};
