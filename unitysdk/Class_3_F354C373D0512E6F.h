#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_547;
namespace RPG::GameCore { class ByCheckMonsterDie; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F354C373D0512E6F_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB753E40)
#define CLASS_3_F354C373D0512E6F_METHOD_3_762DCF081F9ECD92_OFFSET UNITYSDK_OFFSET(0xB754010)
#define CLASS_3_F354C373D0512E6F__CTOR_OFFSET UNITYSDK_OFFSET(0xB753D60)

inline static constexpr unsigned int Class_3_F354C373D0512E6F_TypeDefinitionIndex = 57970;

class Class_3_F354C373D0512E6F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckMonsterDie*>
{
public:
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + CLASS_3_F354C373D0512E6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F354C373D0512E6F_EVALUATE_OFFSET))(this);
	}

	::System::Void Method_3_762DCF081F9ECD92(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_3_F354C373D0512E6F_METHOD_3_762DCF081F9ECD92_OFFSET))(this, a1);
	}
};
