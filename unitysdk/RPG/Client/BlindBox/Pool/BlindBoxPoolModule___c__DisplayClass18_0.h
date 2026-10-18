#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Pool { class BlindBoxPoolModule; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC88B820)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS18_0___REGISTERSCHEDULEWATCHER_B__0_OFFSET UNITYSDK_OFFSET(0xC88CB20)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxPoolModule___c__DisplayClass18_0_TypeDefinitionIndex = 74914;

	class BlindBoxPoolModule___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Pool::BlindBoxPoolModule* __4__this; // 0x10
		::System::UInt32 poolId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void __RegisterScheduleWatcher_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS18_0___REGISTERSCHEDULEWATCHER_B__0_OFFSET))(this);
		}
	};
}
