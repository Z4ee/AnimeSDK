#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckRoleTrialNormalWaveShowDetail; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AA5248462102EC7A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19A24610)
#define CLASS_3_AA5248462102EC7A__CTOR_OFFSET UNITYSDK_OFFSET(0x19A245E0)

inline static constexpr unsigned int Class_3_AA5248462102EC7A_TypeDefinitionIndex = 54720;

class Class_3_AA5248462102EC7A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + CLASS_3_AA5248462102EC7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA5248462102EC7A_EVALUATE_OFFSET))(this);
	}
};
