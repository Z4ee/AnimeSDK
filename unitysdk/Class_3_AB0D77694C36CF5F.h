#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareRogueMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AB0D77694C36CF5F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9226D80)
#define CLASS_3_AB0D77694C36CF5F__CTOR_OFFSET UNITYSDK_OFFSET(0x9226D50)

inline static constexpr unsigned int Class_3_AB0D77694C36CF5F_TypeDefinitionIndex = 50337;

class Class_3_AB0D77694C36CF5F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareRogueMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareRogueMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareRogueMode*))((::PBYTE)hIl2Cpp + CLASS_3_AB0D77694C36CF5F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB0D77694C36CF5F_EVALUATE_OFFSET))(this);
	}
};
