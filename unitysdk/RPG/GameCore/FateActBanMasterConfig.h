#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTBANMASTERCONFIG_METHOD_6_D173B479CE02C45B_OFFSET UNITYSDK_OFFSET(0x1E0CC190)
#define RPG_GAMECORE_FATEACTBANMASTERCONFIG_METHOD_6_F08A8DB938E84FF7_OFFSET UNITYSDK_OFFSET(0x1E0CC140)
#define RPG_GAMECORE_FATEACTBANMASTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActBanMasterConfig_TypeDefinitionIndex = 19013;

	class FateActBanMasterConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTBANMASTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F08A8DB938E84FF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActBanMasterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActBanMasterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTBANMASTERCONFIG_METHOD_6_F08A8DB938E84FF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D173B479CE02C45B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActBanMasterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActBanMasterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTBANMASTERCONFIG_METHOD_6_D173B479CE02C45B_OFFSET))(a1, a2);
		}
	};
}
