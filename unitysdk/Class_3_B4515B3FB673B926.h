#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsAllowUseSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B4515B3FB673B926_EVALUATE_OFFSET UNITYSDK_OFFSET(0x153F1A00)
#define CLASS_3_B4515B3FB673B926__CTOR_OFFSET UNITYSDK_OFFSET(0x153F19D0)

inline static constexpr unsigned int Class_3_B4515B3FB673B926_TypeDefinitionIndex = 55112;

class Class_3_B4515B3FB673B926 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsAllowUseSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsAllowUseSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsAllowUseSkill*))((::PBYTE)hIl2Cpp + CLASS_3_B4515B3FB673B926__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4515B3FB673B926_EVALUATE_OFFSET))(this);
	}
};
