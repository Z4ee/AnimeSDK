#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareVersionFinalMainMission; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C2A6519AE182F385_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB9319F0)
#define CLASS_3_C2A6519AE182F385__CTOR_OFFSET UNITYSDK_OFFSET(0xB9319C0)

inline static constexpr unsigned int Class_3_C2A6519AE182F385_TypeDefinitionIndex = 54800;

class Class_3_C2A6519AE182F385 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareVersionFinalMainMission*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6519AE182F385__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A6519AE182F385_EVALUATE_OFFSET))(this);
	}
};
