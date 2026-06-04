#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_6_419E5DCF615E2870_OFFSET UNITYSDK_OFFSET(0x19AF6F00)
#define RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_6_4E93945C37C23FFD_OFFSET UNITYSDK_OFFSET(0x19AF6CE0)
#define RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF6E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRepairRogueMiracleConfig_TypeDefinitionIndex = 18578;

	class RogueActRepairRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_4E93945C37C23FFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRepairRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRepairRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_6_4E93945C37C23FFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_419E5DCF615E2870(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRepairRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRepairRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_6_419E5DCF615E2870_OFFSET))(a1, a2);
		}
	};
}
