#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER_CLEARLATETICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xA9EA0F0)
#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER_CLEARTICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xA9E9FE0)
#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA9EA2A0)
#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA9EA1D0)
#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA9EA350)
#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER_SETLATETICKCALLBACK_1_OFFSET UNITYSDK_OFFSET(0xA9EA090)
#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER_SETLATETICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xA9EA030)
#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER_SETTICKCALLBACK_1_OFFSET UNITYSDK_OFFSET(0xA9E9F80)
#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER_SETTICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xA9E9F20)
#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA9EA260)
#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA9EA140)
#define RPG_CLIENT_MONOPERFORMANCEUITRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EA400)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPerformanceUITransfer_TypeDefinitionIndex = 66885;

	class MonoPerformanceUITransfer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_2<::XLua::LuaTable*, ::System::Single>* _tickCallback; // 0x18
		::System::Action_1<::System::Single>* _tickCallbackWithoutSelf; // 0x20
		::XLua::LuaTable* _luaSelf; // 0x28
		::System::Action_2<::XLua::LuaTable*, ::System::Single>* _lateTickCallback; // 0x30
		::System::Action_1<::System::Single>* _lateTickCallbackWithoutSelf; // 0x38
		::XLua::LuaTable* _lateTickLuaSelf; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER__CTOR_OFFSET))(this);
		}

		::System::Void SetTickCallback(::System::Action_2<::XLua::LuaTable*, ::System::Single>* tickCallback, ::XLua::LuaTable* luaSelf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Single>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER_SETTICKCALLBACK_OFFSET))(this, tickCallback, luaSelf);
		}

		::System::Void SetTickCallback_1(::System::Action_1<::System::Single>* callback, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER_SETTICKCALLBACK_1_OFFSET))(this, callback, tag);
		}

		::System::Void ClearTickCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER_CLEARTICKCALLBACK_OFFSET))(this);
		}

		::System::Void SetLateTickCallback(::System::Action_2<::XLua::LuaTable*, ::System::Single>* tickCallback, ::XLua::LuaTable* luaSelf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Single>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER_SETLATETICKCALLBACK_OFFSET))(this, tickCallback, luaSelf);
		}

		::System::Void SetLateTickCallback_1(::System::Action_1<::System::Single>* callback, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER_SETLATETICKCALLBACK_1_OFFSET))(this, callback, tag);
		}

		::System::Void ClearLateTickCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER_CLEARLATETICKCALLBACK_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEUITRANSFER_ONDESTROY_OFFSET))(this);
		}
	};
}
