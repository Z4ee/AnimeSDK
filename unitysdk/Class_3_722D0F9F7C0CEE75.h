#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHaveLockTargetInCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_722D0F9F7C0CEE75_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1600AE10)
#define CLASS_3_722D0F9F7C0CEE75__CTOR_OFFSET UNITYSDK_OFFSET(0x1600ADE0)

inline static constexpr unsigned int Class_3_722D0F9F7C0CEE75_TypeDefinitionIndex = 54839;

class Class_3_722D0F9F7C0CEE75 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHaveLockTargetInCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveLockTargetInCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveLockTargetInCamera*))((::PBYTE)hIl2Cpp + CLASS_3_722D0F9F7C0CEE75__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_722D0F9F7C0CEE75_EVALUATE_OFFSET))(this);
	}
};
