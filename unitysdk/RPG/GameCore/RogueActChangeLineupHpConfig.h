#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_6_0A61FE22DE3772D7_OFFSET UNITYSDK_OFFSET(0x1D02D4A0)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_6_AED03C292983B7BB_OFFSET UNITYSDK_OFFSET(0x1D02D4F0)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02D4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeLineupHpConfig_TypeDefinitionIndex = 18868;

	class RogueActChangeLineupHpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0A61FE22DE3772D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_6_0A61FE22DE3772D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AED03C292983B7BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_6_AED03C292983B7BB_OFFSET))(a1, a2);
		}
	};
}
