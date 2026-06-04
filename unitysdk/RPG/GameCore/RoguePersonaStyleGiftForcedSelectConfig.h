#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONASTYLEGIFTFORCEDSELECTCONFIG_METHOD_2_109363217ED775BE_OFFSET UNITYSDK_OFFSET(0x19BBA0E0)
#define RPG_GAMECORE_ROGUEPERSONASTYLEGIFTFORCEDSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBA120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaStyleGiftForcedSelectConfig_TypeDefinitionIndex = 16967;

	class RoguePersonaStyleGiftForcedSelectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLEGIFTFORCEDSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_109363217ED775BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaStyleGiftForcedSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaStyleGiftForcedSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLEGIFTFORCEDSELECTCONFIG_METHOD_2_109363217ED775BE_OFFSET))(a1, a2);
		}
	};
}
