#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8EF8E5153BBFD5B6;

#define CLASS_1_47EB23CB5C4B2615_10_CLEAR_OFFSET UNITYSDK_OFFSET(0x18BB5A20)
#define CLASS_1_47EB23CB5C4B2615_10__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB5A80)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_10_TypeDefinitionIndex = 39861;

class Class_1_47EB23CB5C4B2615_10 : public ::System::Object
{
public:
	::Class_1_8EF8E5153BBFD5B6* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_10__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_10_CLEAR_OFFSET))(this);
	}
};
