#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_LUABINDREDDOTACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CF2D0)
#define RPG_CLIENT_B51RACING_LUABINDREDDOTACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CF320)
#define RPG_CLIENT_B51RACING_LUABINDREDDOTACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CF2A0)
#define RPG_CLIENT_B51RACING_LUABINDREDDOTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CF1B0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int LuaBindRedDotAction_TypeDefinitionIndex = 80428;

	class LuaBindRedDotAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDREDDOTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::XLua::LuaTable* a1, ::System::String* a2, ::System::Object* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::String*, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDREDDOTACTION_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::XLua::LuaTable* a1, ::System::String* a2, ::System::Object* a3, ::UnityEngine::Transform* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::XLua::LuaTable*, ::System::String*, ::System::Object*, ::UnityEngine::Transform*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDREDDOTACTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUABINDREDDOTACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
