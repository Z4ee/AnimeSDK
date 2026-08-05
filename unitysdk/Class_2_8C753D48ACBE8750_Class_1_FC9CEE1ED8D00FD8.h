#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_596DA7D950138634.h"
#include "unitysdk/System/Object.h"

class Class_2_8C753D48ACBE8750;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_2_8C753D48ACBE8750_CLASS_1_FC9CEE1ED8D00FD8_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xE53CE00)
#define CLASS_2_8C753D48ACBE8750_CLASS_1_FC9CEE1ED8D00FD8__CTOR_OFFSET UNITYSDK_OFFSET(0xE53CDF0)

inline static constexpr unsigned int Class_2_8C753D48ACBE8750_Class_1_FC9CEE1ED8D00FD8_TypeDefinitionIndex = 53589;

class Class_2_8C753D48ACBE8750_Class_1_FC9CEE1ED8D00FD8 : public ::System::Object
{
public:
	::Struct_2_596DA7D950138634 Field_1_4; // 0x10
	::MoleMole::Battle::Entity* Field_1_6; // 0x30
	::Class_2_8C753D48ACBE8750* Field_1_1; // 0x38
	::System::String* Field_1_7; // 0x40
	::System::String* Field_1_5; // 0x48
	::System::Int32 Field_1_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_FC9CEE1ED8D00FD8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_FC9CEE1ED8D00FD8_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
