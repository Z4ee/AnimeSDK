#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_C3FD3943CDE7D4EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1800F850)

inline static constexpr unsigned int Class_1_C3FD3943CDE7D4EA_TypeDefinitionIndex = 54637;

class Class_1_C3FD3943CDE7D4EA : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* DLIDCOJKLNI; // 0x10
	::RPG::GameCore::DamageByAttackProperty* NEACMLNOEIL; // 0x18
	::Class_1_843DD6330B22E422* GNHAPABLMDF; // 0x20
	::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x28
	::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x30
	::System::Boolean PJKMBCJJGAB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3FD3943CDE7D4EA__CTOR_OFFSET))(this);
	}
};
