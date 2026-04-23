#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG_METHOD_6_32CD357D3F7A9A57_OFFSET UNITYSDK_OFFSET(0x18CD8570)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG_METHOD_6_4964B3C31501EAE2_OFFSET UNITYSDK_OFFSET(0x18CD8790)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD86B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectCopyConfig_TypeDefinitionIndex = 18685;

	class RogueActTriggerRogueMagicUnitSelectCopyConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_32CD357D3F7A9A57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCopyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCopyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG_METHOD_6_32CD357D3F7A9A57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4964B3C31501EAE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCopyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCopyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG_METHOD_6_4964B3C31501EAE2_OFFSET))(a1, a2);
		}
	};
}
