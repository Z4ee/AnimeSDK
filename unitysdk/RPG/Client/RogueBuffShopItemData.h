#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3162D2F7EA647B9;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueBuffData; }

#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0x1BC7C030)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1BC7C010)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1BC7BFD0)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1BC7BFF0)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_GET_ROGUEBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1BC7BFB0)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0x1BC7C040)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1BC7C020)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1BC7BFE0)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1BC7C000)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA_SET_ROGUEBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1BC7BFC0)
#define RPG_CLIENT_ROGUEBUFFSHOPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC7B0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffShopItemData_TypeDefinitionIndex = 67327;

	class RogueBuffShopItemData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _OriginCurrencyItem_k__BackingField; // 0x10
		::RPG::Client::ItemData* _CurrencyItem_k__BackingField; // 0x18
		::RPG::Client::RogueBuffData* _RogueBuffData_k__BackingField; // 0x20
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
