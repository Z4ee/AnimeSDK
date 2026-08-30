#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByCompareSPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D39924240A07C28C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1608C8F0)
#define CLASS_3_D39924240A07C28C__CTOR_OFFSET UNITYSDK_OFFSET(0x1608C8C0)

inline static constexpr unsigned int Class_3_D39924240A07C28C_TypeDefinitionIndex = 54672;

class Class_3_D39924240A07C28C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByCompareSPRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByCompareSPRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByCompareSPRatio*))((::PBYTE)hIl2Cpp + CLASS_3_D39924240A07C28C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D39924240A07C28C_EVALUATE_OFFSET))(this);
	}
};
