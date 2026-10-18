#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Proto { class BuyGoodsScRsp; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_SHOPBUYGOODSRSPACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE0B14C0)
#define RPG_CLIENT_SHOPBUYGOODSRSPACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE0B1530)
#define RPG_CLIENT_SHOPBUYGOODSRSPACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xE0B14A0)
#define RPG_CLIENT_SHOPBUYGOODSRSPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE0B13B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShopBuyGoodsRspAction_TypeDefinitionIndex = 67949;

	class ShopBuyGoodsRspAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPBUYGOODSRSPACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::XLua::LuaTable* a1, ::System::UInt32 a2, ::Proto::BuyGoodsScRsp* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32, ::Proto::BuyGoodsScRsp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPBUYGOODSRSPACTION_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::XLua::LuaTable* a1, ::System::UInt32 a2, ::Proto::BuyGoodsScRsp* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32, ::Proto::BuyGoodsScRsp*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPBUYGOODSRSPACTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPBUYGOODSRSPACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
