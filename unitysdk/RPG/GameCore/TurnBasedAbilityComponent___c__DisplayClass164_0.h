#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D41D7845C8B57A10;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS164_0__ADDMODIFIEREXTRAMAXLAYER_B__1_OFFSET UNITYSDK_OFFSET(0xE785EC0)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS164_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE7739B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAbilityComponent___c__DisplayClass164_0_TypeDefinitionIndex = 55062;

	class TurnBasedAbilityComponent___c__DisplayClass164_0 : public ::System::Object
	{
	public:
		::Class_1_D41D7845C8B57A10* pConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS164_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddModifierExtraMaxLayer_b__1(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS164_0__ADDMODIFIEREXTRAMAXLAYER_B__1_OFFSET))(this, a1);
		}
	};
}
