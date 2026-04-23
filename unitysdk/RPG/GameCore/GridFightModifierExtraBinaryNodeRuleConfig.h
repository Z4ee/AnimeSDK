#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_METHOD_3_B20FEC724D35E1D8_OFFSET UNITYSDK_OFFSET(0x189BCC40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_METHOD_3_B82BC2A65E9C22F1_OFFSET UNITYSDK_OFFSET(0x189BCD10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BCCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExtraBinaryNodeRuleConfig_TypeDefinitionIndex = 18472;

	class GridFightModifierExtraBinaryNodeRuleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B20FEC724D35E1D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExtraBinaryNodeRuleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExtraBinaryNodeRuleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_METHOD_3_B20FEC724D35E1D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B82BC2A65E9C22F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExtraBinaryNodeRuleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExtraBinaryNodeRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_METHOD_3_B82BC2A65E9C22F1_OFFSET))(a1, a2);
		}
	};
}
