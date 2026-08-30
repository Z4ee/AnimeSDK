#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFloorCustomStringV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1477545963FB9C3B_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE022900)
#define CLASS_3_1477545963FB9C3B__CTOR_OFFSET UNITYSDK_OFFSET(0xE0228D0)

inline static constexpr unsigned int Class_3_1477545963FB9C3B_TypeDefinitionIndex = 52835;

class Class_3_1477545963FB9C3B : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareFloorCustomStringV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + CLASS_3_1477545963FB9C3B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1477545963FB9C3B_EVALUATE_OFFSET))(this);
	}
};
