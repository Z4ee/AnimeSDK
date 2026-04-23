#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_62368A41E97C646F__CTOR_OFFSET UNITYSDK_OFFSET(0x9A441B0)

inline static constexpr unsigned int Class_2_62368A41E97C646F_TypeDefinitionIndex = 66424;

class Class_2_62368A41E97C646F : public ::System::Attribute
{
public:
	::System::String* Field_2_1; // 0x10
	::System::String* Field_2_0; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_62368A41E97C646F__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
