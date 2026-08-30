#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_6_20F77618893803A0_OFFSET UNITYSDK_OFFSET(0x1E0CC5B0)
#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_6_51C2463D6DC7EE64_OFFSET UNITYSDK_OFFSET(0x1E0CC560)
#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActUpgradeHouguConfig_TypeDefinitionIndex = 18999;

	class FateActUpgradeHouguConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_51C2463D6DC7EE64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActUpgradeHouguConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActUpgradeHouguConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_6_51C2463D6DC7EE64_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_20F77618893803A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActUpgradeHouguConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActUpgradeHouguConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_6_20F77618893803A0_OFFSET))(a1, a2);
		}
	};
}
