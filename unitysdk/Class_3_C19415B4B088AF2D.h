#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class ByCheckMonsterDie; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C19415B4B088AF2D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1000CDE0)
#define CLASS_3_C19415B4B088AF2D_METHOD_3_538A4AD7B1F24D2D_OFFSET UNITYSDK_OFFSET(0x1000CF90)
#define CLASS_3_C19415B4B088AF2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1000CD20)

inline static constexpr unsigned int Class_3_C19415B4B088AF2D_TypeDefinitionIndex = 53455;

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

	::System::Void Method_3_538A4AD7B1F24D2D(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_C19415B4B088AF2D_METHOD_3_538A4AD7B1F24D2D_OFFSET))(this, a1);
	}
};
