#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCurrentRogueShopHasStage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DF8C8DDA500B19C9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12ACB090)
#define CLASS_3_DF8C8DDA500B19C9__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACB060)

inline static constexpr unsigned int Class_3_DF8C8DDA500B19C9_TypeDefinitionIndex = 49662;

class Class_3_DF8C8DDA500B19C9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCurrentRogueShopHasStage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + CLASS_3_DF8C8DDA500B19C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF8C8DDA500B19C9_EVALUATE_OFFSET))(this);
	}
};
