#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByInSkillRange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7A97EBD31D220BE0_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB820F70)
#define CLASS_3_7A97EBD31D220BE0__CTOR_OFFSET UNITYSDK_OFFSET(0xB820F40)

inline static constexpr unsigned int Class_3_7A97EBD31D220BE0_TypeDefinitionIndex = 54138;

class Class_3_7A97EBD31D220BE0 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByInSkillRange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByInSkillRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByInSkillRange*))((::PBYTE)hIl2Cpp + CLASS_3_7A97EBD31D220BE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7A97EBD31D220BE0_EVALUATE_OFFSET))(this);
	}
};
