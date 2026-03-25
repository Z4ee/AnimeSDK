#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;
class Class_1_7D0225C5AD8313DD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99C9CB0)
#define CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS73_0__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__0_OFFSET UNITYSDK_OFFSET(0x99CD110)

inline static constexpr unsigned int Class_1_7D0225C5AD8313DD___c__DisplayClass73_0_TypeDefinitionIndex = 58428;

class Class_1_7D0225C5AD8313DD___c__DisplayClass73_0 : public ::System::Object
{
public:
	::Class_1_7D0225C5AD8313DD* __4__this; // 0x10
	::Class_1_02D30900317D93FD* curBarItem; // 0x18
	::RPG::GameCore::GameEntity* curActionEntity; // 0x20
	::RPG::GameCore::GameEntity* pCaster; // 0x28
	::System::Int32 priority; // 0x30
	::RPG::GameCore::SkillType skillType; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnCasterModifierPreviewAffectTargets_b__0(::RPG::GameCore::TurnBasedModifierInstance* modifier)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS73_0__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__0_OFFSET))(this, modifier);
	}
};
