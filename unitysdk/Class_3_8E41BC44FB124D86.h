#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsSkillTypeDisable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8E41BC44FB124D86_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18754180)
#define CLASS_3_8E41BC44FB124D86__CTOR_OFFSET UNITYSDK_OFFSET(0x18754150)

inline static constexpr unsigned int Class_3_8E41BC44FB124D86_TypeDefinitionIndex = 54894;

class Class_3_8E41BC44FB124D86 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsSkillTypeDisable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + CLASS_3_8E41BC44FB124D86__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E41BC44FB124D86_EVALUATE_OFFSET))(this);
	}
};
