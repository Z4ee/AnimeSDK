#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_14;

#define CLASS_1_47EB23CB5C4B2615_9_CLEAR_OFFSET UNITYSDK_OFFSET(0x17DE15F0)
#define CLASS_1_47EB23CB5C4B2615_9__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE1670)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_9_TypeDefinitionIndex = 39166;

class Class_1_47EB23CB5C4B2615_9 : public ::System::Object
{
public:
	::Class_1_7807B2B04302CD7B_14* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_9__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_9_CLEAR_OFFSET))(this);
	}
};
