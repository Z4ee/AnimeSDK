#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_B44AD120F2ED8328_CLASS_1_3E05A2677F6F2423_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F1E80)

inline static constexpr unsigned int Class_1_B44AD120F2ED8328_Class_1_3E05A2677F6F2423_12_TypeDefinitionIndex = 86622;

class Class_1_B44AD120F2ED8328_Class_1_3E05A2677F6F2423_12 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B44AD120F2ED8328_CLASS_1_3E05A2677F6F2423_12__CTOR_OFFSET))(this);
	}
};
