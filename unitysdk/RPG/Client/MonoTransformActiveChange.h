#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOTRANSFORMACTIVECHANGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD86F140)
#define RPG_CLIENT_MONOTRANSFORMACTIVECHANGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD86F0F0)
#define RPG_CLIENT_MONOTRANSFORMACTIVECHANGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD86EFE0)
#define RPG_CLIENT_MONOTRANSFORMACTIVECHANGE_SETUPCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0xD86EF80)
#define RPG_CLIENT_MONOTRANSFORMACTIVECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xD86F190)
#define RPG_CLIENT_MONOTRANSFORMACTIVECHANGE__ONACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0xD86F030)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTransformActiveChange_TypeDefinitionIndex = 72537;

	class MonoTransformActiveChange : public ::UnityEngine::MonoBehaviour
	{
	public:
		::XLua::LuaTable* _LuaTable; // 0x18
		::System::Action_2<::XLua::LuaTable*, ::System::Boolean>* _ActiveChangeCallBack; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRANSFORMACTIVECHANGE__CTOR_OFFSET))(this);
		}

		::System::Void SetupChangeCallBack(::System::Action_2<::XLua::LuaTable*, ::System::Boolean>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Boolean>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRANSFORMACTIVECHANGE_SETUPCHANGECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRANSFORMACTIVECHANGE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRANSFORMACTIVECHANGE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRANSFORMACTIVECHANGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnActiveChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRANSFORMACTIVECHANGE__ONACTIVECHANGE_OFFSET))(this);
		}
	};
}
