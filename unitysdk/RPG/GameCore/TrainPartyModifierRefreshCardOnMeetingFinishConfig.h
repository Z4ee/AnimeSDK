#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG_METHOD_3_3ABED275C6E31B90_OFFSET UNITYSDK_OFFSET(0x19DF6B10)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG_METHOD_3_EB6E9699BC6CC40C_OFFSET UNITYSDK_OFFSET(0x19DF6870)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF6860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierRefreshCardOnMeetingFinishConfig_TypeDefinitionIndex = 17226;

	class TrainPartyModifierRefreshCardOnMeetingFinishConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3ABED275C6E31B90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierRefreshCardOnMeetingFinishConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierRefreshCardOnMeetingFinishConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG_METHOD_3_3ABED275C6E31B90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB6E9699BC6CC40C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierRefreshCardOnMeetingFinishConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierRefreshCardOnMeetingFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG_METHOD_3_EB6E9699BC6CC40C_OFFSET))(a1, a2);
		}
	};
}
