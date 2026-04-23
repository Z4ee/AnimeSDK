#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsCharacterChangeTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_534111F7B88FA108_EVALUATE_OFFSET UNITYSDK_OFFSET(0x925CE10)
#define CLASS_3_534111F7B88FA108__CTOR_OFFSET UNITYSDK_OFFSET(0x925CDE0)

inline static constexpr unsigned int Class_3_534111F7B88FA108_TypeDefinitionIndex = 50602;

class Class_3_534111F7B88FA108 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsCharacterChangeTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + CLASS_3_534111F7B88FA108__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_534111F7B88FA108_EVALUATE_OFFSET))(this);
	}
};
