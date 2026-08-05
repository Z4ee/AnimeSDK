#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6AF1E5B02897ED63;
namespace System { class String; }

#define CLASS_1_E613133539CF824F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x159480A0)

inline static constexpr unsigned int Class_1_E613133539CF824F_2_TypeDefinitionIndex = 89524;

class Class_1_E613133539CF824F_2 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::Class_3_6AF1E5B02897ED63* Field_1_6; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x24
	::System::Boolean Field_1_7; // 0x25
	::System::Boolean Field_1_0; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E613133539CF824F_2__CTOR_OFFSET))(this);
	}
};
