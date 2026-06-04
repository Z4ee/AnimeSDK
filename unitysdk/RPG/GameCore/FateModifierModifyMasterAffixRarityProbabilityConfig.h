#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_METHOD_3_B4650C5223FAD777_OFFSET UNITYSDK_OFFSET(0x197128C0)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_METHOD_3_C14A279B23D2A94E_OFFSET UNITYSDK_OFFSET(0x19711350)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19711300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyMasterAffixRarityProbabilityConfig_TypeDefinitionIndex = 18285;

	class FateModifierModifyMasterAffixRarityProbabilityConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B4650C5223FAD777(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_METHOD_3_B4650C5223FAD777_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C14A279B23D2A94E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_METHOD_3_C14A279B23D2A94E_OFFSET))(a1, a2);
		}
	};
}
