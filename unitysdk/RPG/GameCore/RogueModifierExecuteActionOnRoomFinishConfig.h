#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG_METHOD_3_1F69DEA5057F2F7C_OFFSET UNITYSDK_OFFSET(0x18D3E880)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG_METHOD_3_FA5E099711E1BB85_OFFSET UNITYSDK_OFFSET(0x18D3E7B0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3E830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRoomFinishConfig_TypeDefinitionIndex = 16798;

	class RogueModifierExecuteActionOnRoomFinishConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA5E099711E1BB85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomFinishConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomFinishConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG_METHOD_3_FA5E099711E1BB85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F69DEA5057F2F7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomFinishConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG_METHOD_3_1F69DEA5057F2F7C_OFFSET))(a1, a2);
		}
	};
}
