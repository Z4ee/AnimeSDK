#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSelectSkillEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BBBF0E770F53E7BF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBAD1D90)
#define CLASS_3_BBBF0E770F53E7BF__CTOR_OFFSET UNITYSDK_OFFSET(0xBAD1D60)

inline static constexpr unsigned int Class_3_BBBF0E770F53E7BF_TypeDefinitionIndex = 50340;

class Class_3_BBBF0E770F53E7BF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSelectSkillEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + CLASS_3_BBBF0E770F53E7BF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBBF0E770F53E7BF_EVALUATE_OFFSET))(this);
	}
};
