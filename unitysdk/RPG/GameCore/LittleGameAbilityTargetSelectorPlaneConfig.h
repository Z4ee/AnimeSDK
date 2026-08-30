#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG_METHOD_3_21619E68A89A6AE3_OFFSET UNITYSDK_OFFSET(0x1D1FC810)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG_METHOD_3_E746DC4680E047CF_OFFSET UNITYSDK_OFFSET(0x1D1FC700)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FC800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorPlaneConfig_TypeDefinitionIndex = 21128;

	class LittleGameAbilityTargetSelectorPlaneConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Boolean IsAlly; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E746DC4680E047CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG_METHOD_3_E746DC4680E047CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21619E68A89A6AE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG_METHOD_3_21619E68A89A6AE3_OFFSET))(a1, a2);
		}
	};
}
