#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA68CAE0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS28_0__LUABINDDRAGENTERCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xA68D550)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDraggableManager___c__DisplayClass28_0_TypeDefinitionIndex = 56453;

	class UIDraggableManager___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Action_2<::XLua::LuaTable*, ::System::Object*>* callback; // 0x10
		::XLua::LuaTable* listener; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _LuaBindDragEnterCallback_b__0(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS28_0__LUABINDDRAGENTERCALLBACK_B__0_OFFSET))(this, data);
		}
	};
}
