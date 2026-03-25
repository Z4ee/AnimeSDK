#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckActionDelayEffectType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_299374DC16F9EA93_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10BD30C0)
#define CLASS_3_299374DC16F9EA93__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD3090)

inline static constexpr unsigned int Class_3_299374DC16F9EA93_TypeDefinitionIndex = 43572;

class Class_3_299374DC16F9EA93 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckActionDelayEffectType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + CLASS_3_299374DC16F9EA93__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_299374DC16F9EA93_EVALUATE_OFFSET))(this);
	}
};
