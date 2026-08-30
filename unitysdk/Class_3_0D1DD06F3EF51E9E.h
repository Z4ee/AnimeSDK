#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareScepterFuncType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0D1DD06F3EF51E9E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x180A33D0)
#define CLASS_3_0D1DD06F3EF51E9E__CTOR_OFFSET UNITYSDK_OFFSET(0x180A33A0)

inline static constexpr unsigned int Class_3_0D1DD06F3EF51E9E_TypeDefinitionIndex = 55097;

class Class_3_0D1DD06F3EF51E9E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareScepterFuncType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + CLASS_3_0D1DD06F3EF51E9E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D1DD06F3EF51E9E_EVALUATE_OFFSET))(this);
	}
};
