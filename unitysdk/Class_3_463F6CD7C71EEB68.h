#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class BySharedSummonUnitInUse; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_463F6CD7C71EEB68_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11441000)
#define CLASS_3_463F6CD7C71EEB68__CTOR_OFFSET UNITYSDK_OFFSET(0x11440FD0)

inline static constexpr unsigned int Class_3_463F6CD7C71EEB68_TypeDefinitionIndex = 46769;

class Class_3_463F6CD7C71EEB68 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::BySharedSummonUnitInUse*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySharedSummonUnitInUse* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySharedSummonUnitInUse*))((::PBYTE)hIl2Cpp + CLASS_3_463F6CD7C71EEB68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_463F6CD7C71EEB68_EVALUATE_OFFSET))(this);
	}
};
