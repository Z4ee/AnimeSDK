#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareMonsterID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BF5911B4032A38CC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1142F720)
#define CLASS_3_BF5911B4032A38CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1142F6F0)

inline static constexpr unsigned int Class_3_BF5911B4032A38CC_TypeDefinitionIndex = 43625;

class Class_3_BF5911B4032A38CC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareMonsterID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMonsterID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMonsterID*))((::PBYTE)hIl2Cpp + CLASS_3_BF5911B4032A38CC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF5911B4032A38CC_EVALUATE_OFFSET))(this);
	}
};
