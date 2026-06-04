#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckActionDelayChanged; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CFA7F438868E7DF4_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA6A4720)
#define CLASS_3_CFA7F438868E7DF4__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A46F0)

inline static constexpr unsigned int Class_3_CFA7F438868E7DF4_TypeDefinitionIndex = 50933;

class Class_3_CFA7F438868E7DF4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckActionDelayChanged*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckActionDelayChanged* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckActionDelayChanged*))((::PBYTE)hIl2Cpp + CLASS_3_CFA7F438868E7DF4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFA7F438868E7DF4_EVALUATE_OFFSET))(this);
	}
};
