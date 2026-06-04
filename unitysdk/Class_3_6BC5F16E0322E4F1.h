#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsFakeSkillByName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6BC5F16E0322E4F1_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA5D2BB0)
#define CLASS_3_6BC5F16E0322E4F1__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D2B80)

inline static constexpr unsigned int Class_3_6BC5F16E0322E4F1_TypeDefinitionIndex = 51096;

class Class_3_6BC5F16E0322E4F1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsFakeSkillByName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsFakeSkillByName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsFakeSkillByName*))((::PBYTE)hIl2Cpp + CLASS_3_6BC5F16E0322E4F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC5F16E0322E4F1_EVALUATE_OFFSET))(this);
	}
};
