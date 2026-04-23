#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_19D01C62D4162984;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS182_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB809790)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS182_0__REMOVEMODIFIEREXTRAMAXLAYER_B__1_OFFSET UNITYSDK_OFFSET(0xB81AAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAbilityComponent___c__DisplayClass182_0_TypeDefinitionIndex = 53229;

	class TurnBasedAbilityComponent___c__DisplayClass182_0 : public ::System::Object
	{
	public:
		::Class_1_19D01C62D4162984* pCurConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS182_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveModifierExtraMaxLayer_b__1(::RPG::GameCore::TurnBasedModifierInstance* pModifier)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS182_0__REMOVEMODIFIEREXTRAMAXLAYER_B__1_OFFSET))(this, pModifier);
		}
	};
}
