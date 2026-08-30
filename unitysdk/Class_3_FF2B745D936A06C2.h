#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareInfiniteWaveSummonProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FF2B745D936A06C2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x165B7100)
#define CLASS_3_FF2B745D936A06C2__CTOR_OFFSET UNITYSDK_OFFSET(0x165B70D0)

inline static constexpr unsigned int Class_3_FF2B745D936A06C2_TypeDefinitionIndex = 55094;

class Class_3_FF2B745D936A06C2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + CLASS_3_FF2B745D936A06C2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF2B745D936A06C2_EVALUATE_OFFSET))(this);
	}
};
