#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_103;
namespace RPG::Client::ActivityIdleLive { class CaptainData; }

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS260_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB191520)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS260_0___UPDATECAPTAIN_B__0_OFFSET UNITYSDK_OFFSET(0xB192230)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c__DisplayClass260_0_TypeDefinitionIndex = 57545;

	class ActivityIdleLiveModule___c__DisplayClass260_0 : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_103* kvp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS260_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateCaptain_b__0(::RPG::Client::ActivityIdleLive::CaptainData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS260_0___UPDATECAPTAIN_B__0_OFFSET))(this, a1);
		}
	};
}
