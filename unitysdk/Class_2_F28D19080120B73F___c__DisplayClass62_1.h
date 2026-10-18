#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DF42E136544C98;
namespace RPG::GameCore { class ModifierHint; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_2_F28D19080120B73F___C__DISPLAYCLASS62_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFECD970)
#define CLASS_2_F28D19080120B73F___C__DISPLAYCLASS62_1___SETUPMODIFIERHINTS_B__3_OFFSET UNITYSDK_OFFSET(0xFECD9E0)

inline static constexpr unsigned int Class_2_F28D19080120B73F___c__DisplayClass62_1_TypeDefinitionIndex = 71320;

class Class_2_F28D19080120B73F___c__DisplayClass62_1 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___C__DISPLAYCLASS62_1__CTOR_OFFSET))(this);
	}

	::Class_1_52DF42E136544C98* __SetupModifierHints_b__3(::RPG::GameCore::ModifierHint* a1)
	{
		return ((::Class_1_52DF42E136544C98*(*)(::PVOID, ::RPG::GameCore::ModifierHint*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___C__DISPLAYCLASS62_1___SETUPMODIFIERHINTS_B__3_OFFSET))(this, a1);
	}
};
