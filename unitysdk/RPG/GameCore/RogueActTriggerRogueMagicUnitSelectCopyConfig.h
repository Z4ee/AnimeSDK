#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG_METHOD_6_45D90CE469C96246_OFFSET UNITYSDK_OFFSET(0x1D9A2340)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG_METHOD_6_4964B3C31501EAE2_OFFSET UNITYSDK_OFFSET(0x1D9A2390)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A2380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectCopyConfig_TypeDefinitionIndex = 19685;

	class RogueActTriggerRogueMagicUnitSelectCopyConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_45D90CE469C96246(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCopyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCopyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG_METHOD_6_45D90CE469C96246_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4964B3C31501EAE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCopyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCopyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCOPYCONFIG_METHOD_6_4964B3C31501EAE2_OFFSET))(a1, a2);
		}
	};
}
