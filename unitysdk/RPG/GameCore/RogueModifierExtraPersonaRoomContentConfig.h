#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_METHOD_3_5F7DE683E1EC62C7_OFFSET UNITYSDK_OFFSET(0x17632280)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_METHOD_3_C3C74386971D375E_OFFSET UNITYSDK_OFFSET(0x17632350)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17632300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExtraPersonaRoomContentConfig_TypeDefinitionIndex = 16350;

	class RogueModifierExtraPersonaRoomContentConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F7DE683E1EC62C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_METHOD_3_5F7DE683E1EC62C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C3C74386971D375E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_METHOD_3_C3C74386971D375E_OFFSET))(a1, a2);
		}
	};
}
