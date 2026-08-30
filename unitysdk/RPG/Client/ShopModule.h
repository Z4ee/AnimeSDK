#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ShopModuleLuaWrap; }

#define RPG_CLIENT_SHOPMODULE_FINDSHOPTYPEOFITEM_OFFSET UNITYSDK_OFFSET(0x1AF83A00)
#define RPG_CLIENT_SHOPMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AF83980)
#define RPG_CLIENT_SHOPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF83B10)

namespace RPG::Client
{
	inline static constexpr unsigned int ShopModule_TypeDefinitionIndex = 67947;

	class ShopModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ShopModuleLuaWrap* LuaWrap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ShopModule* get_Instance()
		{
			return ((::RPG::Client::ShopModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::UInt32 FindShopTypeOfItem(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULE_FINDSHOPTYPEOFITEM_OFFSET))(this, a1);
		}
	};
}
