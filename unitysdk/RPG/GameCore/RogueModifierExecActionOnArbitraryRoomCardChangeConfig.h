#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_METHOD_3_0B274F3D8B447345_OFFSET UNITYSDK_OFFSET(0x1EEF8210)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_METHOD_3_49E240432235BBC9_OFFSET UNITYSDK_OFFSET(0x1EEF8260)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF8250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecActionOnArbitraryRoomCardChangeConfig_TypeDefinitionIndex = 17655;

	class RogueModifierExecActionOnArbitraryRoomCardChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B274F3D8B447345(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_METHOD_3_0B274F3D8B447345_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_49E240432235BBC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_METHOD_3_49E240432235BBC9_OFFSET))(a1, a2);
		}
	};
}
