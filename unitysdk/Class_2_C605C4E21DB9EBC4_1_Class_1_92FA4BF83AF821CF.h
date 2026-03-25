#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_C605C4E21DB9EBC4_1_CLASS_1_92FA4BF83AF821CF__CTOR_OFFSET UNITYSDK_OFFSET(0xA6FFA70)

inline static constexpr unsigned int Class_2_C605C4E21DB9EBC4_1_Class_1_92FA4BF83AF821CF_TypeDefinitionIndex = 42088;

class Class_2_C605C4E21DB9EBC4_1_Class_1_92FA4BF83AF821CF : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C605C4E21DB9EBC4_1_CLASS_1_92FA4BF83AF821CF__CTOR_OFFSET))(this);
	}
};
