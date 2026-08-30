#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareTeamLeaderPath; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C4AD9258F52217D8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17E26080)
#define CLASS_3_C4AD9258F52217D8__CTOR_OFFSET UNITYSDK_OFFSET(0x17E26050)

inline static constexpr unsigned int Class_3_C4AD9258F52217D8_TypeDefinitionIndex = 52868;

class Class_3_C4AD9258F52217D8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareTeamLeaderPath*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTeamLeaderPath* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTeamLeaderPath*))((::PBYTE)hIl2Cpp + CLASS_3_C4AD9258F52217D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4AD9258F52217D8_EVALUATE_OFFSET))(this);
	}
};
