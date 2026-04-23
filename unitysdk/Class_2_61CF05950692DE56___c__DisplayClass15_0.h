#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_61CF05950692DE56___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97E2F90)
#define CLASS_2_61CF05950692DE56___C__DISPLAYCLASS15_0___ONBATTLEABILITYCURRENTHPCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x97E3D10)

inline static constexpr unsigned int Class_2_61CF05950692DE56___c__DisplayClass15_0_TypeDefinitionIndex = 66379;

class Class_2_61CF05950692DE56___c__DisplayClass15_0 : public ::System::Object
{
public:
	::RPG::GameCore::AbilityCurrentHPChange* evt; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnBattleAbilityCurrentHPChange_b__0(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___C__DISPLAYCLASS15_0___ONBATTLEABILITYCURRENTHPCHANGE_B__0_OFFSET))(this, entity);
	}
};
