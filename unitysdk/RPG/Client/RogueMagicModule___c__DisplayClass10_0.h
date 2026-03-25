#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicModule; }

#define RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3237B0)
#define RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS10_0__SETAUTOSHOWENTRANCEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xA328110)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicModule___c__DisplayClass10_0_TypeDefinitionIndex = 54920;

	class RogueMagicModule___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicModule* __4__this; // 0x10
		::System::UInt32 areaID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetAutoShowEntrancePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS10_0__SETAUTOSHOWENTRANCEPAGE_B__0_OFFSET))(this);
		}
	};
}
