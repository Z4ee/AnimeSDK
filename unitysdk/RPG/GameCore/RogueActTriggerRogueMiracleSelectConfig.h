#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG_METHOD_6_29858ECB3153842D_OFFSET UNITYSDK_OFFSET(0x1C49EE00)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG_METHOD_6_B5630DB4693BB991_OFFSET UNITYSDK_OFFSET(0x1C49EE50)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49EE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleSelectConfig_TypeDefinitionIndex = 18840;

	class RogueActTriggerRogueMiracleSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_29858ECB3153842D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG_METHOD_6_29858ECB3153842D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B5630DB4693BB991(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTCONFIG_METHOD_6_B5630DB4693BB991_OFFSET))(a1, a2);
		}
	};
}
