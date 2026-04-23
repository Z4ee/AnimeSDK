#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOLUACALLBACKENABLE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA9DBAF0)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_GET_OFFSET UNITYSDK_OFFSET(0xA9DB810)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA9DBA60)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA9DBA00)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA9DB9A0)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKDISABLE_OFFSET UNITYSDK_OFFSET(0xA9DB940)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKENABLE_OFFSET UNITYSDK_OFFSET(0xA9DB8E0)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA9DBAB0)
#define RPG_CLIENT_MONOLUACALLBACKENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9DBB40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLuaCallbackEnable_TypeDefinitionIndex = 63565;

	class MonoLuaCallbackEnable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::Object*>* _LuaEnableCallback; // 0x18
		::XLua::LuaTable* _LuaEnableCallbackParam; // 0x20
		::System::Action_1<::System::Object*>* _LuaDisableCallback; // 0x28
		::XLua::LuaTable* _LuaDisableCallbackParam; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonoLuaCallbackEnable* Get(::UnityEngine::GameObject* go)
		{
			return ((::RPG::Client::MonoLuaCallbackEnable*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_GET_OFFSET))(go);
		}

		::System::Void SetLuaCallbackEnable(::System::Action_1<::System::Object*>* luaCallback, ::XLua::LuaTable* luaCallbackParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKENABLE_OFFSET))(this, luaCallback, luaCallbackParam);
		}

		::System::Void SetLuaCallbackDisable(::System::Action_1<::System::Object*>* luaCallback, ::XLua::LuaTable* luaCallbackParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKDISABLE_OFFSET))(this, luaCallback, luaCallbackParam);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_DESPAWNED_OFFSET))(this);
		}
	};
}
