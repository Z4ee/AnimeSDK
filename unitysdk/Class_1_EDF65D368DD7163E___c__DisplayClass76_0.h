#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_EDF65D368DD7163E;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE647820)
#define CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS76_0__ONCASTERMODIFIERPREVIEWCREATEENTITIES_B__0_OFFSET UNITYSDK_OFFSET(0xE64B5C0)

inline static constexpr unsigned int Class_1_EDF65D368DD7163E___c__DisplayClass76_0_TypeDefinitionIndex = 65723;

class Class_1_EDF65D368DD7163E___c__DisplayClass76_0 : public ::System::Object
{
public:
	::Class_1_EDF65D368DD7163E* __4__this; // 0x10
	::RPG::GameCore::SkillType skillType; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnCasterModifierPreviewCreateEntities_b__0(::RPG::GameCore::TurnBasedModifierInstance* modifier)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS76_0__ONCASTERMODIFIERPREVIEWCREATEENTITIES_B__0_OFFSET))(this, modifier);
	}
};
