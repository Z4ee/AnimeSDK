#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_METHOD_6_AA4630FF28967FF4_OFFSET UNITYSDK_OFFSET(0x1D02E5E0)
#define RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_METHOD_6_B589F318955809F0_OFFSET UNITYSDK_OFFSET(0x1D02E630)
#define RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02E620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActIncTournRogueTitanBlessProgressConfig_TypeDefinitionIndex = 18947;

	class RogueActIncTournRogueTitanBlessProgressConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_AA4630FF28967FF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_METHOD_6_AA4630FF28967FF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B589F318955809F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_METHOD_6_B589F318955809F0_OFFSET))(a1, a2);
		}
	};
}
