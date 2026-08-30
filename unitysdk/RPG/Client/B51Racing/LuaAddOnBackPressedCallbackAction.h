#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_LUAADDONBACKPRESSEDCALLBACKACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC899790)
#define RPG_CLIENT_B51RACING_LUAADDONBACKPRESSEDCALLBACKACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC8997D0)
#define RPG_CLIENT_B51RACING_LUAADDONBACKPRESSEDCALLBACKACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xC899780)
#define RPG_CLIENT_B51RACING_LUAADDONBACKPRESSEDCALLBACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC899690)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int LuaAddOnBackPressedCallbackAction_TypeDefinitionIndex = 80430;

	class LuaAddOnBackPressedCallbackAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUAADDONBACKPRESSEDCALLBACKACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::XLua::LuaTable* a1, ::System::Func_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUAADDONBACKPRESSEDCALLBACKACTION_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::XLua::LuaTable* a1, ::System::Func_1<::System::Boolean>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::XLua::LuaTable*, ::System::Func_1<::System::Boolean>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUAADDONBACKPRESSEDCALLBACKACTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUAADDONBACKPRESSEDCALLBACKACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
