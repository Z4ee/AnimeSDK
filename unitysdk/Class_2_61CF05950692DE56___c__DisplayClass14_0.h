#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_61CF05950692DE56___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105FB2E0)
#define CLASS_2_61CF05950692DE56___C__DISPLAYCLASS14_0___ONBATTLEABILITYCURRENTHPCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x105FC070)

inline static constexpr unsigned int Class_2_61CF05950692DE56___c__DisplayClass14_0_TypeDefinitionIndex = 59008;

class Class_2_61CF05950692DE56___c__DisplayClass14_0 : public ::System::Object
{
public:
	::RPG::GameCore::AbilityCurrentHPChange* evt; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnBattleAbilityCurrentHPChange_b__0(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___C__DISPLAYCLASS14_0___ONBATTLEABILITYCURRENTHPCHANGE_B__0_OFFSET))(this, entity);
	}
};
