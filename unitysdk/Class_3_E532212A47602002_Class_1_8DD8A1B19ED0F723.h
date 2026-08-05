#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E532212A47602002_Enum_3_C2C77892C147D8C5.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_E532212A47602002_CLASS_1_8DD8A1B19ED0F723__CTOR_OFFSET UNITYSDK_OFFSET(0x1235B080)

inline static constexpr unsigned int Class_3_E532212A47602002_Class_1_8DD8A1B19ED0F723_TypeDefinitionIndex = 70518;

class Class_3_E532212A47602002_Class_1_8DD8A1B19ED0F723 : public ::System::Object
{
public:
	::MoleMole::GameplayTag Field_1_2; // 0x10
	::System::Boolean Field_1_0; // 0x20
	::Class_3_E532212A47602002_Enum_3_C2C77892C147D8C5 Field_1_3; // 0x24
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor(::Class_3_E532212A47602002_Enum_3_C2C77892C147D8C5 a1, ::MoleMole::GameplayTag a2, ::System::UInt32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E532212A47602002_Enum_3_C2C77892C147D8C5, ::MoleMole::GameplayTag, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_CLASS_1_8DD8A1B19ED0F723__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
