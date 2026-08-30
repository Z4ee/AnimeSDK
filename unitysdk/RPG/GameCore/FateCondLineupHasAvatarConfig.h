#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_6_820B1F3CB77484CC_OFFSET UNITYSDK_OFFSET(0x1D08CB10)
#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_6_FBBAA81C1FA0A850_OFFSET UNITYSDK_OFFSET(0x1D08CAC0)
#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08CB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondLineupHasAvatarConfig_TypeDefinitionIndex = 19020;

	class FateCondLineupHasAvatarConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_FBBAA81C1FA0A850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondLineupHasAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondLineupHasAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_6_FBBAA81C1FA0A850_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_820B1F3CB77484CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondLineupHasAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondLineupHasAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_6_820B1F3CB77484CC_OFFSET))(a1, a2);
		}
	};
}
