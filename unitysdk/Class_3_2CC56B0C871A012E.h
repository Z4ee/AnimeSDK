#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByComparePropStateNumber; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2CC56B0C871A012E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11775170)
#define CLASS_3_2CC56B0C871A012E__CTOR_OFFSET UNITYSDK_OFFSET(0x11775140)

inline static constexpr unsigned int Class_3_2CC56B0C871A012E_TypeDefinitionIndex = 50335;

class Class_3_2CC56B0C871A012E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByComparePropStateNumber*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropStateNumber* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropStateNumber*))((::PBYTE)hIl2Cpp + CLASS_3_2CC56B0C871A012E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC56B0C871A012E_EVALUATE_OFFSET))(this);
	}
};
