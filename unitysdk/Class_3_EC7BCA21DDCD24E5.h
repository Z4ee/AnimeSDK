#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSkillLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EC7BCA21DDCD24E5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10534D80)
#define CLASS_3_EC7BCA21DDCD24E5__CTOR_OFFSET UNITYSDK_OFFSET(0x10534D50)

inline static constexpr unsigned int Class_3_EC7BCA21DDCD24E5_TypeDefinitionIndex = 43645;

class Class_3_EC7BCA21DDCD24E5 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSkillLevel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSkillLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSkillLevel*))((::PBYTE)hIl2Cpp + CLASS_3_EC7BCA21DDCD24E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC7BCA21DDCD24E5_EVALUATE_OFFSET))(this);
	}
};
