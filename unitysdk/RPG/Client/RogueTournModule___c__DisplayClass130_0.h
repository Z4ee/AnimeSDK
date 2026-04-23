#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS130_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0E1AC0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS130_0__SHOWMODESELECTPAGEPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xB0E7A10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass130_0_TypeDefinitionIndex = 62492;

	class RogueTournModule___c__DisplayClass130_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::XLua::LuaTable*>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS130_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowModeSelectPagePromised_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS130_0__SHOWMODESELECTPAGEPROMISED_B__0_OFFSET))(this);
		}
	};
}
