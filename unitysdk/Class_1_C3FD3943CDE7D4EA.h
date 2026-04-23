#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_256D9F63CEA2C6FD;
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_C3FD3943CDE7D4EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1281E940)

inline static constexpr unsigned int Class_1_C3FD3943CDE7D4EA_TypeDefinitionIndex = 50202;

class Class_1_C3FD3943CDE7D4EA : public ::System::Object
{
public:
	::RPG::GameCore::DamageByAttackProperty* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_4; // 0x18
	::RPG::GameCore::GameEntity* Field_1_3; // 0x20
	::Class_1_256D9F63CEA2C6FD* Field_1_2; // 0x28
	::RPG::GameCore::TaskContext* Field_1_0; // 0x30
	::System::Boolean Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3FD3943CDE7D4EA__CTOR_OFFSET))(this);
	}
};
