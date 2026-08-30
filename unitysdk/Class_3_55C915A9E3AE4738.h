#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckElfTodayManaged; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_55C915A9E3AE4738_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15AAE650)
#define CLASS_3_55C915A9E3AE4738__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAE620)

inline static constexpr unsigned int Class_3_55C915A9E3AE4738_TypeDefinitionIndex = 58121;

class Class_3_55C915A9E3AE4738 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckElfTodayManaged*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckElfTodayManaged* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckElfTodayManaged*))((::PBYTE)hIl2Cpp + CLASS_3_55C915A9E3AE4738__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55C915A9E3AE4738_EVALUATE_OFFSET))(this);
	}
};
