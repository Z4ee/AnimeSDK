#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_METHOD_6_265001131DA47C77_OFFSET UNITYSDK_OFFSET(0x18CC3E60)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_METHOD_6_88B10FEE9E61A682_OFFSET UNITYSDK_OFFSET(0x18CC4080)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC3FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMiracleCountByParamConfig_TypeDefinitionIndex = 18604;

	class RogueActGetRogueMiracleCountByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_265001131DA47C77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_METHOD_6_265001131DA47C77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_88B10FEE9E61A682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_METHOD_6_88B10FEE9E61A682_OFFSET))(a1, a2);
		}
	};
}
