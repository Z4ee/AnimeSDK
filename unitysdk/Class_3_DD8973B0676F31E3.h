#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareQuestGetReward; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DD8973B0676F31E3_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBD137D0)
#define CLASS_3_DD8973B0676F31E3__CTOR_OFFSET UNITYSDK_OFFSET(0xBD137A0)

inline static constexpr unsigned int Class_3_DD8973B0676F31E3_TypeDefinitionIndex = 53392;

class Class_3_DD8973B0676F31E3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareQuestGetReward*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + CLASS_3_DD8973B0676F31E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD8973B0676F31E3_EVALUATE_OFFSET))(this);
	}
};
