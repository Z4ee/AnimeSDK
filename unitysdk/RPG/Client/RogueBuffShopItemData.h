#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueBuffData; }

#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0xA2F2D60)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0xA2F2D40)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xA2F2D00)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xA2F2D20)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ROGUEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA2F2CE0)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0xA2F2D70)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0xA2F2D50)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xA2F2D10)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xA2F2D30)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ROGUEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA2F2CF0)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2F21F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffShopItemData_TypeDefinitionIndex = 54844;

	class RogueBuffShopItemData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _CurrencyItem_k__BackingField; // 0x10
		::RPG::Client::ItemData* _OriginCurrencyItem_k__BackingField; // 0x18
		::RPG::Client::RogueBuffData* _RogueBuffData_k__BackingField; // 0x20
		::System::Boolean _Available_k__BackingField; // 0x28
		::System::Boolean _AlreadyHave_k__BackingField; // 0x29

		::System::Void _ctor(::System::UInt32 buffID, ::System::UInt32 buffLevel, ::Class_1_4D5D53619B020DDD* currency, ::Class_1_4D5D53619B020DDD* originCurrency, ::System::Boolean isAvailable, ::System::Boolean alreadyHave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_4D5D53619B020DDD*, ::Class_1_4D5D53619B020DDD*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA__CTOR_OFFSET))(this, buffID, buffLevel, currency, originCurrency, isAvailable, alreadyHave);
		}

		::RPG::Client::RogueBuffData* get_RogueBuffData()
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ROGUEBUFFDATA_OFFSET))(this);
		}

		::System::Void set_RogueBuffData(::RPG::Client::RogueBuffData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ROGUEBUFFDATA_OFFSET))(this, value);
		}

		::RPG::Client::ItemData* get_CurrencyItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_CURRENCYITEM_OFFSET))(this);
		}

		::System::Void set_CurrencyItem(::RPG::Client::ItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_CURRENCYITEM_OFFSET))(this, value);
		}

		::RPG::Client::ItemData* get_OriginCurrencyItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET))(this);
		}

		::System::Void set_OriginCurrencyItem(::RPG::Client::ItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET))(this, value);
		}

		::System::Boolean get_Available()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Void set_Available(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_AVAILABLE_OFFSET))(this, value);
		}

		::System::Boolean get_AlreadyHave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ALREADYHAVE_OFFSET))(this);
		}

		::System::Void set_AlreadyHave(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ALREADYHAVE_OFFSET))(this, value);
		}
	};
}
