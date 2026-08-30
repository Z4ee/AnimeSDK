#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByFromBattleViewModeChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_104EDC54B5A5FB3F_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC53280)
#define CLASS_3_104EDC54B5A5FB3F__CTOR_OFFSET UNITYSDK_OFFSET(0xBC53250)

inline static constexpr unsigned int Class_3_104EDC54B5A5FB3F_TypeDefinitionIndex = 54816;

class Class_3_104EDC54B5A5FB3F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByFromBattleViewModeChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + CLASS_3_104EDC54B5A5FB3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_104EDC54B5A5FB3F_EVALUATE_OFFSET))(this);
	}
};
