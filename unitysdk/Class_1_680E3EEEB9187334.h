#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0773443F1664F576;

#define CLASS_1_680E3EEEB9187334_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BAB6E80)
#define CLASS_1_680E3EEEB9187334__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB6F00)

inline static constexpr unsigned int Class_1_680E3EEEB9187334_TypeDefinitionIndex = 41630;

class Class_1_680E3EEEB9187334 : public ::System::Object
{
public:
	::Class_1_0773443F1664F576* CNLHCKELLBE; // 0x10
	::System::Single DONFONGOMIF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680E3EEEB9187334__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680E3EEEB9187334_CLEAR_OFFSET))(this);
	}
};
