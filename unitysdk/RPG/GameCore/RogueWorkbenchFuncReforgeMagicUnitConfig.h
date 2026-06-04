#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCONFIG_METHOD_3_7726350A4C269BE1_OFFSET UNITYSDK_OFFSET(0x19BD4690)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCONFIG_METHOD_3_D704AB33EECB9345_OFFSET UNITYSDK_OFFSET(0x19BD43B0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD43A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncReforgeMagicUnitConfig_TypeDefinitionIndex = 17142;

	class RogueWorkbenchFuncReforgeMagicUnitConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7726350A4C269BE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCONFIG_METHOD_3_7726350A4C269BE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D704AB33EECB9345(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCONFIG_METHOD_3_D704AB33EECB9345_OFFSET))(a1, a2);
		}
	};
}
