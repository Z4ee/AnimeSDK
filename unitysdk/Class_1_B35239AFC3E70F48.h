#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B35239AFC3E70F48__CTOR_OFFSET UNITYSDK_OFFSET(0x1563F280)

inline static constexpr unsigned int Class_1_B35239AFC3E70F48_TypeDefinitionIndex = 83540;

class Class_1_B35239AFC3E70F48 : public ::System::Object
{
public:
	::System::Double Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B35239AFC3E70F48__CTOR_OFFSET))(this);
	}
};
