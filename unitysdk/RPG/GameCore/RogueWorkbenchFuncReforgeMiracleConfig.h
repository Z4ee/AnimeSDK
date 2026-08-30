#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMIRACLECONFIG_METHOD_3_25EC4DE6EFC8A90B_OFFSET UNITYSDK_OFFSET(0x1CCD0820)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMIRACLECONFIG_METHOD_3_D2055A028991B10F_OFFSET UNITYSDK_OFFSET(0x1CCD0500)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD04F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncReforgeMiracleConfig_TypeDefinitionIndex = 17813;

	class RogueWorkbenchFuncReforgeMiracleConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_25EC4DE6EFC8A90B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncReforgeMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMIRACLECONFIG_METHOD_3_25EC4DE6EFC8A90B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2055A028991B10F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncReforgeMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMIRACLECONFIG_METHOD_3_D2055A028991B10F_OFFSET))(a1, a2);
		}
	};
}
