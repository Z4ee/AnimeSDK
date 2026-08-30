#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG_METHOD_3_4161334422B98F86_OFFSET UNITYSDK_OFFSET(0x1D5DE5D0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG_METHOD_3_79AFF4154CF1FC22_OFFSET UNITYSDK_OFFSET(0x1D5DE620)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DE610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierAddStatRatioOnUseLongStepCardConfig_TypeDefinitionIndex = 17900;

	class TrainPartyModifierAddStatRatioOnUseLongStepCardConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4161334422B98F86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnUseLongStepCardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnUseLongStepCardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG_METHOD_3_4161334422B98F86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_79AFF4154CF1FC22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnUseLongStepCardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnUseLongStepCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG_METHOD_3_79AFF4154CF1FC22_OFFSET))(a1, a2);
		}
	};
}
