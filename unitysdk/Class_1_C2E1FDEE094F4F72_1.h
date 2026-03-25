#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0773443F1664F576;

#define CLASS_1_C2E1FDEE094F4F72_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x167EC0F0)
#define CLASS_1_C2E1FDEE094F4F72_1__CTOR_OFFSET UNITYSDK_OFFSET(0x167EC150)

inline static constexpr unsigned int Class_1_C2E1FDEE094F4F72_1_TypeDefinitionIndex = 33308;

class Class_1_C2E1FDEE094F4F72_1 : public ::System::Object
{
public:
	::Class_1_0773443F1664F576* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2E1FDEE094F4F72_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2E1FDEE094F4F72_1_CLEAR_OFFSET))(this);
	}
};
