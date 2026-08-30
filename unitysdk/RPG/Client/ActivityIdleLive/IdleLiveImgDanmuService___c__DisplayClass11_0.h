#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1254;
namespace RPG::Client::ActivityIdleLive { class IdleLiveImgDanmuService; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F5DC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C__DISPLAYCLASS11_0___ADDIMAGEDANMU_B__0_OFFSET UNITYSDK_OFFSET(0x1C0F5F00)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveImgDanmuService___c__DisplayClass11_0_TypeDefinitionIndex = 75051;

	class IdleLiveImgDanmuService___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveImgDanmuService* __4__this; // 0x10
		::Class_0_16E4307DCC419505_1254* trigger; // 0x18
		::System::UInt32 imgDanmuId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void __AddImageDanmu_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C__DISPLAYCLASS11_0___ADDIMAGEDANMU_B__0_OFFSET))(this);
		}
	};
}
