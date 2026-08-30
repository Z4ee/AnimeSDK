#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareIsEntityInDialogue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EC4AD4FB4A64E2F3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1782A4B0)
#define CLASS_3_EC4AD4FB4A64E2F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1782A480)

inline static constexpr unsigned int Class_3_EC4AD4FB4A64E2F3_TypeDefinitionIndex = 52847;

class Class_3_EC4AD4FB4A64E2F3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareIsEntityInDialogue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + CLASS_3_EC4AD4FB4A64E2F3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC4AD4FB4A64E2F3_EVALUATE_OFFSET))(this);
	}
};
