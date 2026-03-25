#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByGridFightTraitSelectedCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_80E98A6CD9BBAECF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10506FB0)
#define CLASS_3_80E98A6CD9BBAECF__CTOR_OFFSET UNITYSDK_OFFSET(0x10506F80)

inline static constexpr unsigned int Class_3_80E98A6CD9BBAECF_TypeDefinitionIndex = 43686;

class Class_3_80E98A6CD9BBAECF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByGridFightTraitSelectedCharacter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + CLASS_3_80E98A6CD9BBAECF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80E98A6CD9BBAECF_EVALUATE_OFFSET))(this);
	}
};
