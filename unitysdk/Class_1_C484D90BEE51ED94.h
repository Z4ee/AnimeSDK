#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3E4DF6914A0A9F00.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C484D90BEE51ED94__CTOR_OFFSET UNITYSDK_OFFSET(0x13D98290)

inline static constexpr unsigned int Class_1_C484D90BEE51ED94_TypeDefinitionIndex = 52360;

class Class_1_C484D90BEE51ED94 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_5; // 0x18
	::Enum_3_3E4DF6914A0A9F00 Field_1_1; // 0x20
	::System::Boolean Field_1_0; // 0x24
	::System::Int32 Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C484D90BEE51ED94__CTOR_OFFSET))(this);
	}
};
