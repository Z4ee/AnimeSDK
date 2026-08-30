#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

class Class_1_A474572029D08468;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_2_51BFA7C7D45F9465_CLASS_1_AB9969383B2482DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1546AA20)

inline static constexpr unsigned int Class_2_51BFA7C7D45F9465_Class_1_AB9969383B2482DF_TypeDefinitionIndex = 71811;

class Class_2_51BFA7C7D45F9465_Class_1_AB9969383B2482DF : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x10
	::Class_1_A474572029D08468* HLIIPKKCPOM; // 0x18
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x20
	::RPG::GameCore::SkillData* IJGAPCNDIAG; // 0x28
	::RPG::Client::UISkillIndex KNKEPHGJENN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_CLASS_1_AB9969383B2482DF__CTOR_OFFSET))(this);
	}
};
