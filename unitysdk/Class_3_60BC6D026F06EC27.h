#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByShowChallengeSelectPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_60BC6D026F06EC27_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA98750)
#define CLASS_3_60BC6D026F06EC27__CTOR_OFFSET UNITYSDK_OFFSET(0xBA98720)

inline static constexpr unsigned int Class_3_60BC6D026F06EC27_TypeDefinitionIndex = 52881;

class Class_3_60BC6D026F06EC27 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByShowChallengeSelectPage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + CLASS_3_60BC6D026F06EC27__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60BC6D026F06EC27_EVALUATE_OFFSET))(this);
	}
};
