#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_61CF05950692DE56___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97E3100)
#define CLASS_2_61CF05950692DE56___C__DISPLAYCLASS16_0___ONBATTLEABILITYCURRENTSHIELDCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x97E3E00)

inline static constexpr unsigned int Class_2_61CF05950692DE56___c__DisplayClass16_0_TypeDefinitionIndex = 66380;

class Class_2_61CF05950692DE56___c__DisplayClass16_0 : public ::System::Object
{
public:
	::RPG::GameCore::AbilityCurrentShieldChange* evt; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnBattleAbilityCurrentShieldChange_b__0(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___C__DISPLAYCLASS16_0___ONBATTLEABILITYCURRENTSHIELDCHANGE_B__0_OFFSET))(this, entity);
	}
};
