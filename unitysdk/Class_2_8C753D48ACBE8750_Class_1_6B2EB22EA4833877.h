#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/System/Object.h"

class Class_1_97AA85461D84B92D;
class Class_2_8C753D48ACBE8750;

#define CLASS_2_8C753D48ACBE8750_CLASS_1_6B2EB22EA4833877_METHOD_1_9094A96EEEB7AD9B_OFFSET UNITYSDK_OFFSET(0xF751E20)
#define CLASS_2_8C753D48ACBE8750_CLASS_1_6B2EB22EA4833877__CTOR_OFFSET UNITYSDK_OFFSET(0xF751E10)

inline static constexpr unsigned int Class_2_8C753D48ACBE8750_Class_1_6B2EB22EA4833877_TypeDefinitionIndex = 53595;

class Class_2_8C753D48ACBE8750_Class_1_6B2EB22EA4833877 : public ::System::Object
{
public:
	::Class_1_97AA85461D84B92D* Field_1_6; // 0x10
	::Class_2_8C753D48ACBE8750* Field_1_7; // 0x18
	::Enum_3_F00DC819D834EFD2 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_6B2EB22EA4833877__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9094A96EEEB7AD9B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_6B2EB22EA4833877_METHOD_1_9094A96EEEB7AD9B_OFFSET))(this, a1);
	}
};
