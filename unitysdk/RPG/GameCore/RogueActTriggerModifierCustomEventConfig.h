#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG_METHOD_6_0BF949C56DEF4B3E_OFFSET UNITYSDK_OFFSET(0x175CA360)
#define RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG_METHOD_6_3771379B84F23BBB_OFFSET UNITYSDK_OFFSET(0x175CA140)
#define RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175CA280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerModifierCustomEventConfig_TypeDefinitionIndex = 18132;

	class RogueActTriggerModifierCustomEventConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_3771379B84F23BBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerModifierCustomEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerModifierCustomEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG_METHOD_6_3771379B84F23BBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0BF949C56DEF4B3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerModifierCustomEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerModifierCustomEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG_METHOD_6_0BF949C56DEF4B3E_OFFSET))(a1, a2);
		}
	};
}
