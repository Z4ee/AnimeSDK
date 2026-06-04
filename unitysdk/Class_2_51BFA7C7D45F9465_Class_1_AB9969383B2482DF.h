#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

class Class_1_D1797279B49332E9;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_2_51BFA7C7D45F9465_CLASS_1_AB9969383B2482DF__CTOR_OFFSET UNITYSDK_OFFSET(0x136714F0)

inline static constexpr unsigned int Class_2_51BFA7C7D45F9465_Class_1_AB9969383B2482DF_TypeDefinitionIndex = 67160;

class Class_2_51BFA7C7D45F9465_Class_1_AB9969383B2482DF : public ::System::Object
{
public:
	::Class_1_D1797279B49332E9* Field_1_0; // 0x10
	::RPG::GameCore::SkillData* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::BattleInstance* Field_1_3; // 0x28
	::RPG::Client::UISkillIndex Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_CLASS_1_AB9969383B2482DF__CTOR_OFFSET))(this);
	}
};
