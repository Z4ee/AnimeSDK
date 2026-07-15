#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG_METHOD_3_07DDE4EE397BF860_OFFSET UNITYSDK_OFFSET(0x1C1611E0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG_METHOD_3_4715F9976039BD24_OFFSET UNITYSDK_OFFSET(0x1C161190)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1611D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig_TypeDefinitionIndex = 17377;

	class TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4715F9976039BD24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG_METHOD_3_4715F9976039BD24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_07DDE4EE397BF860(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG_METHOD_3_07DDE4EE397BF860_OFFSET))(a1, a2);
		}
	};
}
