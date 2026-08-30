#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE35C6A0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS27_0__LUABINDDRAGENDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xE35D590)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDraggableManager___c__DisplayClass27_0_TypeDefinitionIndex = 69056;

	class UIDraggableManager___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::XLua::LuaTable* listener; // 0x10
		::System::Action_1<::XLua::LuaTable*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _LuaBindDragEndCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS27_0__LUABINDDRAGENDCALLBACK_B__0_OFFSET))(this);
		}
	};
}
