#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_596DA7D950138634.h"
#include "unitysdk/System/Object.h"

class Class_1_6B8B8EFC8C59DAD1;
class Class_2_8C753D48ACBE8750;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_2_8C753D48ACBE8750_CLASS_1_DE696EF6C26BBF7A_METHOD_1_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0xE53D860)
#define CLASS_2_8C753D48ACBE8750_CLASS_1_DE696EF6C26BBF7A__CTOR_OFFSET UNITYSDK_OFFSET(0xE53D850)

inline static constexpr unsigned int Class_2_8C753D48ACBE8750_Class_1_DE696EF6C26BBF7A_TypeDefinitionIndex = 53587;

class Class_2_8C753D48ACBE8750_Class_1_DE696EF6C26BBF7A : public ::System::Object
{
public:
	::Struct_2_596DA7D950138634 Field_1_5; // 0x10
	::Class_2_8C753D48ACBE8750* Field_1_3; // 0x30
	::Class_1_6B8B8EFC8C59DAD1* Field_1_2; // 0x38
	::MoleMole::Battle::Entity* Field_1_4; // 0x40
	::System::String* Field_1_7; // 0x48
	::MoleMole::Battle::Entity* Field_1_0; // 0x50
	::System::Int32 Field_1_6; // 0x58
	::System::Int32 Field_1_1; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_DE696EF6C26BBF7A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_DE696EF6C26BBF7A_METHOD_1_2A887DFC7A5BB2CB_OFFSET))(this);
	}
};
