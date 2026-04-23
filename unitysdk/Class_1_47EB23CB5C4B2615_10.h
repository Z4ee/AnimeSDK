#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB62CC0FD1E45ADE_1;

#define CLASS_1_47EB23CB5C4B2615_10_CLEAR_OFFSET UNITYSDK_OFFSET(0x17DE6B20)
#define CLASS_1_47EB23CB5C4B2615_10__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE6BA0)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_10_TypeDefinitionIndex = 39334;

class Class_1_47EB23CB5C4B2615_10 : public ::System::Object
{
public:
	::Class_1_BB62CC0FD1E45ADE_1* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_10__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_10_CLEAR_OFFSET))(this);
	}
};
