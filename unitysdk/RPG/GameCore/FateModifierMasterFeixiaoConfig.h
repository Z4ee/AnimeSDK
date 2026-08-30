#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMASTERFEIXIAOCONFIG_METHOD_3_63A3B25C82BB43E9_OFFSET UNITYSDK_OFFSET(0x1D08D750)
#define RPG_GAMECORE_FATEMODIFIERMASTERFEIXIAOCONFIG_METHOD_3_BDEC2759178EF865_OFFSET UNITYSDK_OFFSET(0x1D08D700)
#define RPG_GAMECORE_FATEMODIFIERMASTERFEIXIAOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08D740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMasterFeixiaoConfig_TypeDefinitionIndex = 19061;

	class FateModifierMasterFeixiaoConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERFEIXIAOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BDEC2759178EF865(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterFeixiaoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterFeixiaoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERFEIXIAOCONFIG_METHOD_3_BDEC2759178EF865_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_63A3B25C82BB43E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterFeixiaoConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterFeixiaoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERFEIXIAOCONFIG_METHOD_3_63A3B25C82BB43E9_OFFSET))(a1, a2);
		}
	};
}
