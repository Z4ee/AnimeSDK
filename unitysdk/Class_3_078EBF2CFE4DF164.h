#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCurrentSkillTargetType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_078EBF2CFE4DF164_EVALUATE_OFFSET UNITYSDK_OFFSET(0x177C3B80)
#define CLASS_3_078EBF2CFE4DF164__CTOR_OFFSET UNITYSDK_OFFSET(0x177C3B50)

inline static constexpr unsigned int Class_3_078EBF2CFE4DF164_TypeDefinitionIndex = 54811;

class Class_3_078EBF2CFE4DF164 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCurrentSkillTargetType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + CLASS_3_078EBF2CFE4DF164__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_078EBF2CFE4DF164_EVALUATE_OFFSET))(this);
	}
};
