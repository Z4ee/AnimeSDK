#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0225C5AD8313DD;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99C9F60)
#define CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS75_0__ONCASTERMODIFIERPREVIEWCREATEENTITIES_B__0_OFFSET UNITYSDK_OFFSET(0x99CDA80)

inline static constexpr unsigned int Class_1_7D0225C5AD8313DD___c__DisplayClass75_0_TypeDefinitionIndex = 58430;

class Class_1_7D0225C5AD8313DD___c__DisplayClass75_0 : public ::System::Object
{
public:
	::Class_1_7D0225C5AD8313DD* __4__this; // 0x10
	::RPG::GameCore::SkillType skillType; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnCasterModifierPreviewCreateEntities_b__0(::RPG::GameCore::TurnBasedModifierInstance* modifier)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD___C__DISPLAYCLASS75_0__ONCASTERMODIFIERPREVIEWCREATEENTITIES_B__0_OFFSET))(this, modifier);
	}
};
