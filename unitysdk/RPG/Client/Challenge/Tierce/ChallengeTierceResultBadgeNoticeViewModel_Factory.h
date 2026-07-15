#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1316;
class Class_1_69312C8E0A4A7CBC;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultBadgeNoticeViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTBADGENOTICEVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x18760290)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTBADGENOTICEVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x18760280)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceResultBadgeNoticeViewModel_Factory_TypeDefinitionIndex = 76641;

	class ChallengeTierceResultBadgeNoticeViewModel_Factory : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1316* _WindowService; // 0x10
		::Class_1_69312C8E0A4A7CBC* _BadgeDeliveryService; // 0x18

		::System::Void _ctor(::Class_1_69312C8E0A4A7CBC* a1, ::Class_0_16E4307DCC419505_1316* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69312C8E0A4A7CBC*, ::Class_0_16E4307DCC419505_1316*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTBADGENOTICEVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel* Create(::RPG::Client::ChallengeData* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel*(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTBADGENOTICEVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
