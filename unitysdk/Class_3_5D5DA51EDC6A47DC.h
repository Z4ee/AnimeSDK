#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByContainsCharacterState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5D5DA51EDC6A47DC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x185A6400)
#define CLASS_3_5D5DA51EDC6A47DC__CTOR_OFFSET UNITYSDK_OFFSET(0x185A63D0)

inline static constexpr unsigned int Class_3_5D5DA51EDC6A47DC_TypeDefinitionIndex = 52406;

class Class_3_5D5DA51EDC6A47DC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByContainsCharacterState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainsCharacterState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainsCharacterState*))((::PBYTE)hIl2Cpp + CLASS_3_5D5DA51EDC6A47DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D5DA51EDC6A47DC_EVALUATE_OFFSET))(this);
	}
};
