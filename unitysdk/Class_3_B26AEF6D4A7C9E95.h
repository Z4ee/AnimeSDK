#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsAutoBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B26AEF6D4A7C9E95_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1837FAA0)
#define CLASS_3_B26AEF6D4A7C9E95__CTOR_OFFSET UNITYSDK_OFFSET(0x1837FA70)

inline static constexpr unsigned int Class_3_B26AEF6D4A7C9E95_TypeDefinitionIndex = 52160;

class Class_3_B26AEF6D4A7C9E95 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsAutoBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + CLASS_3_B26AEF6D4A7C9E95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B26AEF6D4A7C9E95_EVALUATE_OFFSET))(this);
	}
};
