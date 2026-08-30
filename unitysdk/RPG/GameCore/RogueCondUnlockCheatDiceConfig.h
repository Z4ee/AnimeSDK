#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_6_70E7FA09396A94D4_OFFSET UNITYSDK_OFFSET(0x1D918DE0)
#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_6_8D344480ECB54AD0_OFFSET UNITYSDK_OFFSET(0x1D918E30)
#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D918E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondUnlockCheatDiceConfig_TypeDefinitionIndex = 19571;

	class RogueCondUnlockCheatDiceConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_70E7FA09396A94D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_6_70E7FA09396A94D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8D344480ECB54AD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_METHOD_6_8D344480ECB54AD0_OFFSET))(a1, a2);
		}
	};
}
