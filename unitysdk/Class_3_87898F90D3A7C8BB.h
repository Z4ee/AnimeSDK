#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ByCanPlanetFesSkillLevelUp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_87898F90D3A7C8BB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC761730)
#define CLASS_3_87898F90D3A7C8BB__CTOR_OFFSET UNITYSDK_OFFSET(0xC761700)

inline static constexpr unsigned int Class_3_87898F90D3A7C8BB_TypeDefinitionIndex = 54164;

class Class_3_87898F90D3A7C8BB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ByCanPlanetFesSkillLevelUp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + CLASS_3_87898F90D3A7C8BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87898F90D3A7C8BB_EVALUATE_OFFSET))(this);
	}
};
