#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTargetUnselectable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E5BEC047FB5DDD75_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD198950)
#define CLASS_3_E5BEC047FB5DDD75__CTOR_OFFSET UNITYSDK_OFFSET(0xD198920)

inline static constexpr unsigned int Class_3_E5BEC047FB5DDD75_TypeDefinitionIndex = 43761;

class Class_3_E5BEC047FB5DDD75 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTargetUnselectable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTargetUnselectable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTargetUnselectable*))((::PBYTE)hIl2Cpp + CLASS_3_E5BEC047FB5DDD75__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5BEC047FB5DDD75_EVALUATE_OFFSET))(this);
	}
};
