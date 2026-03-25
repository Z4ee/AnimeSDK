#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsSplitDamage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_275D3E0968983648_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD7F6690)
#define CLASS_3_275D3E0968983648__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F6660)

inline static constexpr unsigned int Class_3_275D3E0968983648_TypeDefinitionIndex = 43755;

class Class_3_275D3E0968983648 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsSplitDamage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsSplitDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsSplitDamage*))((::PBYTE)hIl2Cpp + CLASS_3_275D3E0968983648__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_275D3E0968983648_EVALUATE_OFFSET))(this);
	}
};
