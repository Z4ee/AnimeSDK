#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareTeamLeaderBodySize; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C15E9B3B55B9A973_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1193ABE0)
#define CLASS_3_C15E9B3B55B9A973__CTOR_OFFSET UNITYSDK_OFFSET(0x1193ABB0)

inline static constexpr unsigned int Class_3_C15E9B3B55B9A973_TypeDefinitionIndex = 48994;

class Class_3_C15E9B3B55B9A973 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareTeamLeaderBodySize*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + CLASS_3_C15E9B3B55B9A973__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C15E9B3B55B9A973_EVALUATE_OFFSET))(this);
	}
};
