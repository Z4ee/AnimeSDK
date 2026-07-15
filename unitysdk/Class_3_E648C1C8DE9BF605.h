#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"

namespace RPG::GameCore { class ByIsInModifierCallback; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E648C1C8DE9BF605_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16A21610)
#define CLASS_3_E648C1C8DE9BF605__CTOR_OFFSET UNITYSDK_OFFSET(0x16A21410)

inline static constexpr unsigned int Class_3_E648C1C8DE9BF605_TypeDefinitionIndex = 52194;

class Class_3_E648C1C8DE9BF605 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsInModifierCallback*>
{
public:
	::Il2CppArray<::RPG::GameCore::StringHash>* Field_3_0; // 0x28
	::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* Field_3_1; // 0x30
	::Il2CppArray<::RPG::GameCore::AbilityProperty>* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInModifierCallback* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInModifierCallback*))((::PBYTE)hIl2Cpp + CLASS_3_E648C1C8DE9BF605__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E648C1C8DE9BF605_EVALUATE_OFFSET))(this);
	}
};
