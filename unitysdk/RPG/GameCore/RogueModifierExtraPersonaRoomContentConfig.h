#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_METHOD_3_A17D1E285AE62E42_OFFSET UNITYSDK_OFFSET(0x1EEF9AD0)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_METHOD_3_C3C74386971D375E_OFFSET UNITYSDK_OFFSET(0x1EEF9B20)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF9B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExtraPersonaRoomContentConfig_TypeDefinitionIndex = 17586;

	class RogueModifierExtraPersonaRoomContentConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A17D1E285AE62E42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_METHOD_3_A17D1E285AE62E42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C3C74386971D375E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_METHOD_3_C3C74386971D375E_OFFSET))(a1, a2);
		}
	};
}
