#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByIsLocateAtArea; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AAD77FE104DD0CE2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17C9F750)
#define CLASS_3_AAD77FE104DD0CE2__CTOR_OFFSET UNITYSDK_OFFSET(0x17C9F720)

inline static constexpr unsigned int Class_3_AAD77FE104DD0CE2_TypeDefinitionIndex = 51995;

class Class_3_AAD77FE104DD0CE2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByIsLocateAtArea*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + CLASS_3_AAD77FE104DD0CE2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAD77FE104DD0CE2_EVALUATE_OFFSET))(this);
	}
};
