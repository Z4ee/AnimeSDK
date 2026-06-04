#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"
#include "unitysdk/System/Object.h"

class Class_1_1363318BFADF4D80;
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_CREATESHOPGOODBYDATA_OFFSET UNITYSDK_OFFSET(0xBBE8160)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_COST_OFFSET UNITYSDK_OFFSET(0xBBE5A00)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0xBBFEBB0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xBBFEBD0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0xBBFECB0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SOLD_OFFSET UNITYSDK_OFFSET(0xBBE8B70)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_SET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0xBBFEBC0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD__CTOR_OFFSET UNITYSDK_OFFSET(0xBBFEBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopGood_TypeDefinitionIndex = 60997;

	class GridFightShopGood : public ::System::Object
	{
	public:
		::Class_1_1363318BFADF4D80* _Goods; // 0x10
		::System::UInt32 _GoodIndex_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_1363318BFADF4D80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1363318BFADF4D80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightShopGood* CreateShopGoodByData(::Class_1_1363318BFADF4D80* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightShopGood*(*)(::Class_1_1363318BFADF4D80*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_CREATESHOPGOODBYDATA_OFFSET))(a1, a2);
		}

		::System::UInt32 get_GoodIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_GOODINDEX_OFFSET))(this);
		}

		::System::Void set_GoodIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_SET_GOODINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_Sold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SOLD_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_ISLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_COST_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SHOPICON_OFFSET))(this);
		}
	};
}
