#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsElfRestaurantFarmPlantFull; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8C4CA105215AB971_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A7BEFE0)
#define CLASS_3_8C4CA105215AB971__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BEFB0)

inline static constexpr unsigned int Class_3_8C4CA105215AB971_TypeDefinitionIndex = 54863;

class Class_3_8C4CA105215AB971 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*))((::PBYTE)hIl2Cpp + CLASS_3_8C4CA105215AB971__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C4CA105215AB971_EVALUATE_OFFSET))(this);
	}
};
