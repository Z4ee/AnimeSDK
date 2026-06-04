#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByBattleHasCertainResult; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C6C9350D485E26C4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13B3F730)
#define CLASS_3_C6C9350D485E26C4__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3F700)

inline static constexpr unsigned int Class_3_C6C9350D485E26C4_TypeDefinitionIndex = 51136;

class Class_3_C6C9350D485E26C4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByBattleHasCertainResult*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + CLASS_3_C6C9350D485E26C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6C9350D485E26C4_EVALUATE_OFFSET))(this);
	}
};
