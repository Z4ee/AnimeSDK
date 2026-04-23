#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG_METHOD_3_B30075F9B0BB469E_OFFSET UNITYSDK_OFFSET(0x189BF310)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG_METHOD_3_FB461889C7002497_OFFSET UNITYSDK_OFFSET(0x189BF3E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BF390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialAugmentConfig_TypeDefinitionIndex = 18468;

	class GridFightModifierSetTutorialAugmentConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B30075F9B0BB469E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialAugmentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialAugmentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG_METHOD_3_B30075F9B0BB469E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FB461889C7002497(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialAugmentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialAugmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG_METHOD_3_FB461889C7002497_OFFSET))(a1, a2);
		}
	};
}
