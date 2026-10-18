#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ST_ByOnHit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_60A9155E4EF0EC91_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDEB3F0)
#define CLASS_3_60A9155E4EF0EC91__CTOR_OFFSET UNITYSDK_OFFSET(0xBDEB330)

inline static constexpr unsigned int Class_3_60A9155E4EF0EC91_TypeDefinitionIndex = 52201;

class Class_3_60A9155E4EF0EC91 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByOnHit*>
{
public:
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByOnHit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + CLASS_3_60A9155E4EF0EC91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60A9155E4EF0EC91_EVALUATE_OFFSET))(this);
	}
};
