#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareTeamFormationRowIndex; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1A9272A9A8DB3849_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14B0E5A0)
#define CLASS_3_1A9272A9A8DB3849__CTOR_OFFSET UNITYSDK_OFFSET(0x14B0E570)

inline static constexpr unsigned int Class_3_1A9272A9A8DB3849_TypeDefinitionIndex = 52108;

class Class_3_1A9272A9A8DB3849 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareTeamFormationRowIndex*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + CLASS_3_1A9272A9A8DB3849__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A9272A9A8DB3849_EVALUATE_OFFSET))(this);
	}
};
