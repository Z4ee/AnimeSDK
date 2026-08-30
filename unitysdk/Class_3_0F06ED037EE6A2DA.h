#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckModifierCallBackIsInfected; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0F06ED037EE6A2DA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1593A770)
#define CLASS_3_0F06ED037EE6A2DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1593A740)

inline static constexpr unsigned int Class_3_0F06ED037EE6A2DA_TypeDefinitionIndex = 54715;

class Class_3_0F06ED037EE6A2DA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckModifierCallBackIsInfected*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + CLASS_3_0F06ED037EE6A2DA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F06ED037EE6A2DA_EVALUATE_OFFSET))(this);
	}
};
