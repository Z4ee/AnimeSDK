#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByHasSelectSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9E3F7D5013BF1796_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1362D6A0)
#define CLASS_3_9E3F7D5013BF1796__CTOR_OFFSET UNITYSDK_OFFSET(0x1362D670)

inline static constexpr unsigned int Class_3_9E3F7D5013BF1796_TypeDefinitionIndex = 50369;

class Class_3_9E3F7D5013BF1796 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByHasSelectSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByHasSelectSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByHasSelectSkill*))((::PBYTE)hIl2Cpp + CLASS_3_9E3F7D5013BF1796__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E3F7D5013BF1796_EVALUATE_OFFSET))(this);
	}
};
