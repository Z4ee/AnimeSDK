#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_METHOD_6_30092C52AD80F218_OFFSET UNITYSDK_OFFSET(0x1D02D5B0)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_METHOD_6_B3A4D284E541A4DC_OFFSET UNITYSDK_OFFSET(0x1D02D560)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02D5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeLineupSpConfig_TypeDefinitionIndex = 18869;

	class RogueActChangeLineupSpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B3A4D284E541A4DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupSpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupSpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_METHOD_6_B3A4D284E541A4DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_30092C52AD80F218(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupSpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupSpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_METHOD_6_30092C52AD80F218_OFFSET))(a1, a2);
		}
	};
}
