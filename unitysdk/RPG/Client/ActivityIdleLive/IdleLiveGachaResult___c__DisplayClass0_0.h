#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_571;
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaResultItemData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0x1A664420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A663700)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaResult___c__DisplayClass0_0_TypeDefinitionIndex = 71650;

	class IdleLiveGachaResult___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_571* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Create_b__1(::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CREATE_B__1_OFFSET))(this, a1);
		}
	};
}
