#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_596EE8F3EC2A45EA.h"
#include "unitysdk/Enum_3_8822C04675F1EA68.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8CD67563D6E43D63_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1019D770)

inline static constexpr unsigned int Class_1_8CD67563D6E43D63_1_TypeDefinitionIndex = 64603;

class Class_1_8CD67563D6E43D63_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_7; // 0x18
	::Enum_3_596EE8F3EC2A45EA Field_1_4; // 0x20
	::Enum_3_8822C04675F1EA68 Field_1_10; // 0x24
	::System::Boolean Field_1_9; // 0x28
	::System::Boolean Field_1_5; // 0x29
	::System::Boolean Field_1_6; // 0x2A
	::System::Boolean Field_1_11; // 0x2B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CD67563D6E43D63_1__CTOR_OFFSET))(this);
	}
};
