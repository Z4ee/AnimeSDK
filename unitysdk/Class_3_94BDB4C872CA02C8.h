#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCharacterDamageType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_94BDB4C872CA02C8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x147047D0)
#define CLASS_3_94BDB4C872CA02C8__CTOR_OFFSET UNITYSDK_OFFSET(0x147047A0)

inline static constexpr unsigned int Class_3_94BDB4C872CA02C8_TypeDefinitionIndex = 52016;

class Class_3_94BDB4C872CA02C8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCharacterDamageType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCharacterDamageType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCharacterDamageType*))((::PBYTE)hIl2Cpp + CLASS_3_94BDB4C872CA02C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_94BDB4C872CA02C8_EVALUATE_OFFSET))(this);
	}
};
