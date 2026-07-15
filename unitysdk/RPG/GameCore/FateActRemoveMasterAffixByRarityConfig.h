#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_6_812F497EABECB6DE_OFFSET UNITYSDK_OFFSET(0x1C073870)
#define RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_6_DBCBA06C2100A41A_OFFSET UNITYSDK_OFFSET(0x1C0738C0)
#define RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0738B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActRemoveMasterAffixByRarityConfig_TypeDefinitionIndex = 18479;

	class FateActRemoveMasterAffixByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_812F497EABECB6DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_6_812F497EABECB6DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_DBCBA06C2100A41A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_6_DBCBA06C2100A41A_OFFSET))(a1, a2);
		}
	};
}
