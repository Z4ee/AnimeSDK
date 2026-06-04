#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_75DBBBC880985ABC.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixPredicateA; }

#define CLASS_4_0ED3E774484252E6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x142F1B00)
#define CLASS_4_0ED3E774484252E6__CTOR_OFFSET UNITYSDK_OFFSET(0x142F1A80)
#define CLASS_4_0ED3E774484252E6___IFIXBASEPROXY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x142F1B40)

inline static constexpr unsigned int Class_4_0ED3E774484252E6_TypeDefinitionIndex = 52107;

class Class_4_0ED3E774484252E6 : public ::Class_3_75DBBBC880985ABC
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + CLASS_4_0ED3E774484252E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0ED3E774484252E6_EVALUATE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0ED3E774484252E6___IFIXBASEPROXY_EVALUATE_OFFSET))(this);
	}
};
