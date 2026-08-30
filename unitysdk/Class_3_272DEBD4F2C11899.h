#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsRebuiltSummonUnit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_272DEBD4F2C11899_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16293E20)
#define CLASS_3_272DEBD4F2C11899__CTOR_OFFSET UNITYSDK_OFFSET(0x16293DF0)

inline static constexpr unsigned int Class_3_272DEBD4F2C11899_TypeDefinitionIndex = 54891;

class Class_3_272DEBD4F2C11899 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsRebuiltSummonUnit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + CLASS_3_272DEBD4F2C11899__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_272DEBD4F2C11899_EVALUATE_OFFSET))(this);
	}
};
