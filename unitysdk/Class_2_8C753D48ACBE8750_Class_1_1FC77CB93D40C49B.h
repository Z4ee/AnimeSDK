#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_596DA7D950138634.h"
#include "unitysdk/System/Object.h"

class Class_2_8C753D48ACBE8750;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_2_8C753D48ACBE8750_CLASS_1_1FC77CB93D40C49B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11919050)
#define CLASS_2_8C753D48ACBE8750_CLASS_1_1FC77CB93D40C49B__CTOR_OFFSET UNITYSDK_OFFSET(0x11919040)

inline static constexpr unsigned int Class_2_8C753D48ACBE8750_Class_1_1FC77CB93D40C49B_TypeDefinitionIndex = 53602;

class Class_2_8C753D48ACBE8750_Class_1_1FC77CB93D40C49B : public ::System::Object
{
public:
	::Class_2_8C753D48ACBE8750* Field_1_2; // 0x10
	::System::String* Field_1_7; // 0x18
	::MoleMole::Battle::Entity* Field_1_0; // 0x20
	::Struct_2_596DA7D950138634 Field_1_5; // 0x28
	::System::Int32 Field_1_6; // 0x48
	::System::Int32 Field_1_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_1FC77CB93D40C49B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_1FC77CB93D40C49B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
