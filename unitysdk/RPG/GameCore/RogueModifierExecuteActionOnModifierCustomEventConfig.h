#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG_METHOD_3_2406CA0747BE10EC_OFFSET UNITYSDK_OFFSET(0x18D364E0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG_METHOD_3_C9DC1CF5F2AC01B5_OFFSET UNITYSDK_OFFSET(0x18D3D770)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D36490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnModifierCustomEventConfig_TypeDefinitionIndex = 16803;

	class RogueModifierExecuteActionOnModifierCustomEventConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C9DC1CF5F2AC01B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnModifierCustomEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnModifierCustomEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG_METHOD_3_C9DC1CF5F2AC01B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2406CA0747BE10EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnModifierCustomEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnModifierCustomEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMODIFIERCUSTOMEVENTCONFIG_METHOD_3_2406CA0747BE10EC_OFFSET))(a1, a2);
		}
	};
}
