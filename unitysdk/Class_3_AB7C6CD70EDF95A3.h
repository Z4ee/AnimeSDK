#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTargetValid; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AB7C6CD70EDF95A3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A6CB900)
#define CLASS_3_AB7C6CD70EDF95A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CB8D0)

inline static constexpr unsigned int Class_3_AB7C6CD70EDF95A3_TypeDefinitionIndex = 54903;

class Class_3_AB7C6CD70EDF95A3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTargetValid*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTargetValid* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTargetValid*))((::PBYTE)hIl2Cpp + CLASS_3_AB7C6CD70EDF95A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB7C6CD70EDF95A3_EVALUATE_OFFSET))(this);
	}
};
