#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareChallengeLeft; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A972707BAA457672_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12AA0010)
#define CLASS_3_A972707BAA457672__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9FFE0)

inline static constexpr unsigned int Class_3_A972707BAA457672_TypeDefinitionIndex = 50296;

class Class_3_A972707BAA457672 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareChallengeLeft*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareChallengeLeft* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareChallengeLeft*))((::PBYTE)hIl2Cpp + CLASS_3_A972707BAA457672__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A972707BAA457672_EVALUATE_OFFSET))(this);
	}
};
