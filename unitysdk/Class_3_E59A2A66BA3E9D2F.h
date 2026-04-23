#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasUnGottenLevelReward; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E59A2A66BA3E9D2F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x975F2A0)
#define CLASS_3_E59A2A66BA3E9D2F__CTOR_OFFSET UNITYSDK_OFFSET(0x975F270)

inline static constexpr unsigned int Class_3_E59A2A66BA3E9D2F_TypeDefinitionIndex = 50399;

class Class_3_E59A2A66BA3E9D2F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasUnGottenLevelReward*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + CLASS_3_E59A2A66BA3E9D2F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E59A2A66BA3E9D2F_EVALUATE_OFFSET))(this);
	}
};
