#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFloorCustomFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9032692F2CA194DD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB4B3AA0)
#define CLASS_3_9032692F2CA194DD__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B3A70)

inline static constexpr unsigned int Class_3_9032692F2CA194DD_TypeDefinitionIndex = 52832;

class Class_3_9032692F2CA194DD : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareFloorCustomFloat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + CLASS_3_9032692F2CA194DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9032692F2CA194DD_EVALUATE_OFFSET))(this);
	}
};
