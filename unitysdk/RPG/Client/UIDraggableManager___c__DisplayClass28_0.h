#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE35C7D0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS28_0__LUABINDDRAGEXCEEDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xE35D5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDraggableManager___c__DisplayClass28_0_TypeDefinitionIndex = 69057;

	class UIDraggableManager___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Action_1<::XLua::LuaTable*>* callback; // 0x10
		::XLua::LuaTable* listener; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _LuaBindDragExceedCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS28_0__LUABINDDRAGEXCEEDCALLBACK_B__0_OFFSET))(this);
		}
	};
}
