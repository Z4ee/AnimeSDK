#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_METHOD_3_4860459194D2416F_OFFSET UNITYSDK_OFFSET(0x1D3F8C20)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_METHOD_3_91FE6AD754CBA833_OFFSET UNITYSDK_OFFSET(0x1D3F8C70)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F8C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRoomCardReplenishConfig_TypeDefinitionIndex = 17631;

	class RogueModifierExecuteActionOnRoomCardReplenishConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4860459194D2416F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_METHOD_3_4860459194D2416F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91FE6AD754CBA833(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_METHOD_3_91FE6AD754CBA833_OFFSET))(a1, a2);
		}
	};
}
