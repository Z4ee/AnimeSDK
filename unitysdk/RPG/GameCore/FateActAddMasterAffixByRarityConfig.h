#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_6_073DC93498555973_OFFSET UNITYSDK_OFFSET(0x1D08B8B0)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_6_BDAEC55A4EDF67AF_OFFSET UNITYSDK_OFFSET(0x1D08B860)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08B8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByRarityConfig_TypeDefinitionIndex = 19003;

	class FateActAddMasterAffixByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BDAEC55A4EDF67AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_6_BDAEC55A4EDF67AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_073DC93498555973(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_6_073DC93498555973_OFFSET))(a1, a2);
		}
	};
}
