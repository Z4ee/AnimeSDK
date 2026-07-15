#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51F.h"
#include "unitysdk/Struct_2_D828E592C9D2FCC9.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9931D0806556F3CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C581400)

inline static constexpr unsigned int Class_1_9931D0806556F3CF_TypeDefinitionIndex = 40090;

class Class_1_9931D0806556F3CF : public ::System::Object
{
public:
	::Struct_2_D828E592C9D2FCC9 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x20
	::Struct_2_52A902145F5BE51F Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9931D0806556F3CF__CTOR_OFFSET))(this);
	}
};
