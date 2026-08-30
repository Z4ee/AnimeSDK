#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByAdvCharacterLogicState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DEF9CE3171FCD052_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1925C080)
#define CLASS_3_DEF9CE3171FCD052__CTOR_OFFSET UNITYSDK_OFFSET(0x1925C050)

inline static constexpr unsigned int Class_3_DEF9CE3171FCD052_TypeDefinitionIndex = 53384;

class Class_3_DEF9CE3171FCD052 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAdvCharacterLogicState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + CLASS_3_DEF9CE3171FCD052__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEF9CE3171FCD052_EVALUATE_OFFSET))(this);
	}
};
