#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasInsertAbilityExecutingDuringGameModePause; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_45F70FD6D6A2EDFC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC121380)
#define CLASS_3_45F70FD6D6A2EDFC__CTOR_OFFSET UNITYSDK_OFFSET(0xC121350)

inline static constexpr unsigned int Class_3_45F70FD6D6A2EDFC_TypeDefinitionIndex = 54825;

class Class_3_45F70FD6D6A2EDFC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*))((::PBYTE)hIl2Cpp + CLASS_3_45F70FD6D6A2EDFC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_45F70FD6D6A2EDFC_EVALUATE_OFFSET))(this);
	}
};
