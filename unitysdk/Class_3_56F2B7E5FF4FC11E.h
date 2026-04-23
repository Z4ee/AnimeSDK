#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByDrinkMakerCheersStoryDrinkHasMade; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_56F2B7E5FF4FC11E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x998BED0)
#define CLASS_3_56F2B7E5FF4FC11E__CTOR_OFFSET UNITYSDK_OFFSET(0x998BEA0)

inline static constexpr unsigned int Class_3_56F2B7E5FF4FC11E_TypeDefinitionIndex = 53464;

class Class_3_56F2B7E5FF4FC11E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*))((::PBYTE)hIl2Cpp + CLASS_3_56F2B7E5FF4FC11E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56F2B7E5FF4FC11E_EVALUATE_OFFSET))(this);
	}
};
