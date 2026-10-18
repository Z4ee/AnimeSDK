#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_SHOPBUYGOODSFAILACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE0BB640)
#define RPG_CLIENT_SHOPBUYGOODSFAILACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE0BB6B0)
#define RPG_CLIENT_SHOPBUYGOODSFAILACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xE0BB620)
#define RPG_CLIENT_SHOPBUYGOODSFAILACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE0BB530)

namespace RPG::Client
{
	inline static constexpr unsigned int ShopBuyGoodsFailAction_TypeDefinitionIndex = 67950;

	class ShopBuyGoodsFailAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPBUYGOODSFAILACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::XLua::LuaTable* a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPBUYGOODSFAILACTION_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::XLua::LuaTable* a1, ::System::UInt32 a2, ::System::String* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPBUYGOODSFAILACTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPBUYGOODSFAILACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
