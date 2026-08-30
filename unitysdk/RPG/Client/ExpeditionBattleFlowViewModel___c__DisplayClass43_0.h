#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionBattleRoute; }

#define RPG_CLIENT_EXPEDITIONBATTLEFLOWVIEWMODEL___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88E130)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWVIEWMODEL___C__DISPLAYCLASS43_0__GETCURRENTLEVELROUTEENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1B88EA70)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleFlowViewModel___c__DisplayClass43_0_TypeDefinitionIndex = 63981;

	class ExpeditionBattleFlowViewModel___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::UInt32 routeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWVIEWMODEL___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCurrentLevelRouteEndData_b__0(::RPG::Client::ExpeditionBattleRoute* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionBattleRoute*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWVIEWMODEL___C__DISPLAYCLASS43_0__GETCURRENTLEVELROUTEENDDATA_B__0_OFFSET))(this, a1);
		}
	};
}
