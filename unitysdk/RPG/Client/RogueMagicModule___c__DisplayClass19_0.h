#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A85A0)
#define RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS19_0___GETMISCREALTIMEDATAPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xC7ACC90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicModule___c__DisplayClass19_0_TypeDefinitionIndex = 63042;

	class RogueMagicModule___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void __GetMiscRealTimeDataPromised_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS19_0___GETMISCREALTIMEDATAPROMISED_B__0_OFFSET))(this);
		}
	};
}
