#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_9217D34DE8C4E1D6_CLASS_1_3E05A2677F6F2423_12__CTOR_OFFSET UNITYSDK_OFFSET(0x14547F40)

inline static constexpr unsigned int Class_3_9217D34DE8C4E1D6_Class_1_3E05A2677F6F2423_12_TypeDefinitionIndex = 87430;

class Class_3_9217D34DE8C4E1D6_Class_1_3E05A2677F6F2423_12 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9217D34DE8C4E1D6_CLASS_1_3E05A2677F6F2423_12__CTOR_OFFSET))(this);
	}
};
