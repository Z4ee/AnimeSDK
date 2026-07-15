#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_METHOD_3_2EBFAE99DADC44BF_OFFSET UNITYSDK_OFFSET(0x1D165070)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_METHOD_3_C9E56DFC09014B3B_OFFSET UNITYSDK_OFFSET(0x1D165020)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaGetCoinOnRoomCardRemoveConfig_TypeDefinitionIndex = 17140;

	class RogueModifierPersonaGetCoinOnRoomCardRemoveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C9E56DFC09014B3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_METHOD_3_C9E56DFC09014B3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EBFAE99DADC44BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_METHOD_3_2EBFAE99DADC44BF_OFFSET))(a1, a2);
		}
	};
}
