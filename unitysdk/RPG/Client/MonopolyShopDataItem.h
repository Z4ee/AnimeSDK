#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonopolyShopGoodsDataItem; }
namespace RPG::GameCore { class MonopolyShopConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET_GOODSLIST_OFFSET UNITYSDK_OFFSET(0xAABD690)
#define RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xAABD670)
#define RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xAABD610)
#define RPG_CLIENT_MONOPOLYSHOPDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xAABD680)
#define RPG_CLIENT_MONOPOLYSHOPDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAABD600)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyShopDataItem_TypeDefinitionIndex = 61048;

	class MonopolyShopDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyShopGoodsDataItem*>* _GoodsList; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPDATAITEM__CTOR_OFFSET))(this, id);
		}

		::RPG::GameCore::MonopolyShopConfigRow* get__Row()
		{
			return ((::RPG::GameCore::MonopolyShopConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPDATAITEM_SET_ID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyShopGoodsDataItem*>* get_GoodsList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyShopGoodsDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPDATAITEM_GET_GOODSLIST_OFFSET))(this);
		}
	};
}
