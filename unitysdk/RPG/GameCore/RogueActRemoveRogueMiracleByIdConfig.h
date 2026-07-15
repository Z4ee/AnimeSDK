#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG_METHOD_6_14E572C601F35EFD_OFFSET UNITYSDK_OFFSET(0x1C49DA80)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG_METHOD_6_8E53CEDA16540D21_OFFSET UNITYSDK_OFFSET(0x1C49DAD0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49DAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueMiracleByIdConfig_TypeDefinitionIndex = 18853;

	class RogueActRemoveRogueMiracleByIdConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_14E572C601F35EFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleByIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueMiracleByIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG_METHOD_6_14E572C601F35EFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8E53CEDA16540D21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleByIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueMiracleByIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG_METHOD_6_8E53CEDA16540D21_OFFSET))(a1, a2);
		}
	};
}
