#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RA_ByCompareVariableBool; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D1551504425564A4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x104E16E0)
#define CLASS_3_D1551504425564A4__CTOR_OFFSET UNITYSDK_OFFSET(0x104E16B0)

inline static constexpr unsigned int Class_3_D1551504425564A4_TypeDefinitionIndex = 42116;

class Class_3_D1551504425564A4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RA_ByCompareVariableBool*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByCompareVariableBool* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + CLASS_3_D1551504425564A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D1551504425564A4_EVALUATE_OFFSET))(this);
	}
};
