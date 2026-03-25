#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_METHOD_3_49E240432235BBC9_OFFSET UNITYSDK_OFFSET(0x1762EA70)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_METHOD_3_76B4D742922242F0_OFFSET UNITYSDK_OFFSET(0x1762E9A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762EA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecActionOnArbitraryRoomCardChangeConfig_TypeDefinitionIndex = 16410;

	class RogueModifierExecActionOnArbitraryRoomCardChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76B4D742922242F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_METHOD_3_76B4D742922242F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_49E240432235BBC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_METHOD_3_49E240432235BBC9_OFFSET))(a1, a2);
		}
	};
}
