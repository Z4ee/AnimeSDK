#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByIsBattleSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5A41DB9ED935B026_EVALUATE_OFFSET UNITYSDK_OFFSET(0x162C25B0)
#define CLASS_3_5A41DB9ED935B026__CTOR_OFFSET UNITYSDK_OFFSET(0x162C2580)

inline static constexpr unsigned int Class_3_5A41DB9ED935B026_TypeDefinitionIndex = 54677;

class Class_3_5A41DB9ED935B026 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByIsBattleSkillType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsBattleSkillType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsBattleSkillType*))((::PBYTE)hIl2Cpp + CLASS_3_5A41DB9ED935B026__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A41DB9ED935B026_EVALUATE_OFFSET))(this);
	}
};
