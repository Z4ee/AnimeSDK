#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetAliveState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9BCCE4093C751721_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA9CD640)
#define CLASS_3_9BCCE4093C751721__CTOR_OFFSET UNITYSDK_OFFSET(0xA9CD610)

inline static constexpr unsigned int Class_3_9BCCE4093C751721_TypeDefinitionIndex = 51313;

class Class_3_9BCCE4093C751721 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetAliveState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetAliveState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + CLASS_3_9BCCE4093C751721__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BCCE4093C751721_EVALUATE_OFFSET))(this);
	}
};
