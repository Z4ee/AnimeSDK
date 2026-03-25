#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareResistChance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E70B4602B8DAD827_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8D7B7B0)
#define CLASS_3_E70B4602B8DAD827__CTOR_OFFSET UNITYSDK_OFFSET(0x8D7B780)

inline static constexpr unsigned int Class_3_E70B4602B8DAD827_TypeDefinitionIndex = 43639;

class Class_3_E70B4602B8DAD827 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareResistChance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareResistChance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareResistChance*))((::PBYTE)hIl2Cpp + CLASS_3_E70B4602B8DAD827__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E70B4602B8DAD827_EVALUATE_OFFSET))(this);
	}
};
