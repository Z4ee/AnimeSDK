#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_C605C4E21DB9EBC4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13C1AAE0)

inline static constexpr unsigned int Class_2_C605C4E21DB9EBC4_2_TypeDefinitionIndex = 48681;

class Class_2_C605C4E21DB9EBC4_2 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C605C4E21DB9EBC4_2__CTOR_OFFSET))(this);
	}
};
