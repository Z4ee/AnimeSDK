#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_5E5DC46225554E8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1948E930)

inline static constexpr unsigned int Class_2_5E5DC46225554E8D_TypeDefinitionIndex = 61509;

class Class_2_5E5DC46225554E8D : public ::System::Attribute
{
public:
	::System::String* Field_2_3; // 0x10
	::System::String* Field_2_14; // 0x18
	::System::Boolean Field_2_7; // 0x20
	::System::Boolean Field_2_0; // 0x21
	::System::Boolean Field_2_12; // 0x22
	::System::Boolean Field_2_6; // 0x23
	::System::Boolean Field_2_5; // 0x24
	::System::Boolean Field_2_4; // 0x25
	::System::Boolean Field_2_10; // 0x26
	::System::Int32 Field_2_15; // 0x28
	::System::Boolean Field_2_13; // 0x2C
	::System::Boolean Field_2_9; // 0x2D
	::System::Boolean Field_2_1; // 0x2E
	::System::Boolean Field_2_11; // 0x2F
	::System::Int32 Field_2_2; // 0x30
	::System::Int32 Field_2_8; // 0x34

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5E5DC46225554E8D__CTOR_OFFSET))(this, a1);
	}
};
