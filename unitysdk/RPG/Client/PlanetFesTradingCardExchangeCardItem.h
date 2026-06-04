#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesCardData; }
namespace RPG::GameCore { class PlanetFesCardRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_CHECKISFINISH_OFFSET UNITYSDK_OFFSET(0xC485A40)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC4857A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GETCARDITEMNUM_OFFSET UNITYSDK_OFFSET(0xC485A00)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_BUFFIDLIST_OFFSET UNITYSDK_OFFSET(0xC485BD0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_CARDBASEDATA_OFFSET UNITYSDK_OFFSET(0xC485C20)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_CARDID_OFFSET UNITYSDK_OFFSET(0xC485AC0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_CARDPIECENUM_OFFSET UNITYSDK_OFFSET(0xC485B50)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC485BF0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_EXCHANGEABLEPIECELIST_OFFSET UNITYSDK_OFFSET(0xC485A80)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0xC485AE0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0xC485BB0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC485B00)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xC485B30)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_TOTALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xC485AA0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET__CARDROW_OFFSET UNITYSDK_OFFSET(0xC485CD0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_SET_EXCHANGEABLEPIECELIST_OFFSET UNITYSDK_OFFSET(0xC485A90)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_SET_TOTALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xC485AB0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_SET__CARDROW_OFFSET UNITYSDK_OFFSET(0xC485CE0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_TRYCREATEFESTRADINGCARDEXCHANGECARDITEM_OFFSET UNITYSDK_OFFSET(0xC485510)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC485790)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardExchangeCardItem_TypeDefinitionIndex = 62253;

	class PlanetFesTradingCardExchangeCardItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TotalPieceDict_k__BackingField; // 0x10
		::RPG::GameCore::PlanetFesCardRow* __CardRow_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ExchangeablePieceList_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM__CTOR_OFFSET))(this);
		}

		static ::System::Boolean TryCreateFesTradingCardExchangeCardItem(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::RPG::Client::PlanetFesTradingCardExchangeCardItem*& a4)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::RPG::Client::PlanetFesTradingCardExchangeCardItem*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_TRYCREATEFESTRADINGCARDEXCHANGECARDITEM_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::PlanetFesTradingCardExchangeCardItem* Create(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3)
		{
			return ((::RPG::Client::PlanetFesTradingCardExchangeCardItem*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetCardItemNum()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GETCARDITEMNUM_OFFSET))(this);
		}

		::System::Boolean CheckIsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_CHECKISFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ExchangeablePieceList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_EXCHANGEABLEPIECELIST_OFFSET))(this);
		}

		::System::Void set_ExchangeablePieceList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_SET_EXCHANGEABLEPIECELIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_TotalPieceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_TOTALPIECEDICT_OFFSET))(this);
		}

		::System::Void set_TotalPieceDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_SET_TOTALPIECEDICT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_CARDID_OFFSET))(this);
		}

		::System::String* get_ImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_IMGPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_RARITY_OFFSET))(this);
		}

		::System::Int32 get_CardPieceNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_CARDPIECENUM_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ItemList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_ITEMLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_BuffIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_BUFFIDLIST_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_DESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::PlanetFesCardData* get_CardBaseData()
		{
			return ((::RPG::Client::PlanetFesCardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET_CARDBASEDATA_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesCardRow* get__CardRow()
		{
			return ((::RPG::GameCore::PlanetFesCardRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_GET__CARDROW_OFFSET))(this);
		}

		::System::Void set__CardRow(::RPG::GameCore::PlanetFesCardRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesCardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGECARDITEM_SET__CARDROW_OFFSET))(this, a1);
		}
	};
}
