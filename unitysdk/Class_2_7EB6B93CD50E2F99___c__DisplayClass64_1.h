#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DF42E136544C98;
namespace RPG::GameCore { class ModifierHint; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS64_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFA955C0)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS64_1___SETUPMODIFIERHINTS_B__3_OFFSET UNITYSDK_OFFSET(0xFA95630)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass64_1_TypeDefinitionIndex = 71281;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass64_1 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS64_1__CTOR_OFFSET))(this);
	}

	::Class_1_52DF42E136544C98* __SetupModifierHints_b__3(::RPG::GameCore::ModifierHint* a1)
	{
		return ((::Class_1_52DF42E136544C98*(*)(::PVOID, ::RPG::GameCore::ModifierHint*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS64_1___SETUPMODIFIERHINTS_B__3_OFFSET))(this, a1);
	}
};
