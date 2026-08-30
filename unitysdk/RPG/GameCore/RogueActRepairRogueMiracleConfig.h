#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_6_365A9BB5F49C9E74_OFFSET UNITYSDK_OFFSET(0x1EE88980)
#define RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_6_419E5DCF615E2870_OFFSET UNITYSDK_OFFSET(0x1EE889D0)
#define RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE889C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRepairRogueMiracleConfig_TypeDefinitionIndex = 19380;

	class RogueActRepairRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_365A9BB5F49C9E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRepairRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRepairRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_6_365A9BB5F49C9E74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_419E5DCF615E2870(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRepairRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRepairRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_6_419E5DCF615E2870_OFFSET))(a1, a2);
		}
	};
}
