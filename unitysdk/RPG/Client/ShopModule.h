#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ShopModuleLuaWrap; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SHOPMODULE_BUYGOODSASYNC_OFFSET UNITYSDK_OFFSET(0xE0B27C0)
#define RPG_CLIENT_SHOPMODULE_FINDSHOPTYPEOFITEM_OFFSET UNITYSDK_OFFSET(0xE0B26B0)
#define RPG_CLIENT_SHOPMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE0B2A00)
#define RPG_CLIENT_SHOPMODULE__BUYGOODSASYNC_OFFSET UNITYSDK_OFFSET(0xE0B2900)
#define RPG_CLIENT_SHOPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0B2A80)

namespace RPG::Client
{
	inline static constexpr unsigned int ShopModule_TypeDefinitionIndex = 67951;

	class ShopModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ShopModuleLuaWrap* LuaWrap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 FindShopTypeOfItem(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULE_FINDSHOPTYPEOFITEM_OFFSET))(this, a1);
		}

		::System::Void BuyGoodsAsync(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULE_BUYGOODSASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid _BuyGoodsAsync(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::UInt32 a6)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULE__BUYGOODSASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::Client::ShopModule* get_Instance()
		{
			return ((::RPG::Client::ShopModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULE_GET_INSTANCE_OFFSET))();
		}
	};
}
