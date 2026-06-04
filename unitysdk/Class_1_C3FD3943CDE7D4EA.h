#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_C3FD3943CDE7D4EA__CTOR_OFFSET UNITYSDK_OFFSET(0x13C442C0)

inline static constexpr unsigned int Class_1_C3FD3943CDE7D4EA_TypeDefinitionIndex = 50868;

class Class_1_C3FD3943CDE7D4EA : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::Class_1_843DD6330B22E422* Field_1_2; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::RPG::GameCore::DamageByAttackProperty* Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3FD3943CDE7D4EA__CTOR_OFFSET))(this);
	}
};
