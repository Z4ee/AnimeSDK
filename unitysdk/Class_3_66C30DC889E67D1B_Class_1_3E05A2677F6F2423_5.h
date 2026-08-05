#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_66C30DC889E67D1B_CLASS_1_3E05A2677F6F2423_5__CTOR_OFFSET UNITYSDK_OFFSET(0xF0C96C0)

inline static constexpr unsigned int Class_3_66C30DC889E67D1B_Class_1_3E05A2677F6F2423_5_TypeDefinitionIndex = 69311;

class Class_3_66C30DC889E67D1B_Class_1_3E05A2677F6F2423_5 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C30DC889E67D1B_CLASS_1_3E05A2677F6F2423_5__CTOR_OFFSET))(this);
	}
};
