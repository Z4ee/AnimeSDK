#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0773443F1664F576;

#define CLASS_1_680E3EEEB9187334_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E08540)
#define CLASS_1_680E3EEEB9187334_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E085C0)

inline static constexpr unsigned int Class_1_680E3EEEB9187334_1_TypeDefinitionIndex = 39097;

class Class_1_680E3EEEB9187334_1 : public ::System::Object
{
public:
	::Class_1_0773443F1664F576* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680E3EEEB9187334_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680E3EEEB9187334_1_CLEAR_OFFSET))(this);
	}
};
