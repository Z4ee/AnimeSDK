#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_6_1A035C019905C130_OFFSET UNITYSDK_OFFSET(0x1D08BCD0)
#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_6_E825403D15E83234_OFFSET UNITYSDK_OFFSET(0x1D08BC80)
#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08BCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActFetchMasterAffixConfig_TypeDefinitionIndex = 19012;

	class FateActFetchMasterAffixConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E825403D15E83234(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActFetchMasterAffixConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActFetchMasterAffixConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_6_E825403D15E83234_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_1A035C019905C130(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActFetchMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActFetchMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_6_1A035C019905C130_OFFSET))(a1, a2);
		}
	};
}
