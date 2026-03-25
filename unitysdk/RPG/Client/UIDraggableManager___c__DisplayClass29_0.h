#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA68CBF0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS29_0__LUABINDDRAGEXITCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xA68D580)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDraggableManager___c__DisplayClass29_0_TypeDefinitionIndex = 56454;

	class UIDraggableManager___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Action_2<::XLua::LuaTable*, ::System::Object*>* callback; // 0x10
		::XLua::LuaTable* listener; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _LuaBindDragExitCallback_b__0(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS29_0__LUABINDDRAGEXITCALLBACK_B__0_OFFSET))(this, data);
		}
	};
}
