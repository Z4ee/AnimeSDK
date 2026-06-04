#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareHeartDialTracingNPC; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5560C1AF846C228A_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA46F090)
#define CLASS_3_5560C1AF846C228A__CTOR_OFFSET UNITYSDK_OFFSET(0xA46F060)

inline static constexpr unsigned int Class_3_5560C1AF846C228A_TypeDefinitionIndex = 49167;

class Class_3_5560C1AF846C228A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareHeartDialTracingNPC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + CLASS_3_5560C1AF846C228A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5560C1AF846C228A_EVALUATE_OFFSET))(this);
	}
};
