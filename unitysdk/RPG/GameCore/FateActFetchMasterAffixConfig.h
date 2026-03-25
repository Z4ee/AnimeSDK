#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_6_1A035C019905C130_OFFSET UNITYSDK_OFFSET(0x171C19C0)
#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_6_AC62CE364C15156B_OFFSET UNITYSDK_OFFSET(0x171C1850)
#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C1920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActFetchMasterAffixConfig_TypeDefinitionIndex = 17667;

	class FateActFetchMasterAffixConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_AC62CE364C15156B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActFetchMasterAffixConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActFetchMasterAffixConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_6_AC62CE364C15156B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_1A035C019905C130(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActFetchMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActFetchMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_6_1A035C019905C130_OFFSET))(a1, a2);
		}
	};
}
