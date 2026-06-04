#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EDF65D368DD7163E___c__DisplayClass74_0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierAffectedPreshowConfig; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS74_1__CTOR_OFFSET UNITYSDK_OFFSET(0x145A55E0)
#define CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS74_1__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__1_OFFSET UNITYSDK_OFFSET(0x145A55F0)

inline static constexpr unsigned int Class_1_EDF65D368DD7163E___c__DisplayClass74_1_TypeDefinitionIndex = 66656;

class Class_1_EDF65D368DD7163E___c__DisplayClass74_1 : public ::System::Object
{
public:
	::Class_1_EDF65D368DD7163E___c__DisplayClass74_0* CS___8__locals1; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x18
	::RPG::GameCore::ModifierAffectedPreshowConfig* pPreshowConfig; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS74_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnCasterModifierPreviewAffectTargets_b__1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS74_1__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__1_OFFSET))(this, a1, a2);
	}
};
