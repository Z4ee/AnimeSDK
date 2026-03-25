#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareAliveEnemyNumber; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F9F52AD7948E852D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x114134E0)
#define CLASS_3_F9F52AD7948E852D__CTOR_OFFSET UNITYSDK_OFFSET(0x114134B0)

inline static constexpr unsigned int Class_3_F9F52AD7948E852D_TypeDefinitionIndex = 43592;

class Class_3_F9F52AD7948E852D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareAliveEnemyNumber*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + CLASS_3_F9F52AD7948E852D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9F52AD7948E852D_EVALUATE_OFFSET))(this);
	}
};
