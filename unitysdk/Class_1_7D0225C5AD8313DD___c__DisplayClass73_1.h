#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0225C5AD8313DD___c__DisplayClass73_0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierAffectedPreshowConfig; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS73_1__CTOR_OFFSET UNITYSDK_OFFSET(0x99CD250)
#define CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS73_1__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__1_OFFSET UNITYSDK_OFFSET(0x99CD260)

inline static constexpr unsigned int Class_1_7D0225C5AD8313DD___c__DisplayClass73_1_TypeDefinitionIndex = 58429;

class Class_1_7D0225C5AD8313DD___c__DisplayClass73_1 : public ::System::Object
{
public:
	::RPG::GameCore::ModifierAffectedPreshowConfig* pPreshowConfig; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x18
	::Class_1_7D0225C5AD8313DD___c__DisplayClass73_0* CS___8__locals1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS73_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnCasterModifierPreviewAffectTargets_b__1(::RPG::GameCore::GameEntity* target, ::System::Boolean redirect)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS73_1__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__1_OFFSET))(this, target, redirect);
	}
};
