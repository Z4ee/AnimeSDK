#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG_METHOD_3_23A5EA90A704FF6D_OFFSET UNITYSDK_OFFSET(0x1DD640C0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG_METHOD_3_6F15808783828188_OFFSET UNITYSDK_OFFSET(0x1DD64160)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD64150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorCasterConfig_TypeDefinitionIndex = 21121;

	class LittleGameAbilityTargetSelectorCasterConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_23A5EA90A704FF6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorCasterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorCasterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG_METHOD_3_23A5EA90A704FF6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F15808783828188(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorCasterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorCasterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG_METHOD_3_6F15808783828188_OFFSET))(a1, a2);
		}
	};
}
