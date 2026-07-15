#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByCheckGameMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6AC8963EE536FB80_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1709F720)
#define CLASS_3_6AC8963EE536FB80__CTOR_OFFSET UNITYSDK_OFFSET(0x1709F6F0)

inline static constexpr unsigned int Class_3_6AC8963EE536FB80_TypeDefinitionIndex = 51979;

class Class_3_6AC8963EE536FB80 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByCheckGameMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCheckGameMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCheckGameMode*))((::PBYTE)hIl2Cpp + CLASS_3_6AC8963EE536FB80__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6AC8963EE536FB80_EVALUATE_OFFSET))(this);
	}
};
