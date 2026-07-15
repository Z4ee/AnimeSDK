#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsInCharacterIDGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8AE20F3E84B35C9E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16BC4610)
#define CLASS_3_8AE20F3E84B35C9E__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC45E0)

inline static constexpr unsigned int Class_3_8AE20F3E84B35C9E_TypeDefinitionIndex = 52190;

class Class_3_8AE20F3E84B35C9E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsInCharacterIDGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInCharacterIDGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInCharacterIDGroup*))((::PBYTE)hIl2Cpp + CLASS_3_8AE20F3E84B35C9E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AE20F3E84B35C9E_EVALUATE_OFFSET))(this);
	}
};
