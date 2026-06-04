#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG_METHOD_3_2B7E72FE1F98640D_OFFSET UNITYSDK_OFFSET(0x19DF61F0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG_METHOD_3_89E12A5B6B7370F1_OFFSET UNITYSDK_OFFSET(0x19DF6240)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF6230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierAddStatUpdateRatioConfig_TypeDefinitionIndex = 17208;

	class TrainPartyModifierAddStatUpdateRatioConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B7E72FE1F98640D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddStatUpdateRatioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddStatUpdateRatioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG_METHOD_3_2B7E72FE1F98640D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89E12A5B6B7370F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddStatUpdateRatioConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddStatUpdateRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG_METHOD_3_89E12A5B6B7370F1_OFFSET))(a1, a2);
		}
	};
}
