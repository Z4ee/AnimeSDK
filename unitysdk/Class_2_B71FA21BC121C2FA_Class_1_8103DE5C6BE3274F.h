#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

class Class_1_A474572029D08468;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_B71FA21BC121C2FA_CLASS_1_8103DE5C6BE3274F__CTOR_OFFSET UNITYSDK_OFFSET(0x151403F0)

inline static constexpr unsigned int Class_2_B71FA21BC121C2FA_Class_1_8103DE5C6BE3274F_TypeDefinitionIndex = 68632;

class Class_2_B71FA21BC121C2FA_Class_1_8103DE5C6BE3274F : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::BattleInstance* Field_1_1; // 0x18
	::Class_1_A474572029D08468* Field_1_2; // 0x20
	::RPG::Client::UISkillIndex Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_CLASS_1_8103DE5C6BE3274F__CTOR_OFFSET))(this);
	}
};
