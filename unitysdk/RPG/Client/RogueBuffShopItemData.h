#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3162D2F7EA647B9;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueBuffData; }

#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0xDEA6680)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0xDEA6660)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xDEA6620)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xDEA6640)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ROGUEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xDEA6600)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0xDEA6690)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0xDEA6670)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xDEA6630)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xDEA6650)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ROGUEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xDEA6610)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDEA5700)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffShopItemData_TypeDefinitionIndex = 67327;

	class RogueBuffShopItemData : public ::System::Object
	{
	public:
		::RPG::Client::RogueBuffData* _RogueBuffData_k__BackingField; // 0x10
		::RPG::Client::ItemData* _CurrencyItem_k__BackingField; // 0x18
		::RPG::Client::ItemData* _OriginCurrencyItem_k__BackingField; // 0x20
		::System::Boolean _AlreadyHave_k__BackingField; // 0x28
		::System::Boolean _Available_k__BackingField; // 0x29

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_C3162D2F7EA647B9* a3, ::Class_1_C3162D2F7EA647B9* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_C3162D2F7EA647B9*, ::Class_1_C3162D2F7EA647B9*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::RogueBuffData* get_RogueBuffData()
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ROGUEBUFFDATA_OFFSET))(this);
		}

		::System::Void set_RogueBuffData(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ROGUEBUFFDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_CurrencyItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_CURRENCYITEM_OFFSET))(this);
		}

		::System::Void set_CurrencyItem(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_CURRENCYITEM_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_OriginCurrencyItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET))(this);
		}

		::System::Void set_OriginCurrencyItem(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET))(this, a1);
		}

		::System::Boolean get_Available()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Void set_Available(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_AVAILABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_AlreadyHave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ALREADYHAVE_OFFSET))(this);
		}

		::System::Void set_AlreadyHave(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ALREADYHAVE_OFFSET))(this, a1);
		}
	};
}
