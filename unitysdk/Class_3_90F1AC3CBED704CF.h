#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByMazeSkillUseCheck; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_90F1AC3CBED704CF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB531540)
#define CLASS_3_90F1AC3CBED704CF__CTOR_OFFSET UNITYSDK_OFFSET(0xB531510)

inline static constexpr unsigned int Class_3_90F1AC3CBED704CF_TypeDefinitionIndex = 54684;

class Class_3_90F1AC3CBED704CF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByMazeSkillUseCheck*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + CLASS_3_90F1AC3CBED704CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90F1AC3CBED704CF_EVALUATE_OFFSET))(this);
	}
};
