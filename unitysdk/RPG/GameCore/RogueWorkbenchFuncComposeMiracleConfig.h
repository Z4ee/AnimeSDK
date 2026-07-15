#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMIRACLECONFIG_METHOD_3_713C3A8875F61877_OFFSET UNITYSDK_OFFSET(0x1BB82080)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMIRACLECONFIG_METHOD_3_F254292ED92FB633_OFFSET UNITYSDK_OFFSET(0x1BB82210)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB82070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncComposeMiracleConfig_TypeDefinitionIndex = 17295;

	class RogueWorkbenchFuncComposeMiracleConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F254292ED92FB633(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncComposeMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncComposeMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMIRACLECONFIG_METHOD_3_F254292ED92FB633_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_713C3A8875F61877(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncComposeMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncComposeMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMIRACLECONFIG_METHOD_3_713C3A8875F61877_OFFSET))(a1, a2);
		}
	};
}
