#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_METHOD_6_A44D4705A13790E9_OFFSET UNITYSDK_OFFSET(0x171C22D0)
#define RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_METHOD_6_C12EBCF5D34A03F2_OFFSET UNITYSDK_OFFSET(0x171C2440)
#define RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C23A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActReplaceMasterAffixByRarityConfig_TypeDefinitionIndex = 17661;

	class FateActReplaceMasterAffixByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A44D4705A13790E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_METHOD_6_A44D4705A13790E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C12EBCF5D34A03F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_METHOD_6_C12EBCF5D34A03F2_OFFSET))(a1, a2);
		}
	};
}
