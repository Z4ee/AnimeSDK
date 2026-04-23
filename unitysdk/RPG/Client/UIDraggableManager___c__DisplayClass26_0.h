#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E6D10)
#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0__LUABINDDRAGSTARTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xB3E7B40)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDraggableManager___c__DisplayClass26_0_TypeDefinitionIndex = 63694;

	class UIDraggableManager___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::XLua::LuaTable* listener; // 0x10
		::System::Action_2<::XLua::LuaTable*, ::System::Object*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _LuaBindDragStartCallback_b__0(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0__LUABINDDRAGSTARTCALLBACK_B__0_OFFSET))(this, data);
		}
	};
}
