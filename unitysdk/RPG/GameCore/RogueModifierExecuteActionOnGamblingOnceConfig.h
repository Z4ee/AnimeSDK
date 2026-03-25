#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGAMBLINGONCECONFIG_METHOD_3_7134DA4D69890E42_OFFSET UNITYSDK_OFFSET(0x17630830)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGAMBLINGONCECONFIG_METHOD_3_7611E972334D8F4B_OFFSET UNITYSDK_OFFSET(0x17630760)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGAMBLINGONCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x176307E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnGamblingOnceConfig_TypeDefinitionIndex = 16411;

	class RogueModifierExecuteActionOnGamblingOnceConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGAMBLINGONCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7611E972334D8F4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnGamblingOnceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnGamblingOnceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGAMBLINGONCECONFIG_METHOD_3_7611E972334D8F4B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7134DA4D69890E42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnGamblingOnceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnGamblingOnceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGAMBLINGONCECONFIG_METHOD_3_7134DA4D69890E42_OFFSET))(a1, a2);
		}
	};
}
