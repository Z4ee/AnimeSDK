#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_SHOPMODULELUAWRAP_FINDSHOPTYPEOFITEM_OFFSET UNITYSDK_OFFSET(0x19F4AC50)
#define RPG_CLIENT_SHOPMODULELUAWRAP_SETFINDSHOPIDOFITEMFUNC_OFFSET UNITYSDK_OFFSET(0x19F4AD60)
#define RPG_CLIENT_SHOPMODULELUAWRAP_SETLUATABLE_OFFSET UNITYSDK_OFFSET(0x19F4AD10)
#define RPG_CLIENT_SHOPMODULELUAWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x19F4AD00)

namespace RPG::Client
{
	inline static constexpr unsigned int ShopModuleLuaWrap_TypeDefinitionIndex = 64941;

	class ShopModuleLuaWrap : public ::System::Object
	{
	public:
		::XLua::LuaTable* _LuaTable; // 0x10
		::System::Func_3<::XLua::LuaTable*, ::System::UInt32, ::System::UInt32>* _FindShopIDOfItemLuaFunc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP__CTOR_OFFSET))(this);
		}

		::System::UInt32 FindShopTypeOfItem(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP_FINDSHOPTYPEOFITEM_OFFSET))(this, a1);
		}

		::System::Void SetLuaTable(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP_SETLUATABLE_OFFSET))(this, a1);
		}

		::System::Void SetFindShopIDOfItemFunc(::System::Func_3<::XLua::LuaTable*, ::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::XLua::LuaTable*, ::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP_SETFINDSHOPIDOFITEMFUNC_OFFSET))(this, a1);
		}
	};
}
