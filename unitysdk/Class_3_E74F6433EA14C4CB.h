#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTurnOwnerHasActionInTurn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E74F6433EA14C4CB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBD05D10)
#define CLASS_3_E74F6433EA14C4CB__CTOR_OFFSET UNITYSDK_OFFSET(0xBD05CE0)

inline static constexpr unsigned int Class_3_E74F6433EA14C4CB_TypeDefinitionIndex = 54939;

class Class_3_E74F6433EA14C4CB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTurnOwnerHasActionInTurn*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + CLASS_3_E74F6433EA14C4CB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E74F6433EA14C4CB_EVALUATE_OFFSET))(this);
	}
};
