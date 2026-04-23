#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_METHOD_3_91FE6AD754CBA833_OFFSET UNITYSDK_OFFSET(0x18D3E7A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_METHOD_3_A7D034388AB1F87A_OFFSET UNITYSDK_OFFSET(0x18D3E6D0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3E750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRoomCardReplenishConfig_TypeDefinitionIndex = 16940;

	class RogueModifierExecuteActionOnRoomCardReplenishConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A7D034388AB1F87A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_METHOD_3_A7D034388AB1F87A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91FE6AD754CBA833(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_METHOD_3_91FE6AD754CBA833_OFFSET))(a1, a2);
		}
	};
}
