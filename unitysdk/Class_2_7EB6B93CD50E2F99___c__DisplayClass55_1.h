#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DF42E136544C98;
namespace RPG::GameCore { class ModifierHint; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_1__CTOR_OFFSET UNITYSDK_OFFSET(0x96F9EC0)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_1___SETUPMODIFIERHINTS_B__3_OFFSET UNITYSDK_OFFSET(0x96F9F50)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass55_1_TypeDefinitionIndex = 65733;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass55_1 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_1__CTOR_OFFSET))(this);
	}

	::Class_1_52DF42E136544C98* __SetupModifierHints_b__3(::RPG::GameCore::ModifierHint* hint)
	{
		return ((::Class_1_52DF42E136544C98*(*)(::PVOID, ::RPG::GameCore::ModifierHint*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_1___SETUPMODIFIERHINTS_B__3_OFFSET))(this, hint);
	}
};
