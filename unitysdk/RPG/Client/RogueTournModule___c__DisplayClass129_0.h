#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS129_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C346E70)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS129_0__SHOWENTRANCEPAGEPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0x1C34E360)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass129_0_TypeDefinitionIndex = 67796;

	class RogueTournModule___c__DisplayClass129_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::XLua::LuaTable*>* promise; // 0x10
		::System::Boolean isSkipAutoShowDialogs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS129_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEntrancePagePromised_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS129_0__SHOWENTRANCEPAGEPROMISED_B__0_OFFSET))(this);
		}
	};
}
