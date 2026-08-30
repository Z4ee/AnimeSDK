#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareMatchThreeBirdLocation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E1B11603C50E0955_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18877BB0)
#define CLASS_3_E1B11603C50E0955__CTOR_OFFSET UNITYSDK_OFFSET(0x18877B80)

inline static constexpr unsigned int Class_3_E1B11603C50E0955_TypeDefinitionIndex = 53285;

class Class_3_E1B11603C50E0955 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareMatchThreeBirdLocation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + CLASS_3_E1B11603C50E0955__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1B11603C50E0955_EVALUATE_OFFSET))(this);
	}
};
