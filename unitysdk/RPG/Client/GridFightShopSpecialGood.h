#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"

class Class_1_B2AD6E32098E0994;
class Class_1_D17272E82AE804C2_365;
namespace RPG::GameCore { class GridFightSpecialGoodsConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_COST_OFFSET UNITYSDK_OFFSET(0xA5914D0)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA591580)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0xA591740)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA591640)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xA5916E0)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0xA591520)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__CTOR_OFFSET UNITYSDK_OFFSET(0xA58FE30)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD___IFIXBASEPROXY_GET_COST_OFFSET UNITYSDK_OFFSET(0xA591750)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD___IFIXBASEPROXY_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0xA5917A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopSpecialGood_TypeDefinitionIndex = 60065;

	class GridFightShopSpecialGood : public ::RPG::Client::GridFightShopGood
	{
	public:
		::Class_1_D17272E82AE804C2_365* _GoodSpecial; // 0x20
		::RPG::GameCore::GridFightSpecialGoodsConfigRow* _ConfigRow; // 0x28

		::System::Void _ctor(::Class_1_B2AD6E32098E0994* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B2AD6E32098E0994*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__CTOR_OFFSET))(this, goods);
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
