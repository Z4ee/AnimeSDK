#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

class Class_1_A474572029D08468;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_B71FA21BC121C2FA_CLASS_1_8103DE5C6BE3274F__CTOR_OFFSET UNITYSDK_OFFSET(0x163F87D0)

inline static constexpr unsigned int Class_2_B71FA21BC121C2FA_Class_1_8103DE5C6BE3274F_TypeDefinitionIndex = 71831;

class Class_2_B71FA21BC121C2FA_Class_1_8103DE5C6BE3274F : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x10
	::Class_1_A474572029D08468* HLIIPKKCPOM; // 0x18
	::RPG::GameCore::GameEntity* ALLAIOIIIBN; // 0x20
	::RPG::Client::UISkillIndex GMDBHJKEAEI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_CLASS_1_8103DE5C6BE3274F__CTOR_OFFSET))(this);
	}
};
