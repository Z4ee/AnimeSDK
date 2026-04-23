#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_19D01C62D4162984;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS181_0__ADDMODIFIEREXTRAMAXLAYER_B__1_OFFSET UNITYSDK_OFFSET(0xB81AAD0)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS181_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB809530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAbilityComponent___c__DisplayClass181_0_TypeDefinitionIndex = 53228;

	class TurnBasedAbilityComponent___c__DisplayClass181_0 : public ::System::Object
	{
	public:
		::Class_1_19D01C62D4162984* pConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS181_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddModifierExtraMaxLayer_b__1(::RPG::GameCore::TurnBasedModifierInstance* pModifier)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS181_0__ADDMODIFIEREXTRAMAXLAYER_B__1_OFFSET))(this, pModifier);
		}
	};
}
