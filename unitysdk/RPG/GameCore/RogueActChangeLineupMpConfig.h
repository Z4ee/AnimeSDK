#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_METHOD_6_F1CD67A79384EA32_OFFSET UNITYSDK_OFFSET(0x1D02D500)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_METHOD_6_FA2528940E39AE4E_OFFSET UNITYSDK_OFFSET(0x1D02D550)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02D540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeLineupMpConfig_TypeDefinitionIndex = 18870;

	class RogueActChangeLineupMpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F1CD67A79384EA32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupMpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupMpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_METHOD_6_F1CD67A79384EA32_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FA2528940E39AE4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupMpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupMpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_METHOD_6_FA2528940E39AE4E_OFFSET))(a1, a2);
		}
	};
}
