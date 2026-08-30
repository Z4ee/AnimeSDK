#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_6_B1E6268D5A309B0B_OFFSET UNITYSDK_OFFSET(0x1D3BBBA0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_6_FE5AB1045C44BE67_OFFSET UNITYSDK_OFFSET(0x1D3BBB50)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BBB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectConfig_TypeDefinitionIndex = 19445;

	class RogueActTriggerRogueMagicUnitSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_FE5AB1045C44BE67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_6_FE5AB1045C44BE67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B1E6268D5A309B0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_6_B1E6268D5A309B0B_OFFSET))(a1, a2);
		}
	};
}
