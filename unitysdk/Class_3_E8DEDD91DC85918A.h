#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareCurrentSkillUseParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E8DEDD91DC85918A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1190C510)
#define CLASS_3_E8DEDD91DC85918A__CTOR_OFFSET UNITYSDK_OFFSET(0x1190C4E0)

inline static constexpr unsigned int Class_3_E8DEDD91DC85918A_TypeDefinitionIndex = 50970;

class Class_3_E8DEDD91DC85918A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareCurrentSkillUseParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + CLASS_3_E8DEDD91DC85918A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8DEDD91DC85918A_EVALUATE_OFFSET))(this);
	}
};
