#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/System/Object.h"

class Class_2_8C753D48ACBE8750;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_2_8C753D48ACBE8750_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xE53CE80)
#define CLASS_2_8C753D48ACBE8750_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0xE53CFF0)
#define CLASS_2_8C753D48ACBE8750_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xE53D740)
#define CLASS_2_8C753D48ACBE8750_CLASS_1_5A8638FDF7A9B8B3__CTOR_OFFSET UNITYSDK_OFFSET(0xE53CE70)

inline static constexpr unsigned int Class_2_8C753D48ACBE8750_Class_1_5A8638FDF7A9B8B3_TypeDefinitionIndex = 53586;

class Class_2_8C753D48ACBE8750_Class_1_5A8638FDF7A9B8B3 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18
	::Class_2_8C753D48ACBE8750* Field_1_1; // 0x20
	::Enum_3_F00DC819D834EFD2 Field_1_6; // 0x28
	::System::UInt32 Field_1_5; // 0x2C
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_5A8638FDF7A9B8B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_95CBA07394A84492(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_95CBA07394A84492_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}
};
