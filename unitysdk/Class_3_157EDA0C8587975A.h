#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareChallengeGroupType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_157EDA0C8587975A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x117AB210)
#define CLASS_3_157EDA0C8587975A__CTOR_OFFSET UNITYSDK_OFFSET(0x117AB1E0)

inline static constexpr unsigned int Class_3_157EDA0C8587975A_TypeDefinitionIndex = 50295;

class Class_3_157EDA0C8587975A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareChallengeGroupType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + CLASS_3_157EDA0C8587975A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_157EDA0C8587975A_EVALUATE_OFFSET))(this);
	}
};
