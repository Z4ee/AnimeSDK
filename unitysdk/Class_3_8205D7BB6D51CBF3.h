#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareNPCMonsterID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8205D7BB6D51CBF3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1390AA90)
#define CLASS_3_8205D7BB6D51CBF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1390AA60)

inline static constexpr unsigned int Class_3_8205D7BB6D51CBF3_TypeDefinitionIndex = 49177;

class Class_3_8205D7BB6D51CBF3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareNPCMonsterID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareNPCMonsterID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareNPCMonsterID*))((::PBYTE)hIl2Cpp + CLASS_3_8205D7BB6D51CBF3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8205D7BB6D51CBF3_EVALUATE_OFFSET))(this);
	}
};
