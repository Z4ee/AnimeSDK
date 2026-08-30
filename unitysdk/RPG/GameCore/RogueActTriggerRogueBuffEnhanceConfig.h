#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_METHOD_6_3BC28C65458B33EF_OFFSET UNITYSDK_OFFSET(0x1EE894C0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_METHOD_6_8560B1AB05849AB3_OFFSET UNITYSDK_OFFSET(0x1EE89510)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE89500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffEnhanceConfig_TypeDefinitionIndex = 19355;

	class RogueActTriggerRogueBuffEnhanceConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_3BC28C65458B33EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_METHOD_6_3BC28C65458B33EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8560B1AB05849AB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_METHOD_6_8560B1AB05849AB3_OFFSET))(a1, a2);
		}
	};
}
