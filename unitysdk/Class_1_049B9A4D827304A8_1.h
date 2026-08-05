#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace System { class String; }

#define CLASS_1_049B9A4D827304A8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x128550C0)

inline static constexpr unsigned int Class_1_049B9A4D827304A8_1_TypeDefinitionIndex = 81428;

class Class_1_049B9A4D827304A8_1 : public ::System::Object
{
public:
	::Class_2_1824EF69C8E376A3* Field_1_6; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049B9A4D827304A8_1__CTOR_OFFSET))(this);
	}
};
