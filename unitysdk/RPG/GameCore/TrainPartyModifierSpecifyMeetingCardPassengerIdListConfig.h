#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG_METHOD_3_303099F735229993_OFFSET UNITYSDK_OFFSET(0x1D5DEDB0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG_METHOD_3_943A2CDCB7C8C0CF_OFFSET UNITYSDK_OFFSET(0x1D5DF150)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DEDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig_TypeDefinitionIndex = 17902;

	class TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_943A2CDCB7C8C0CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG_METHOD_3_943A2CDCB7C8C0CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_303099F735229993(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG_METHOD_3_303099F735229993_OFFSET))(a1, a2);
		}
	};
}
