#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionBaseData; }

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19A73120)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS23_0__GETAVATARPROMOTIONDATABYSTAR_B__0_OFFSET UNITYSDK_OFFSET(0x19A73130)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c__DisplayClass23_0_TypeDefinitionIndex = 58805;

	class ActivityIdleLiveModule___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 star; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAvatarPromotionDataByStar_b__0(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS23_0__GETAVATARPROMOTIONDATABYSTAR_B__0_OFFSET))(this, a1);
		}
	};
}
