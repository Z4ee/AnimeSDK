#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasPausedElationTime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2D891EF2E15F884E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x158446B0)
#define CLASS_3_2D891EF2E15F884E__CTOR_OFFSET UNITYSDK_OFFSET(0x15844680)

inline static constexpr unsigned int Class_3_2D891EF2E15F884E_TypeDefinitionIndex = 54879;

class Class_3_2D891EF2E15F884E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasPausedElationTime*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasPausedElationTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasPausedElationTime*))((::PBYTE)hIl2Cpp + CLASS_3_2D891EF2E15F884E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D891EF2E15F884E_EVALUATE_OFFSET))(this);
	}
};
