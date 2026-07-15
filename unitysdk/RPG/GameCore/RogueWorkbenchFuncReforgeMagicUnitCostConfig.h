#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG_METHOD_3_4CBCB7328FCF5568_OFFSET UNITYSDK_OFFSET(0x1BB821A0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG_METHOD_3_550A227A67DA24EC_OFFSET UNITYSDK_OFFSET(0x1BB824A0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB82190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncReforgeMagicUnitCostConfig_TypeDefinitionIndex = 17303;

	class RogueWorkbenchFuncReforgeMagicUnitCostConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_550A227A67DA24EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG_METHOD_3_550A227A67DA24EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4CBCB7328FCF5568(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG_METHOD_3_4CBCB7328FCF5568_OFFSET))(a1, a2);
		}
	};
}
