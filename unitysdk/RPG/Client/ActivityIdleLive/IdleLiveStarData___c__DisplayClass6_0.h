#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveStarData_StarInfo; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5DB470)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA___C__DISPLAYCLASS6_0___GETSTARNEEDEDCHAPTER_B__0_OFFSET UNITYSDK_OFFSET(0xC5DB8D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveStarData___c__DisplayClass6_0_TypeDefinitionIndex = 75036;

	class IdleLiveStarData___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 star; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetStarNeededChapter_b__0(::RPG::Client::ActivityIdleLive::IdleLiveStarData_StarInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveStarData_StarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTARDATA___C__DISPLAYCLASS6_0___GETSTARNEEDEDCHAPTER_B__0_OFFSET))(this, a1);
		}
	};
}
