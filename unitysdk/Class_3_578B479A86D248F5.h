#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsEntityActionState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_578B479A86D248F5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13821640)
#define CLASS_3_578B479A86D248F5__CTOR_OFFSET UNITYSDK_OFFSET(0x13821610)

inline static constexpr unsigned int Class_3_578B479A86D248F5_TypeDefinitionIndex = 51839;

class Class_3_578B479A86D248F5 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsEntityActionState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsEntityActionState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsEntityActionState*))((::PBYTE)hIl2Cpp + CLASS_3_578B479A86D248F5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_578B479A86D248F5_EVALUATE_OFFSET))(this);
	}
};
