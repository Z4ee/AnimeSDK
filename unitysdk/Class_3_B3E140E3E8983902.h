#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCurrentSkillEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B3E140E3E8983902_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16B4E9F0)
#define CLASS_3_B3E140E3E8983902__CTOR_OFFSET UNITYSDK_OFFSET(0x16B4E9C0)

inline static constexpr unsigned int Class_3_B3E140E3E8983902_TypeDefinitionIndex = 54809;

class Class_3_B3E140E3E8983902 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCurrentSkillEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentSkillEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentSkillEffect*))((::PBYTE)hIl2Cpp + CLASS_3_B3E140E3E8983902__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3E140E3E8983902_EVALUATE_OFFSET))(this);
	}
};
