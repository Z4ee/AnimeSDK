#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class ByCheckMonsterDie; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C19415B4B088AF2D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11559430)
#define CLASS_3_C19415B4B088AF2D_METHOD_3_538A4AD7B1F24D2D_OFFSET UNITYSDK_OFFSET(0x115595E0)
#define CLASS_3_C19415B4B088AF2D__CTOR_OFFSET UNITYSDK_OFFSET(0x11559370)

inline static constexpr unsigned int Class_3_C19415B4B088AF2D_TypeDefinitionIndex = 46746;

class Class_3_C19415B4B088AF2D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckMonsterDie*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + CLASS_3_C19415B4B088AF2D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C19415B4B088AF2D_EVALUATE_OFFSET))(this);
	}

	::System::Void Method_3_538A4AD7B1F24D2D(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_C19415B4B088AF2D_METHOD_3_538A4AD7B1F24D2D_OFFSET))(this, a1);
	}
};
