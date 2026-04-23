#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_METHOD_3_003DFC71FB5199B4_OFFSET UNITYSDK_OFFSET(0x18D3C0F0)
#define RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_METHOD_3_5BE4BF30B68717AD_OFFSET UNITYSDK_OFFSET(0x18D33D80)
#define RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D33D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierEmptyConfig_TypeDefinitionIndex = 16790;

	class RogueModifierEmptyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_003DFC71FB5199B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEmptyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEmptyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_METHOD_3_003DFC71FB5199B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5BE4BF30B68717AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEmptyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEmptyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_METHOD_3_5BE4BF30B68717AD_OFFSET))(a1, a2);
		}
	};
}
