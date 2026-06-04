#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_58;
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaResultItemData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0xB141990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB140EA0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaResult___c__DisplayClass0_0_TypeDefinitionIndex = 70127;

	class IdleLiveGachaResult___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::Class_1_D1E0AD3915BCCF29_58* item; // 0x10

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
