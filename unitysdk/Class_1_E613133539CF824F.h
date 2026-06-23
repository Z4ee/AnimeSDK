#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6AF1E5B02897ED63;
namespace System { class String; }

#define CLASS_1_E613133539CF824F__CTOR_OFFSET UNITYSDK_OFFSET(0x127F34C0)

inline static constexpr unsigned int Class_1_E613133539CF824F_TypeDefinitionIndex = 44108;

class Class_1_E613133539CF824F : public ::System::Object
{
public:
	::Class_3_6AF1E5B02897ED63* Field_1_3; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E613133539CF824F__CTOR_OFFSET))(this);
	}
};
