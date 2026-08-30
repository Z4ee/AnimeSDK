#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_METHOD_6_2EA2D1EB1FAC893F_OFFSET UNITYSDK_OFFSET(0x1D3B7FF0)
#define RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_METHOD_6_8FC65DD058CDF543_OFFSET UNITYSDK_OFFSET(0x1D3B8040)
#define RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B8030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAddInProgressStyleExpConfig_TypeDefinitionIndex = 19481;

	class RogueActPersonaAddInProgressStyleExpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2EA2D1EB1FAC893F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_METHOD_6_2EA2D1EB1FAC893F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8FC65DD058CDF543(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_METHOD_6_8FC65DD058CDF543_OFFSET))(a1, a2);
		}
	};
}
