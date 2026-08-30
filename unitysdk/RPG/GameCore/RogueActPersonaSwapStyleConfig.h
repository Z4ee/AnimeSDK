#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG_METHOD_6_043F901AF67E5B0C_OFFSET UNITYSDK_OFFSET(0x1D3BA520)
#define RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG_METHOD_6_538FCBF700F4B290_OFFSET UNITYSDK_OFFSET(0x1D3BA4D0)
#define RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BA510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSwapStyleConfig_TypeDefinitionIndex = 19484;

	class RogueActPersonaSwapStyleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_538FCBF700F4B290(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSwapStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSwapStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG_METHOD_6_538FCBF700F4B290_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_043F901AF67E5B0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSwapStyleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSwapStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG_METHOD_6_043F901AF67E5B0C_OFFSET))(a1, a2);
		}
	};
}
