#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareMonsterPhase; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B2661DA525A97E2C_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA5692A0)
#define CLASS_3_B2661DA525A97E2C__CTOR_OFFSET UNITYSDK_OFFSET(0xA569270)

inline static constexpr unsigned int Class_3_B2661DA525A97E2C_TypeDefinitionIndex = 50991;

class Class_3_B2661DA525A97E2C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareMonsterPhase*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMonsterPhase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMonsterPhase*))((::PBYTE)hIl2Cpp + CLASS_3_B2661DA525A97E2C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2661DA525A97E2C_EVALUATE_OFFSET))(this);
	}
};
