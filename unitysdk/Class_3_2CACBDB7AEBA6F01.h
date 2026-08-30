#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareTeamFormationWidth; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2CACBDB7AEBA6F01_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB78CF00)
#define CLASS_3_2CACBDB7AEBA6F01__CTOR_OFFSET UNITYSDK_OFFSET(0xB78CED0)

inline static constexpr unsigned int Class_3_2CACBDB7AEBA6F01_TypeDefinitionIndex = 54795;

class Class_3_2CACBDB7AEBA6F01 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareTeamFormationWidth*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + CLASS_3_2CACBDB7AEBA6F01__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CACBDB7AEBA6F01_EVALUATE_OFFSET))(this);
	}
};
