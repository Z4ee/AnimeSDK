#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_19D01C62D4162984;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS180_0__ADDMODIFIEREXTRAMAXLAYER_B__1_OFFSET UNITYSDK_OFFSET(0xAAAF750)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS180_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAA989A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAbilityComponent___c__DisplayClass180_0_TypeDefinitionIndex = 46538;

	class TurnBasedAbilityComponent___c__DisplayClass180_0 : public ::System::Object
	{
	public:
		::Class_1_19D01C62D4162984* pConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS180_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddModifierExtraMaxLayer_b__1(::RPG::GameCore::TurnBasedModifierInstance* pModifier)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS180_0__ADDMODIFIEREXTRAMAXLAYER_B__1_OFFSET))(this, pModifier);
		}
	};
}
