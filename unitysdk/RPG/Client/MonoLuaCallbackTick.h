#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOLUACALLBACKTICK_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9D189E0)
#define RPG_CLIENT_MONOLUACALLBACKTICK_GET_OFFSET UNITYSDK_OFFSET(0x9D187C0)
#define RPG_CLIENT_MONOLUACALLBACKTICK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9D188F0)
#define RPG_CLIENT_MONOLUACALLBACKTICK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D18950)
#define RPG_CLIENT_MONOLUACALLBACKTICK_SETLUACALLBACK_OFFSET UNITYSDK_OFFSET(0x9D18890)
#define RPG_CLIENT_MONOLUACALLBACKTICK_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9D189A0)
#define RPG_CLIENT_MONOLUACALLBACKTICK__CTOR_OFFSET UNITYSDK_OFFSET(0x9D18A30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLuaCallbackTick_TypeDefinitionIndex = 56323;

	class MonoLuaCallbackTick : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::Object*>* _LuaCallback; // 0x18
		::XLua::LuaTable* _LuaCallbackParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonoLuaCallbackTick* Get(::UnityEngine::GameObject* go)
		{
			return ((::RPG::Client::MonoLuaCallbackTick*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_GET_OFFSET))(go);
		}

		::System::Void SetLuaCallback(::System::Action_1<::System::Object*>* luaCallback, ::XLua::LuaTable* luaCallbackParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_SETLUACALLBACK_OFFSET))(this, luaCallback, luaCallbackParam);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_DESPAWNED_OFFSET))(this);
		}
	};
}
