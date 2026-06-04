#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSoundEventInCD; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F318AA555DD0ACEF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1455C680)
#define CLASS_3_F318AA555DD0ACEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1455C650)

inline static constexpr unsigned int Class_3_F318AA555DD0ACEF_TypeDefinitionIndex = 49188;

class Class_3_F318AA555DD0ACEF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSoundEventInCD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + CLASS_3_F318AA555DD0ACEF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F318AA555DD0ACEF_EVALUATE_OFFSET))(this);
	}
};
