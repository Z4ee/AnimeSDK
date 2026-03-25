#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasStanceWeak; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B92E6CDDA1AAD208_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1062C040)
#define CLASS_3_B92E6CDDA1AAD208__CTOR_OFFSET UNITYSDK_OFFSET(0x1062C010)

inline static constexpr unsigned int Class_3_B92E6CDDA1AAD208_TypeDefinitionIndex = 43697;

class Class_3_B92E6CDDA1AAD208 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasStanceWeak*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + CLASS_3_B92E6CDDA1AAD208__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B92E6CDDA1AAD208_EVALUATE_OFFSET))(this);
	}
};
