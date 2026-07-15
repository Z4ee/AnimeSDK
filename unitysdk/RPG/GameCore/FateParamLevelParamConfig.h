#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG_METHOD_6_628D6FEC4D6B8BA7_OFFSET UNITYSDK_OFFSET(0x1BA74C90)
#define RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG_METHOD_6_C802333997D04D27_OFFSET UNITYSDK_OFFSET(0x1BA74CF0)
#define RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA74CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamLevelParamConfig_TypeDefinitionIndex = 15987;

	class FateParamLevelParamConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::RPG::GameCore::FateLevelParamType ParamType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_628D6FEC4D6B8BA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamLevelParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamLevelParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG_METHOD_6_628D6FEC4D6B8BA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C802333997D04D27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamLevelParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamLevelParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG_METHOD_6_C802333997D04D27_OFFSET))(a1, a2);
		}
	};
}
