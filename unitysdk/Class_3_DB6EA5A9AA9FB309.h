#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByRankActivatedFromLineup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DB6EA5A9AA9FB309_EVALUATE_OFFSET UNITYSDK_OFFSET(0x158DA670)
#define CLASS_3_DB6EA5A9AA9FB309__CTOR_OFFSET UNITYSDK_OFFSET(0x158DA640)

inline static constexpr unsigned int Class_3_DB6EA5A9AA9FB309_TypeDefinitionIndex = 54923;

class Class_3_DB6EA5A9AA9FB309 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByRankActivatedFromLineup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + CLASS_3_DB6EA5A9AA9FB309__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB6EA5A9AA9FB309_EVALUATE_OFFSET))(this);
	}
};
