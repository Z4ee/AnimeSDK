#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_BySkillInCD; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F069657887779A04_EVALUATE_OFFSET UNITYSDK_OFFSET(0x138E7F80)
#define CLASS_3_F069657887779A04__CTOR_OFFSET UNITYSDK_OFFSET(0x138E7F50)

inline static constexpr unsigned int Class_3_F069657887779A04_TypeDefinitionIndex = 48815;

class Class_3_F069657887779A04 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_BySkillInCD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + CLASS_3_F069657887779A04__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F069657887779A04_EVALUATE_OFFSET))(this);
	}
};
