#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierModifyBlackboardBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG_METHOD_4_A56BA30B8BA9645A_OFFSET UNITYSDK_OFFSET(0x1D3F9AD0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG_METHOD_4_F5A900F221D1601E_OFFSET UNITYSDK_OFFSET(0x1D3F9B60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F9AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBlackboardByRoomCardLevelChangeConfig_TypeDefinitionIndex = 17486;

	class RogueModifierModifyBlackboardByRoomCardLevelChangeConfig : public ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F5A900F221D1601E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByRoomCardLevelChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBlackboardByRoomCardLevelChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG_METHOD_4_F5A900F221D1601E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A56BA30B8BA9645A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByRoomCardLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBlackboardByRoomCardLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG_METHOD_4_A56BA30B8BA9645A_OFFSET))(a1, a2);
		}
	};
}
