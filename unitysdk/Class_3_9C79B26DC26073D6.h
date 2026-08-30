#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTriggeredBlockDamage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9C79B26DC26073D6_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB1C500)
#define CLASS_3_9C79B26DC26073D6__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1C4D0)

inline static constexpr unsigned int Class_3_9C79B26DC26073D6_TypeDefinitionIndex = 54908;

class Class_3_9C79B26DC26073D6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTriggeredBlockDamage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + CLASS_3_9C79B26DC26073D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C79B26DC26073D6_EVALUATE_OFFSET))(this);
	}
};
