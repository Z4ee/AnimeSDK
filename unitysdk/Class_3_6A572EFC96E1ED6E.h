#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsControlSkillDisable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6A572EFC96E1ED6E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x117840F0)
#define CLASS_3_6A572EFC96E1ED6E__CTOR_OFFSET UNITYSDK_OFFSET(0x117840C0)

inline static constexpr unsigned int Class_3_6A572EFC96E1ED6E_TypeDefinitionIndex = 50418;

class Class_3_6A572EFC96E1ED6E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsControlSkillDisable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsControlSkillDisable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsControlSkillDisable*))((::PBYTE)hIl2Cpp + CLASS_3_6A572EFC96E1ED6E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A572EFC96E1ED6E_EVALUATE_OFFSET))(this);
	}
};
