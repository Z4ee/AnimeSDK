#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesTradingCardExchangeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IPlanetFesTradingCardExchangeData; }
namespace RPG::Client { class PlanetFesTradingCardExchangeCardItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_CHECKPIECECANEXCHANGE_OFFSET UNITYSDK_OFFSET(0x9FD32A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9FD2790)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9FBDAE0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETEXCHANGEABLECARDBYPIECEID_OFFSET UNITYSDK_OFFSET(0x9FD3BF0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETEXCHANGEABLECARDORDEREDBYTHEME_OFFSET UNITYSDK_OFFSET(0x9FD3460)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETEXCHANGEABLEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FD2860)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETFRIENDID_OFFSET UNITYSDK_OFFSET(0x9FD3F50)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETPRESENTERID_OFFSET UNITYSDK_OFFSET(0x9FD30A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETPRESENTERITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FD2D40)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETPRESENTERNAME_OFFSET UNITYSDK_OFFSET(0x9FD31A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETRECEIVERID_OFFSET UNITYSDK_OFFSET(0x9FD2EA0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETRECEIVERITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FD2BE0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETRECEIVERNAME_OFFSET UNITYSDK_OFFSET(0x9FD2FA0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GET_EXCHANGEABLEIDLIST_OFFSET UNITYSDK_OFFSET(0x9FD29A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GET_EXCHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9FD42C0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GET__PRESENTER_OFFSET UNITYSDK_OFFSET(0x9FD42E0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GET__RECEIVER_OFFSET UNITYSDK_OFFSET(0x9FD4300)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_SETPANELDATA_OFFSET UNITYSDK_OFFSET(0x9FD2800)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_SET_EXCHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9FD42D0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_SET__PRESENTER_OFFSET UNITYSDK_OFFSET(0x9FD42F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_SET__RECEIVER_OFFSET UNITYSDK_OFFSET(0x9FD4310)
#define RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD2780)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardPanelData_TypeDefinitionIndex = 54167;

	class PlanetFesTradingCardPanelData : public ::System::Object
	{
	public:
		::RPG::Client::IPlanetFesTradingCardExchangeData* __Receiver_k__BackingField; // 0x10
		::RPG::Client::IPlanetFesTradingCardExchangeData* __Presenter_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardExchangeCardItem*>*>* _ExchangeableCardOrderedByThemeCache; // 0x20
		::RPG::Client::PlanetFesTradingCardExchangeType _ExchangeType_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardPanelData* Create(::RPG::Client::IPlanetFesTradingCardExchangeData* presenter, ::RPG::Client::IPlanetFesTradingCardExchangeData* receiver, ::RPG::Client::PlanetFesTradingCardExchangeType type)
		{
			return ((::RPG::Client::PlanetFesTradingCardPanelData*(*)(::RPG::Client::IPlanetFesTradingCardExchangeData*, ::RPG::Client::IPlanetFesTradingCardExchangeData*, ::RPG::Client::PlanetFesTradingCardExchangeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_CREATE_OFFSET))(presenter, receiver, type);
		}

		static ::RPG::Client::PlanetFesTradingCardPanelData* Create_1()
		{
			return ((::RPG::Client::PlanetFesTradingCardPanelData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_CREATE_1_OFFSET))();
		}

		::System::Void SetPanelData(::RPG::Client::IPlanetFesTradingCardExchangeData* presenter, ::RPG::Client::IPlanetFesTradingCardExchangeData* receiver)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPlanetFesTradingCardExchangeData*, ::RPG::Client::IPlanetFesTradingCardExchangeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_SETPANELDATA_OFFSET))(this, presenter, receiver);
		}

		::System::UInt32 GetExchangeableItemCount(::System::UInt32 ID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETEXCHANGEABLEITEMCOUNT_OFFSET))(this, ID);
		}

		::System::UInt32 GetReceiverItemCount(::System::UInt32 ID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETRECEIVERITEMCOUNT_OFFSET))(this, ID);
		}

		::System::UInt32 GetPresenterItemCount(::System::UInt32 ID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETPRESENTERITEMCOUNT_OFFSET))(this, ID);
		}

		::System::UInt32 GetReceiverId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETRECEIVERID_OFFSET))(this);
		}

		::System::String* GetReceiverName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETRECEIVERNAME_OFFSET))(this);
		}

		::System::UInt32 GetPresenterId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETPRESENTERID_OFFSET))(this);
		}

		::System::String* GetPresenterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETPRESENTERNAME_OFFSET))(this);
		}

		::System::Boolean CheckPieceCanExchange(::System::UInt32 pieceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_CHECKPIECECANEXCHANGE_OFFSET))(this, pieceID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardExchangeCardItem*>* GetExchangeableCardOrderedByTheme(::System::UInt32 ThemeID, ::System::Boolean forceRefresh)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardExchangeCardItem*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETEXCHANGEABLECARDORDEREDBYTHEME_OFFSET))(this, ThemeID, forceRefresh);
		}

		::RPG::Client::PlanetFesTradingCardExchangeCardItem* GetExchangeableCardByPieceID(::System::UInt32 pieceID)
		{
			return ((::RPG::Client::PlanetFesTradingCardExchangeCardItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETEXCHANGEABLECARDBYPIECEID_OFFSET))(this, pieceID);
		}

		::System::UInt32 GetFriendID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GETFRIENDID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ExchangeableIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GET_EXCHANGEABLEIDLIST_OFFSET))(this);
		}

		::RPG::Client::PlanetFesTradingCardExchangeType get_ExchangeType()
		{
			return ((::RPG::Client::PlanetFesTradingCardExchangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GET_EXCHANGETYPE_OFFSET))(this);
		}

		::System::Void set_ExchangeType(::RPG::Client::PlanetFesTradingCardExchangeType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_SET_EXCHANGETYPE_OFFSET))(this, value);
		}

		::RPG::Client::IPlanetFesTradingCardExchangeData* get__Presenter()
		{
			return ((::RPG::Client::IPlanetFesTradingCardExchangeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GET__PRESENTER_OFFSET))(this);
		}

		::System::Void set__Presenter(::RPG::Client::IPlanetFesTradingCardExchangeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPlanetFesTradingCardExchangeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_SET__PRESENTER_OFFSET))(this, value);
		}

		::RPG::Client::IPlanetFesTradingCardExchangeData* get__Receiver()
		{
			return ((::RPG::Client::IPlanetFesTradingCardExchangeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_GET__RECEIVER_OFFSET))(this);
		}

		::System::Void set__Receiver(::RPG::Client::IPlanetFesTradingCardExchangeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPlanetFesTradingCardExchangeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPANELDATA_SET__RECEIVER_OFFSET))(this, value);
		}
	};
}
