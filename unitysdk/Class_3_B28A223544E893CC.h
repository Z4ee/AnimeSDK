#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class ByCheckCharacterDie; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B28A223544E893CC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10620910)
#define CLASS_3_B28A223544E893CC_METHOD_3_5DC9989DD20A6DEF_OFFSET UNITYSDK_OFFSET(0x10620B00)
#define CLASS_3_B28A223544E893CC__CTOR_OFFSET UNITYSDK_OFFSET(0x10620830)

inline static constexpr unsigned int Class_3_B28A223544E893CC_TypeDefinitionIndex = 54165;

class Class_3_B28A223544E893CC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckCharacterDie*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_3_B28A223544E893CC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B28A223544E893CC_EVALUATE_OFFSET))(this);
	}

	::System::Void Method_3_5DC9989DD20A6DEF(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_B28A223544E893CC_METHOD_3_5DC9989DD20A6DEF_OFFSET))(this, a1);
	}
};
