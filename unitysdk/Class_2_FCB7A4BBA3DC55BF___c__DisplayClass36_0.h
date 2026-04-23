#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FCB7A4BBA3DC55BF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_2_FCB7A4BBA3DC55BF___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x123F1280)
#define CLASS_2_FCB7A4BBA3DC55BF___C__DISPLAYCLASS36_0__SETUPSKILL_B__0_OFFSET UNITYSDK_OFFSET(0x123F3C80)

inline static constexpr unsigned int Class_2_FCB7A4BBA3DC55BF___c__DisplayClass36_0_TypeDefinitionIndex = 66243;

class Class_2_FCB7A4BBA3DC55BF___c__DisplayClass36_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* entity; // 0x10
	::Class_2_FCB7A4BBA3DC55BF* __4__this; // 0x18
	::RPG::GameCore::SkillData* skillData; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCB7A4BBA3DC55BF___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupSkill_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCB7A4BBA3DC55BF___C__DISPLAYCLASS36_0__SETUPSKILL_B__0_OFFSET))(this);
	}
};
