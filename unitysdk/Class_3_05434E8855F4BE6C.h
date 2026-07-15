#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsCurrentSkillAllowMultiTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_05434E8855F4BE6C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15F6ED90)
#define CLASS_3_05434E8855F4BE6C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F6ED60)

inline static constexpr unsigned int Class_3_05434E8855F4BE6C_TypeDefinitionIndex = 52126;

class Class_3_05434E8855F4BE6C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*))((::PBYTE)hIl2Cpp + CLASS_3_05434E8855F4BE6C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05434E8855F4BE6C_EVALUATE_OFFSET))(this);
	}
};
