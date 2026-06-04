#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_6_13375462211A3FB1_OFFSET UNITYSDK_OFFSET(0x1970C570)
#define RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_6_DBCBA06C2100A41A_OFFSET UNITYSDK_OFFSET(0x1970C6E0)
#define RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1970C640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActRemoveMasterAffixByRarityConfig_TypeDefinitionIndex = 18245;

	class FateActRemoveMasterAffixByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_13375462211A3FB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_6_13375462211A3FB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_DBCBA06C2100A41A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_6_DBCBA06C2100A41A_OFFSET))(a1, a2);
		}
	};
}
