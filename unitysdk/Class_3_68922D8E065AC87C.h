#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTopActionDelayTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_68922D8E065AC87C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1571C4A0)
#define CLASS_3_68922D8E065AC87C__CTOR_OFFSET UNITYSDK_OFFSET(0x1571C470)

inline static constexpr unsigned int Class_3_68922D8E065AC87C_TypeDefinitionIndex = 54906;

class Class_3_68922D8E065AC87C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTopActionDelayTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTopActionDelayTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTopActionDelayTarget*))((::PBYTE)hIl2Cpp + CLASS_3_68922D8E065AC87C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68922D8E065AC87C_EVALUATE_OFFSET))(this);
	}
};
