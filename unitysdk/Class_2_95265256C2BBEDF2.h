#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_95265256C2BBEDF2__CTOR_OFFSET UNITYSDK_OFFSET(0x19076930)

inline static constexpr unsigned int Class_2_95265256C2BBEDF2_TypeDefinitionIndex = 23807;

class Class_2_95265256C2BBEDF2 : public ::System::Attribute
{
public:
	::System::String* Field_2_9; // 0x10
	::System::String* Field_2_7; // 0x18
	::System::String* Field_2_5; // 0x20
	::System::String* Field_2_4; // 0x28
	::System::String* Field_2_8; // 0x30
	::System::String* Field_2_6; // 0x38
	::System::Object* Field_2_0; // 0x40
	::System::Boolean Field_2_2; // 0x48
	::System::Boolean Field_2_3; // 0x49
	::System::Boolean Field_2_1; // 0x4A

	::System::Void _ctor(::System::Object* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_95265256C2BBEDF2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
