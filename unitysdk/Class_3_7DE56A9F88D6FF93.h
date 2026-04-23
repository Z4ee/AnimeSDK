#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByContainBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7DE56A9F88D6FF93_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11B040B0)
#define CLASS_3_7DE56A9F88D6FF93__CTOR_OFFSET UNITYSDK_OFFSET(0x11B04080)

inline static constexpr unsigned int Class_3_7DE56A9F88D6FF93_TypeDefinitionIndex = 50230;

class Class_3_7DE56A9F88D6FF93 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByContainBehaviorFlag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByContainBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_3_7DE56A9F88D6FF93__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DE56A9F88D6FF93_EVALUATE_OFFSET))(this);
	}
};
