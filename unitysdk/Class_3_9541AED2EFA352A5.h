#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSeriesID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9541AED2EFA352A5_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB488960)
#define CLASS_3_9541AED2EFA352A5__CTOR_OFFSET UNITYSDK_OFFSET(0xB488930)

inline static constexpr unsigned int Class_3_9541AED2EFA352A5_TypeDefinitionIndex = 48560;

class Class_3_9541AED2EFA352A5 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSeriesID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSeriesID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSeriesID*))((::PBYTE)hIl2Cpp + CLASS_3_9541AED2EFA352A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9541AED2EFA352A5_EVALUATE_OFFSET))(this);
	}
};
