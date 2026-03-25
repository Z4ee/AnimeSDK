#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"

class Class_1_D2924896099E0408;
class Class_1_FA4F4A67B1C04320_356;
namespace RPG::GameCore { class GridFightSpecialGoodsConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_COST_OFFSET UNITYSDK_OFFSET(0x98AECD0)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_DESC_OFFSET UNITYSDK_OFFSET(0x98AED80)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0x98AEF40)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98AEE40)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x98AEEE0)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x98AED20)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__CTOR_OFFSET UNITYSDK_OFFSET(0x98ADB70)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD___IFIXBASEPROXY_GET_COST_OFFSET UNITYSDK_OFFSET(0x98AEF50)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD___IFIXBASEPROXY_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x98AEFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopSpecialGood_TypeDefinitionIndex = 52977;

	class GridFightShopSpecialGood : public ::RPG::Client::GridFightShopGood
	{
	public:
		::RPG::GameCore::GridFightSpecialGoodsConfigRow* _ConfigRow; // 0x20
		::Class_1_FA4F4A67B1C04320_356* _GoodSpecial; // 0x28

		::System::Void _ctor(::Class_1_D2924896099E0408* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2924896099E0408*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__CTOR_OFFSET))(this, goods);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_COST_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_SHOPICON_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_DESC_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::GridFightShopGoodType get_GoodType()
		{
			return ((::RPG::Client::GridFightShopGoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_GOODTYPE_OFFSET))(this);
		}

		::System::UInt32 __iFixBaseProxy_get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD___IFIXBASEPROXY_GET_COST_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD___IFIXBASEPROXY_GET_SHOPICON_OFFSET))(this);
		}
	};
}
