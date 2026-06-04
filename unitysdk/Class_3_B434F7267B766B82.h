#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByContainMonsterOnWave; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B434F7267B766B82_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10C77C20)
#define CLASS_3_B434F7267B766B82__CTOR_OFFSET UNITYSDK_OFFSET(0x10C77BF0)

inline static constexpr unsigned int Class_3_B434F7267B766B82_TypeDefinitionIndex = 51033;

class Class_3_B434F7267B766B82 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByContainMonsterOnWave*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainMonsterOnWave* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainMonsterOnWave*))((::PBYTE)hIl2Cpp + CLASS_3_B434F7267B766B82__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B434F7267B766B82_EVALUATE_OFFSET))(this);
	}
};
