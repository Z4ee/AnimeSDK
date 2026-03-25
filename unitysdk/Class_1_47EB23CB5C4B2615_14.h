#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B0AE402A30E726B1;

#define CLASS_1_47EB23CB5C4B2615_14_CLEAR_OFFSET UNITYSDK_OFFSET(0x1677BBE0)
#define CLASS_1_47EB23CB5C4B2615_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1677BC40)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_14_TypeDefinitionIndex = 33325;

class Class_1_47EB23CB5C4B2615_14 : public ::System::Object
{
public:
	::Class_1_B0AE402A30E726B1* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_14__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_14_CLEAR_OFFSET))(this);
	}
};
