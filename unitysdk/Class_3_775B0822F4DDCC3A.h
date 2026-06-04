#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFloorSavedValueV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_775B0822F4DDCC3A_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA649E90)
#define CLASS_3_775B0822F4DDCC3A__CTOR_OFFSET UNITYSDK_OFFSET(0xA649E60)

inline static constexpr unsigned int Class_3_775B0822F4DDCC3A_TypeDefinitionIndex = 49159;

class Class_3_775B0822F4DDCC3A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareFloorSavedValueV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + CLASS_3_775B0822F4DDCC3A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_775B0822F4DDCC3A_EVALUATE_OFFSET))(this);
	}
};
