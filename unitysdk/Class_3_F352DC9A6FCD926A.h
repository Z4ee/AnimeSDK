#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByContainsParamFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F352DC9A6FCD926A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8D43D20)
#define CLASS_3_F352DC9A6FCD926A__CTOR_OFFSET UNITYSDK_OFFSET(0x8D43CF0)

inline static constexpr unsigned int Class_3_F352DC9A6FCD926A_TypeDefinitionIndex = 43672;

class Class_3_F352DC9A6FCD926A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByContainsParamFlag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + CLASS_3_F352DC9A6FCD926A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F352DC9A6FCD926A_EVALUATE_OFFSET))(this);
	}
};
