#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_METHOD_3_50E8973C087EB365_OFFSET UNITYSDK_OFFSET(0x1EEF9050)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_METHOD_3_F6A0223F73AAFEE9_OFFSET UNITYSDK_OFFSET(0x1EEF90A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF9090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnMiracleEventConfig_TypeDefinitionIndex = 17473;

	class RogueModifierExecuteActionOnMiracleEventConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_50E8973C087EB365(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_METHOD_3_50E8973C087EB365_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6A0223F73AAFEE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_METHOD_3_F6A0223F73AAFEE9_OFFSET))(a1, a2);
		}
	};
}
