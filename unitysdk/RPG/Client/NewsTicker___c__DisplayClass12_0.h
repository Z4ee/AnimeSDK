#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NewsTickerItem; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_NEWSTICKER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xABD6AE0)
#define RPG_CLIENT_NEWSTICKER___C__DISPLAYCLASS12_0__SETSETUPITEMCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xABD6E30)

namespace RPG::Client
{
	inline static constexpr unsigned int NewsTicker___c__DisplayClass12_0_TypeDefinitionIndex = 63599;

	class NewsTicker___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action_3<::XLua::LuaTable*, ::RPG::Client::NewsTickerItem*, ::System::UInt32>* onSetupItem; // 0x10
		::XLua::LuaTable* luaSelf; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetSetupItemCallback_b__0(::RPG::Client::NewsTickerItem* go, ::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NewsTickerItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER___C__DISPLAYCLASS12_0__SETSETUPITEMCALLBACK_B__0_OFFSET))(this, go, index);
		}
	};
}
