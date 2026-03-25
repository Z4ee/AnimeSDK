#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_METHOD_6_5E7290C5F59FE890_OFFSET UNITYSDK_OFFSET(0x171C0AC0)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_METHOD_6_C43400FC4FFED0CB_OFFSET UNITYSDK_OFFSET(0x171C0950)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C0A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByRoundConfig_TypeDefinitionIndex = 17664;

	class FateActAddMasterAffixByRoundConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C43400FC4FFED0CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_METHOD_6_C43400FC4FFED0CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_5E7290C5F59FE890(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_METHOD_6_5E7290C5F59FE890_OFFSET))(a1, a2);
		}
	};
}
