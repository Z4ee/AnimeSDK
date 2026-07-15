#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByRollShopResult; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D57268F3760B5EAA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x160F81C0)
#define CLASS_3_D57268F3760B5EAA__CTOR_OFFSET UNITYSDK_OFFSET(0x160F8190)

inline static constexpr unsigned int Class_3_D57268F3760B5EAA_TypeDefinitionIndex = 50697;

class Class_3_D57268F3760B5EAA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByRollShopResult*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + CLASS_3_D57268F3760B5EAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D57268F3760B5EAA_EVALUATE_OFFSET))(this);
	}
};
