#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByInfiniteMonsterWaveLeft; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B2B2792AFEA7BF35_EVALUATE_OFFSET UNITYSDK_OFFSET(0x141FC9C0)
#define CLASS_3_B2B2792AFEA7BF35__CTOR_OFFSET UNITYSDK_OFFSET(0x141FC990)

inline static constexpr unsigned int Class_3_B2B2792AFEA7BF35_TypeDefinitionIndex = 51478;

class Class_3_B2B2792AFEA7BF35 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByInfiniteMonsterWaveLeft*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + CLASS_3_B2B2792AFEA7BF35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2B2792AFEA7BF35_EVALUATE_OFFSET))(this);
	}
};
