#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_6_651F22DBFDC38ACE_OFFSET UNITYSDK_OFFSET(0x175B2510)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_6_AED03C292983B7BB_OFFSET UNITYSDK_OFFSET(0x175B2730)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B2650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeLineupHpConfig_TypeDefinitionIndex = 17980;

	class RogueActChangeLineupHpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_651F22DBFDC38ACE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_6_651F22DBFDC38ACE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AED03C292983B7BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_METHOD_6_AED03C292983B7BB_OFFSET))(a1, a2);
		}
	};
}
