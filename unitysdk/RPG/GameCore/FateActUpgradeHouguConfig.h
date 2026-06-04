#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_6_20F77618893803A0_OFFSET UNITYSDK_OFFSET(0x1970CCE0)
#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_6_A17BE014394B0D1B_OFFSET UNITYSDK_OFFSET(0x1970CB70)
#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1970CC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActUpgradeHouguConfig_TypeDefinitionIndex = 18240;

	class FateActUpgradeHouguConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A17BE014394B0D1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActUpgradeHouguConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActUpgradeHouguConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_6_A17BE014394B0D1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_20F77618893803A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActUpgradeHouguConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActUpgradeHouguConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_6_20F77618893803A0_OFFSET))(a1, a2);
		}
	};
}
