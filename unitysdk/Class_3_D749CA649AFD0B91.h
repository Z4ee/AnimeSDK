#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckModifierCallBackModifierValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D749CA649AFD0B91_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1604E860)
#define CLASS_3_D749CA649AFD0B91__CTOR_OFFSET UNITYSDK_OFFSET(0x1604E830)

inline static constexpr unsigned int Class_3_D749CA649AFD0B91_TypeDefinitionIndex = 52032;

class Class_3_D749CA649AFD0B91 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckModifierCallBackModifierValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*))((::PBYTE)hIl2Cpp + CLASS_3_D749CA649AFD0B91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D749CA649AFD0B91_EVALUATE_OFFSET))(this);
	}
};
