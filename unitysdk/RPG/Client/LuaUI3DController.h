#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DControllerBase.h"

namespace System { class String; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LUAUI3DCONTROLLER_CREATE_OFFSET UNITYSDK_OFFSET(0x17492D40)
#define RPG_CLIENT_LUAUI3DCONTROLLER_GETENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0x17492ED0)
#define RPG_CLIENT_LUAUI3DCONTROLLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17492DC0)
#define RPG_CLIENT_LUAUI3DCONTROLLER_ISCONTROLLERVALID_OFFSET UNITYSDK_OFFSET(0x17492E80)
#define RPG_CLIENT_LUAUI3DCONTROLLER_ONRELOADENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x17493040)
#define RPG_CLIENT_LUAUI3DCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17492D10)
#define RPG_CLIENT_LUAUI3DCONTROLLER__ONACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x174933D0)
#define RPG_CLIENT_LUAUI3DCONTROLLER__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x17493330)
#define RPG_CLIENT_LUAUI3DCONTROLLER__ONLOAD_OFFSET UNITYSDK_OFFSET(0x17493190)
#define RPG_CLIENT_LUAUI3DCONTROLLER__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x174934E0)
#define RPG_CLIENT_LUAUI3DCONTROLLER__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17493380)
#define RPG_CLIENT_LUAUI3DCONTROLLER__TRYCALLLUA_OFFSET UNITYSDK_OFFSET(0x174931E0)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaUI3DController_TypeDefinitionIndex = 59570;

	class LuaUI3DController : public ::RPG::Client::UI3DControllerBase
	{
	public:
		::System::String* _ControllerName; // 0x70
		::XLua::LuaTable* ControllerTable; // 0x78

		::System::Void _ctor(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::LuaUI3DController* Create(::XLua::LuaTable* a1)
		{
			return ((::RPG::Client::LuaUI3DController*(*)(::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER_CREATE_OFFSET))(a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER_GET_NAME_OFFSET))(this);
		}

		::System::String* GetEnvironmentProfilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER_GETENVIRONMENTPROFILEPATH_OFFSET))(this);
		}

		::System::Void OnReloadEnvironment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER_ONRELOADENVIRONMENT_OFFSET))(this);
		}

		::System::Void _OnLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER__ONLOAD_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnActiveChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER__ONACTIVECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER__ONUISCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void _TryCallLua(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER__TRYCALLLUA_OFFSET))(this, a1);
		}

		::System::Boolean IsControllerValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUI3DCONTROLLER_ISCONTROLLERVALID_OFFSET))(this);
		}
	};
}
