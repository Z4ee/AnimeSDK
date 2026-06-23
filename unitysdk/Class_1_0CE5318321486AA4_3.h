#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0CE5318321486AA4_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1879E590)

inline static constexpr unsigned int Class_1_0CE5318321486AA4_3_TypeDefinitionIndex = 72333;

class Class_1_0CE5318321486AA4_3 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE5318321486AA4_3__CTOR_OFFSET))(this);
	}
};
