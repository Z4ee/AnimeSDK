#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_6_26F074251D20A0EA_OFFSET UNITYSDK_OFFSET(0x17651C30)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_6_8AF9059B72F154E4_OFFSET UNITYSDK_OFFSET(0x17651EE0)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17651DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamUpgradableMagicUnitLevelCountConfig_TypeDefinitionIndex = 18170;

	class RogueParamUpgradableMagicUnitLevelCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_26F074251D20A0EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_6_26F074251D20A0EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8AF9059B72F154E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_6_8AF9059B72F154E4_OFFSET))(a1, a2);
		}
	};
}
