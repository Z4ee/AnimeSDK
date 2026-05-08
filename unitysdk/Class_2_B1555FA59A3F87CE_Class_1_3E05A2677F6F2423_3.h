#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_B1555FA59A3F87CE_CLASS_1_3E05A2677F6F2423_3__CTOR_OFFSET UNITYSDK_OFFSET(0xEA7F070)

inline static constexpr unsigned int Class_2_B1555FA59A3F87CE_Class_1_3E05A2677F6F2423_3_TypeDefinitionIndex = 63511;

class Class_2_B1555FA59A3F87CE_Class_1_3E05A2677F6F2423_3 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1555FA59A3F87CE_CLASS_1_3E05A2677F6F2423_3__CTOR_OFFSET))(this);
	}
};
