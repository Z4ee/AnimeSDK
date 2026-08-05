#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_500F174EF473DBE7__CTOR_OFFSET UNITYSDK_OFFSET(0x14B7B140)

inline static constexpr unsigned int Class_1_500F174EF473DBE7_TypeDefinitionIndex = 49614;

class Class_1_500F174EF473DBE7 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_7; // 0x18
	::System::UInt32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_500F174EF473DBE7__CTOR_OFFSET))(this);
	}
};
