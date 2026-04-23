#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_56;
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaResultItemData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0x9B5A2A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B59920)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaResult___c__DisplayClass0_0_TypeDefinitionIndex = 69315;

	class IdleLiveGachaResult___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::Class_1_D1E0AD3915BCCF29_56* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Create_b__1(::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CREATE_B__1_OFFSET))(this, x);
		}
	};
}
