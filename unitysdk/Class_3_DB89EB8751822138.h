#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareLastKillSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DB89EB8751822138_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1455B9A0)
#define CLASS_3_DB89EB8751822138__CTOR_OFFSET UNITYSDK_OFFSET(0x1455B970)

inline static constexpr unsigned int Class_3_DB89EB8751822138_TypeDefinitionIndex = 50981;

class Class_3_DB89EB8751822138 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareLastKillSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + CLASS_3_DB89EB8751822138__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB89EB8751822138_EVALUATE_OFFSET))(this);
	}
};
