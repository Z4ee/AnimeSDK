#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyGoodsType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class MonopolyGoodsConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_CURRENCYDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xD8ADC40)
#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_CURRENCYICON_OFFSET UNITYSDK_OFFSET(0xD8ADDA0)
#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD8AE180)
#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_GOODSTYPE_OFFSET UNITYSDK_OFFSET(0xD8ADEE0)
#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD8AE240)
#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xD8ADC20)
#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD8ADF80)
#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_TEXTDISPLAYPARAM1_OFFSET UNITYSDK_OFFSET(0xD8AE040)
#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_TEXTDISPLAYPARAM2_OFFSET UNITYSDK_OFFSET(0xD8AE0E0)
#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xD8ADBC0)
#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xD8ADC30)
#define RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD8ADBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyShopGoodsDataItem_TypeDefinitionIndex = 66294;

	class MonopolyShopGoodsDataItem : public ::System::Object
	{
	public:
		::RPG::Client::ItemDisplayData* _CurrencyDisplayData; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonopolyGoodsConfigRow* get__Row()
		{
			return ((::RPG::GameCore::MonopolyGoodsConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::ItemDisplayData* get_CurrencyDisplayData()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_CURRENCYDISPLAYDATA_OFFSET))(this);
		}

		::System::String* get_CurrencyIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_CURRENCYICON_OFFSET))(this);
		}

		::RPG::GameCore::MonopolyGoodsType get_GoodsType()
		{
			return ((::RPG::GameCore::MonopolyGoodsType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_GOODSTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_TextDisplayParam1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_TEXTDISPLAYPARAM1_OFFSET))(this);
		}

		::System::UInt32 get_TextDisplayParam2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_TEXTDISPLAYPARAM2_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPGOODSDATAITEM_GET_ICONPATH_OFFSET))(this);
		}
	};
}
