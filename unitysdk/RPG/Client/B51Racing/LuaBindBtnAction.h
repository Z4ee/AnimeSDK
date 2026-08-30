#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::UI { class Button; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_LUABINDBTNACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CEE90)
#define RPG_CLIENT_B51RACING_LUABINDBTNACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CEED0)
#define RPG_CLIENT_B51RACING_LUABINDBTNACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CEE70)
#define RPG_CLIENT_B51RACING_LUABINDBTNACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CED80)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int LuaBindBtnAction_TypeDefinitionIndex = 80426;

	class LuaBindBtnAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDBTNACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::XLua::LuaTable* a1, ::UnityEngine::UI::Button* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::UnityEngine::UI::Button*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDBTNACTION_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::XLua::LuaTable* a1, ::UnityEngine::UI::Button* a2, ::System::Action* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::XLua::LuaTable*, ::UnityEngine::UI::Button*, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDBTNACTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDBTNACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
