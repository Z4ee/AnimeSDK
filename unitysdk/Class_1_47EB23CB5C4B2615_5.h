#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_562CFB3355018A26;

#define CLASS_1_47EB23CB5C4B2615_5_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B108E80)
#define CLASS_1_47EB23CB5C4B2615_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B108F00)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_5_TypeDefinitionIndex = 40897;

class Class_1_47EB23CB5C4B2615_5 : public ::System::Object
{
public:
	::Class_1_562CFB3355018A26* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_5_CLEAR_OFFSET))(this);
	}
};
