#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_EDF65D368DD7163E;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS84_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB628600)
#define CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS84_0__ONCASTERMODIFIERPREVIEWCREATEENTITIES_B__0_OFFSET UNITYSDK_OFFSET(0xB62C4D0)

inline static constexpr unsigned int Class_1_EDF65D368DD7163E___c__DisplayClass84_0_TypeDefinitionIndex = 71269;

class Class_1_EDF65D368DD7163E___c__DisplayClass84_0 : public ::System::Object
{
public:
	::Class_1_EDF65D368DD7163E* __4__this; // 0x10
	::RPG::GameCore::SkillType skillType; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS84_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnCasterModifierPreviewCreateEntities_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E___C__DISPLAYCLASS84_0__ONCASTERMODIFIERPREVIEWCREATEENTITIES_B__0_OFFSET))(this, a1);
	}
};
