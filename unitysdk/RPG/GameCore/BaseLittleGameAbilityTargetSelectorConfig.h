#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG_METHOD_2_D8DFD271E1F3C9E4_OFFSET UNITYSDK_OFFSET(0x194C0050)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG_METHOD_2_E6C2271C4C216864_OFFSET UNITYSDK_OFFSET(0x194C06C0)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194C0720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseLittleGameAbilityTargetSelectorConfig_TypeDefinitionIndex = 20194;

	class BaseLittleGameAbilityTargetSelectorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D8DFD271E1F3C9E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG_METHOD_2_D8DFD271E1F3C9E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_E6C2271C4C216864(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG_METHOD_2_E6C2271C4C216864_OFFSET))(a1, a2);
		}
	};
}
