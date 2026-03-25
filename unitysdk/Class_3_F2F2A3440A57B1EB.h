#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class ByCheckCharacterDie; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F2F2A3440A57B1EB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x884BE40)
#define CLASS_3_F2F2A3440A57B1EB_METHOD_3_E0605E6F5A574306_OFFSET UNITYSDK_OFFSET(0x884C020)
#define CLASS_3_F2F2A3440A57B1EB__CTOR_OFFSET UNITYSDK_OFFSET(0x884BD80)

inline static constexpr unsigned int Class_3_F2F2A3440A57B1EB_TypeDefinitionIndex = 46743;

class Class_3_F2F2A3440A57B1EB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckCharacterDie*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_3_F2F2A3440A57B1EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2F2A3440A57B1EB_EVALUATE_OFFSET))(this);
	}

	::System::Void Method_3_E0605E6F5A574306(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_F2F2A3440A57B1EB_METHOD_3_E0605E6F5A574306_OFFSET))(this, a1);
	}
};
