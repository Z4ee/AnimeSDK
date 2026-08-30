#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG_METHOD_3_5CF9BF9C9376B645_OFFSET UNITYSDK_OFFSET(0x1D3FAA30)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG_METHOD_3_FD1B4972F0D1BEE1_OFFSET UNITYSDK_OFFSET(0x1D3FA9E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FAA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyRoomBattleRoundConfig_TypeDefinitionIndex = 17520;

	class RogueModifierModifyRoomBattleRoundConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD1B4972F0D1BEE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyRoomBattleRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyRoomBattleRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG_METHOD_3_FD1B4972F0D1BEE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5CF9BF9C9376B645(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyRoomBattleRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyRoomBattleRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG_METHOD_3_5CF9BF9C9376B645_OFFSET))(a1, a2);
		}
	};
}
