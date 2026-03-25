#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

class Class_1_D1797279B49332E9;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_FCB7A4BBA3DC55BF_CLASS_1_8103DE5C6BE3274F__CTOR_OFFSET UNITYSDK_OFFSET(0x878E0E0)

inline static constexpr unsigned int Class_2_FCB7A4BBA3DC55BF_Class_1_8103DE5C6BE3274F_TypeDefinitionIndex = 58874;

class Class_2_FCB7A4BBA3DC55BF_Class_1_8103DE5C6BE3274F : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* Field_1_0; // 0x10
	::Class_1_D1797279B49332E9* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_3; // 0x20
	::RPG::Client::UISkillIndex Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCB7A4BBA3DC55BF_CLASS_1_8103DE5C6BE3274F__CTOR_OFFSET))(this);
	}
};
