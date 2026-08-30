#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsContainModifier; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0EA35BD54EC07D1D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1916E740)
#define CLASS_3_0EA35BD54EC07D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1916E710)

inline static constexpr unsigned int Class_3_0EA35BD54EC07D1D_TypeDefinitionIndex = 54854;

class Class_3_0EA35BD54EC07D1D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsContainModifier*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsContainModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsContainModifier*))((::PBYTE)hIl2Cpp + CLASS_3_0EA35BD54EC07D1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0EA35BD54EC07D1D_EVALUATE_OFFSET))(this);
	}
};
