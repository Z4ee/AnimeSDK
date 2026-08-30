#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_METHOD_3_5BE4BF30B68717AD_OFFSET UNITYSDK_OFFSET(0x1EEF8020)
#define RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_METHOD_3_9A78C67E77E8D229_OFFSET UNITYSDK_OFFSET(0x1EEF7FD0)
#define RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF8010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierEmptyConfig_TypeDefinitionIndex = 17469;

	class RogueModifierEmptyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9A78C67E77E8D229(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEmptyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEmptyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_METHOD_3_9A78C67E77E8D229_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5BE4BF30B68717AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEmptyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEmptyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_METHOD_3_5BE4BF30B68717AD_OFFSET))(a1, a2);
		}
	};
}
