#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetHitBoxActive; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B66432491F4555EF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x113E6980)
#define CLASS_3_B66432491F4555EF__CTOR_OFFSET UNITYSDK_OFFSET(0x113E6950)

inline static constexpr unsigned int Class_3_B66432491F4555EF_TypeDefinitionIndex = 43036;

class Class_3_B66432491F4555EF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetHitBoxActive*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + CLASS_3_B66432491F4555EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B66432491F4555EF_EVALUATE_OFFSET))(this);
	}
};
