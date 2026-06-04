#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_METHOD_6_8FC65DD058CDF543_OFFSET UNITYSDK_OFFSET(0x19AE97F0)
#define RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_METHOD_6_9CD78D5EE9C04F36_OFFSET UNITYSDK_OFFSET(0x19AE95D0)
#define RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE9710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAddInProgressStyleExpConfig_TypeDefinitionIndex = 18678;

	class RogueActPersonaAddInProgressStyleExpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9CD78D5EE9C04F36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_METHOD_6_9CD78D5EE9C04F36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8FC65DD058CDF543(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_METHOD_6_8FC65DD058CDF543_OFFSET))(a1, a2);
		}
	};
}
