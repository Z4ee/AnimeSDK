#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8C5B5B31A78ED626.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4502605F4267F6F1__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA1310)

inline static constexpr unsigned int Class_1_4502605F4267F6F1_TypeDefinitionIndex = 58456;

class Class_1_4502605F4267F6F1 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::Enum_3_8C5B5B31A78ED626 Field_1_7; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4502605F4267F6F1__CTOR_OFFSET))(this);
	}
};
