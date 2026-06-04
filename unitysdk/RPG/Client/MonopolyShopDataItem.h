#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonopolyShopGoodsDataItem; }
namespace RPG::GameCore { class MonopolyShopConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET_GOODSLIST_OFFSET UNITYSDK_OFFSET(0xC18C040)
#define RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xC18C020)
#define RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC18BFC0)
#define RPG_CLIENT_MONOPOLYSHOPDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xC18C030)
#define RPG_CLIENT_MONOPOLYSHOPDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC18BFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyShopDataItem_TypeDefinitionIndex = 61982;

	class MonopolyShopDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyShopGoodsDataItem*>* _GoodsList; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonopolyShopConfigRow* get__Row()
		{
			return ((::RPG::GameCore::MonopolyShopConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPDATAITEM_SET_ID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyShopGoodsDataItem*>* get_GoodsList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyShopGoodsDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET_GOODSLIST_OFFSET))(this);
		}
	};
}
