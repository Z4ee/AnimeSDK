#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_6_8AF9059B72F154E4_OFFSET UNITYSDK_OFFSET(0x1BB67830)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_6_C40B11A40A983FA8_OFFSET UNITYSDK_OFFSET(0x1BB677E0)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB67820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamUpgradableMagicUnitLevelCountConfig_TypeDefinitionIndex = 19063;

	class RogueParamUpgradableMagicUnitLevelCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C40B11A40A983FA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_6_C40B11A40A983FA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8AF9059B72F154E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_6_8AF9059B72F154E4_OFFSET))(a1, a2);
		}
	};
}
