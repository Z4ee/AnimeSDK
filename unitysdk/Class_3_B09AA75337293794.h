#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByCheckFarmElementActive; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B09AA75337293794_EVALUATE_OFFSET UNITYSDK_OFFSET(0x127E99B0)
#define CLASS_3_B09AA75337293794__CTOR_OFFSET UNITYSDK_OFFSET(0x127E9980)

inline static constexpr unsigned int Class_3_B09AA75337293794_TypeDefinitionIndex = 48963;

class Class_3_B09AA75337293794 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByCheckFarmElementActive*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + CLASS_3_B09AA75337293794__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B09AA75337293794_EVALUATE_OFFSET))(this);
	}
};
