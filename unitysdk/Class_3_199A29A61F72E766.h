#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByInAnimZone; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_199A29A61F72E766_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14B4D690)
#define CLASS_3_199A29A61F72E766__CTOR_OFFSET UNITYSDK_OFFSET(0x14B4D660)

inline static constexpr unsigned int Class_3_199A29A61F72E766_TypeDefinitionIndex = 51989;

class Class_3_199A29A61F72E766 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByInAnimZone*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + CLASS_3_199A29A61F72E766__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_199A29A61F72E766_EVALUATE_OFFSET))(this);
	}
};
