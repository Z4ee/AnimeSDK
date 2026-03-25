#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_METHOD_3_B6CD533B29182881_OFFSET UNITYSDK_OFFSET(0x178AD0C0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_METHOD_3_D66EA8255630645D_OFFSET UNITYSDK_OFFSET(0x178AD2B0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178AD0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierGetExtraPassengerSkillConfig_TypeDefinitionIndex = 16619;

	class TrainPartyModifierGetExtraPassengerSkillConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D66EA8255630645D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierGetExtraPassengerSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierGetExtraPassengerSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_METHOD_3_D66EA8255630645D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6CD533B29182881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierGetExtraPassengerSkillConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierGetExtraPassengerSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_METHOD_3_B6CD533B29182881_OFFSET))(a1, a2);
		}
	};
}
