#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareNpcMonsterRank; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EBC61ECD42427866_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12A94CB0)
#define CLASS_3_EBC61ECD42427866__CTOR_OFFSET UNITYSDK_OFFSET(0x12A94C80)

inline static constexpr unsigned int Class_3_EBC61ECD42427866_TypeDefinitionIndex = 50995;

class Class_3_EBC61ECD42427866 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareNpcMonsterRank*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareNpcMonsterRank* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareNpcMonsterRank*))((::PBYTE)hIl2Cpp + CLASS_3_EBC61ECD42427866__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBC61ECD42427866_EVALUATE_OFFSET))(this);
	}
};
