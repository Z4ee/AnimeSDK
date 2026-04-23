#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_6_8D344480ECB54AD0_OFFSET UNITYSDK_OFFSET(0x18CF9340)
#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_6_E86E18EBF073ED46_OFFSET UNITYSDK_OFFSET(0x18CF9090)
#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF9210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondUnlockCheatDiceConfig_TypeDefinitionIndex = 18791;

	class RogueCondUnlockCheatDiceConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E86E18EBF073ED46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_6_E86E18EBF073ED46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8D344480ECB54AD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_6_8D344480ECB54AD0_OFFSET))(a1, a2);
		}
	};
}
