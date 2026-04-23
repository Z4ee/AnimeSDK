#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCurrentSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0255A2C5E378679D_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAD2B2B0)
#define CLASS_3_0255A2C5E378679D__CTOR_OFFSET UNITYSDK_OFFSET(0xAD2B280)

inline static constexpr unsigned int Class_3_0255A2C5E378679D_TypeDefinitionIndex = 50377;

class Class_3_0255A2C5E378679D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCurrentSkillType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + CLASS_3_0255A2C5E378679D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0255A2C5E378679D_EVALUATE_OFFSET))(this);
	}
};
