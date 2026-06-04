#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36F1A9113FF821C5;

#define CLASS_1_47EB23CB5C4B2615_9_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D73D60)
#define CLASS_1_47EB23CB5C4B2615_9__CTOR_OFFSET UNITYSDK_OFFSET(0x18D73DC0)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_9_TypeDefinitionIndex = 39864;

class Class_1_47EB23CB5C4B2615_9 : public ::System::Object
{
public:
	::Class_1_36F1A9113FF821C5* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_9__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_9_CLEAR_OFFSET))(this);
	}
};
