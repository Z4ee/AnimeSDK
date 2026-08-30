#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG_METHOD_3_2406CA0747BE10EC_OFFSET UNITYSDK_OFFSET(0x1EEF9100)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG_METHOD_3_7C17365C673CFEF0_OFFSET UNITYSDK_OFFSET(0x1EEF90B0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF90F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnModifierCustomEventConfig_TypeDefinitionIndex = 17482;

	class RogueModifierExecuteActionOnModifierCustomEventConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C17365C673CFEF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnModifierCustomEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnModifierCustomEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG_METHOD_3_7C17365C673CFEF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2406CA0747BE10EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnModifierCustomEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnModifierCustomEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG_METHOD_3_2406CA0747BE10EC_OFFSET))(a1, a2);
		}
	};
}
