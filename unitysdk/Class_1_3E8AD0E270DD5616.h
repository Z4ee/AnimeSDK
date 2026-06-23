#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AE1972D98541A9AF.h"
#include "unitysdk/System/Object.h"

class Class_3_00D9F8D189C6D68A;

#define CLASS_1_3E8AD0E270DD5616__CTOR_OFFSET UNITYSDK_OFFSET(0x12A6F810)

inline static constexpr unsigned int Class_1_3E8AD0E270DD5616_TypeDefinitionIndex = 78373;

class Class_1_3E8AD0E270DD5616 : public ::System::Object
{
public:
	::Class_3_00D9F8D189C6D68A* Field_1_1; // 0x10
	::Class_3_00D9F8D189C6D68A* Field_1_0; // 0x18
	::Enum_3_AE1972D98541A9AF Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8AD0E270DD5616__CTOR_OFFSET))(this);
	}
};
