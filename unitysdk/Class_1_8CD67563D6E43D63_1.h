#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_623007DD22E200D7.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8CD67563D6E43D63_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13FAA370)

inline static constexpr unsigned int Class_1_8CD67563D6E43D63_1_TypeDefinitionIndex = 47845;

class Class_1_8CD67563D6E43D63_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Enum_3_623007DD22E200D7 Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CD67563D6E43D63_1__CTOR_OFFSET))(this);
	}
};
