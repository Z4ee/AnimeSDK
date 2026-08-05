#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0CE5318321486AA4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1B360)

inline static constexpr unsigned int Class_1_0CE5318321486AA4_2_TypeDefinitionIndex = 60588;

class Class_1_0CE5318321486AA4_2 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE5318321486AA4_2__CTOR_OFFSET))(this);
	}
};
