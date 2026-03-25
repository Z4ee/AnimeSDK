#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_3A675C3B9256B207__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1B4A0)

inline static constexpr unsigned int Class_2_3A675C3B9256B207_TypeDefinitionIndex = 22836;

class Class_2_3A675C3B9256B207 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_2; // 0x18
	::System::Boolean Field_2_1; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3A675C3B9256B207__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
