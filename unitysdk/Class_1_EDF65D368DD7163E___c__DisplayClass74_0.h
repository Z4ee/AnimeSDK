#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;
class Class_1_EDF65D368DD7163E;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x145A1C20)
#define CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS74_0__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__0_OFFSET UNITYSDK_OFFSET(0x145A5480)

inline static constexpr unsigned int Class_1_EDF65D368DD7163E___c__DisplayClass74_0_TypeDefinitionIndex = 66655;

class Class_1_EDF65D368DD7163E___c__DisplayClass74_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* pCaster; // 0x10
	::RPG::GameCore::GameEntity* curActionEntity; // 0x18
	::Class_1_DDDB57AA67C3A9EA* curBarItem; // 0x20
	::Class_1_EDF65D368DD7163E* __4__this; // 0x28
	::RPG::GameCore::SkillType skillType; // 0x30
	::System::Int32 priority; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnCasterModifierPreviewAffectTargets_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS74_0__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__0_OFFSET))(this, a1);
	}
};
