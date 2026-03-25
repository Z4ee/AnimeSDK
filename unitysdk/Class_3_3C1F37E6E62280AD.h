#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByCheckNeedWaitServerCheckSkillResult; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3C1F37E6E62280AD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10497E30)
#define CLASS_3_3C1F37E6E62280AD__CTOR_OFFSET UNITYSDK_OFFSET(0x10497E00)

inline static constexpr unsigned int Class_3_3C1F37E6E62280AD_TypeDefinitionIndex = 42351;

class Class_3_3C1F37E6E62280AD : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*))((::PBYTE)hIl2Cpp + CLASS_3_3C1F37E6E62280AD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C1F37E6E62280AD_EVALUATE_OFFSET))(this);
	}
};
