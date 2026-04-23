#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_6_073DC93498555973_OFFSET UNITYSDK_OFFSET(0x188CE110)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_6_D724555B0D570A28_OFFSET UNITYSDK_OFFSET(0x188CDFA0)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188CE070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByRarityConfig_TypeDefinitionIndex = 18271;

	class FateActAddMasterAffixByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D724555B0D570A28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_6_D724555B0D570A28_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_073DC93498555973(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_6_073DC93498555973_OFFSET))(a1, a2);
		}
	};
}
