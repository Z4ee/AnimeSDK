#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_LUABINDBTNHOLDACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC899A60)
#define RPG_CLIENT_B51RACING_LUABINDBTNHOLDACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC899AB0)
#define RPG_CLIENT_B51RACING_LUABINDBTNHOLDACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xC899A30)
#define RPG_CLIENT_B51RACING_LUABINDBTNHOLDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC899940)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int LuaBindBtnHoldAction_TypeDefinitionIndex = 80428;

	class LuaBindBtnHoldAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDBTNHOLDACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::XLua::LuaTable* a1, ::UnityEngine::GameObject* a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::UnityEngine::GameObject*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDBTNHOLDACTION_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::XLua::LuaTable* a1, ::UnityEngine::GameObject* a2, ::System::Action* a3, ::System::Action* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::XLua::LuaTable*, ::UnityEngine::GameObject*, ::System::Action*, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDBTNHOLDACTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDBTNHOLDACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
