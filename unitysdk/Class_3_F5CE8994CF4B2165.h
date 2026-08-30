#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasInsertBattlePerform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F5CE8994CF4B2165_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15917ED0)
#define CLASS_3_F5CE8994CF4B2165__CTOR_OFFSET UNITYSDK_OFFSET(0x15917EA0)

inline static constexpr unsigned int Class_3_F5CE8994CF4B2165_TypeDefinitionIndex = 54828;

class Class_3_F5CE8994CF4B2165 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasInsertBattlePerform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + CLASS_3_F5CE8994CF4B2165__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F5CE8994CF4B2165_EVALUATE_OFFSET))(this);
	}
};
