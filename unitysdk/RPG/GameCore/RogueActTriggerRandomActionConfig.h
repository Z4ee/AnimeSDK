#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_METHOD_6_A8F42528B73E2780_OFFSET UNITYSDK_OFFSET(0x18CD6040)
#define RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_METHOD_6_AA4437C85AD419DD_OFFSET UNITYSDK_OFFSET(0x18CD6260)
#define RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD6180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRandomActionConfig_TypeDefinitionIndex = 18701;

	class RogueActTriggerRandomActionConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A8F42528B73E2780(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRandomActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRandomActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_METHOD_6_A8F42528B73E2780_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AA4437C85AD419DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRandomActionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRandomActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_METHOD_6_AA4437C85AD419DD_OFFSET))(a1, a2);
		}
	};
}
