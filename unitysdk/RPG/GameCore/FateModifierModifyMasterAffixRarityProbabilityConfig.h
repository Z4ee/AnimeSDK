#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_METHOD_3_B8F266AEA91DE532_OFFSET UNITYSDK_OFFSET(0x1D08D8E0)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_METHOD_3_C14A279B23D2A94E_OFFSET UNITYSDK_OFFSET(0x1D08D930)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08D920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyMasterAffixRarityProbabilityConfig_TypeDefinitionIndex = 19045;

	class FateModifierModifyMasterAffixRarityProbabilityConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B8F266AEA91DE532(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_METHOD_3_B8F266AEA91DE532_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C14A279B23D2A94E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_METHOD_3_C14A279B23D2A94E_OFFSET))(a1, a2);
		}
	};
}
