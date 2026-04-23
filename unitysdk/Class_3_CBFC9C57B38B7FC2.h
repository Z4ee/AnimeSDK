#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareMainMissionState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CBFC9C57B38B7FC2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9E2BE10)
#define CLASS_3_CBFC9C57B38B7FC2__CTOR_OFFSET UNITYSDK_OFFSET(0x9E2BDE0)

inline static constexpr unsigned int Class_3_CBFC9C57B38B7FC2_TypeDefinitionIndex = 48546;

class Class_3_CBFC9C57B38B7FC2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareMainMissionState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMainMissionState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMainMissionState*))((::PBYTE)hIl2Cpp + CLASS_3_CBFC9C57B38B7FC2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CBFC9C57B38B7FC2_EVALUATE_OFFSET))(this);
	}
};
