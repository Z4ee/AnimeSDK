#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByBattleMissionTalkFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F010C80E3DB5DB6_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAF259D0)
#define CLASS_3_4F010C80E3DB5DB6__CTOR_OFFSET UNITYSDK_OFFSET(0xAF259A0)

inline static constexpr unsigned int Class_3_4F010C80E3DB5DB6_TypeDefinitionIndex = 54162;

class Class_3_4F010C80E3DB5DB6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByBattleMissionTalkFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + CLASS_3_4F010C80E3DB5DB6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F010C80E3DB5DB6_EVALUATE_OFFSET))(this);
	}
};
