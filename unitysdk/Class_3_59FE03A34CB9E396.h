#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckTimelineEntityState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_59FE03A34CB9E396_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9379290)
#define CLASS_3_59FE03A34CB9E396__CTOR_OFFSET UNITYSDK_OFFSET(0x9379260)

inline static constexpr unsigned int Class_3_59FE03A34CB9E396_TypeDefinitionIndex = 49195;

class Class_3_59FE03A34CB9E396 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckTimelineEntityState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTimelineEntityState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTimelineEntityState*))((::PBYTE)hIl2Cpp + CLASS_3_59FE03A34CB9E396__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59FE03A34CB9E396_EVALUATE_OFFSET))(this);
	}
};
