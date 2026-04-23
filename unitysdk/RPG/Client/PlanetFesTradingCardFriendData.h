#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesTradingCardFriendData_IServerAgent; }
namespace RPG::Client { class PlanetFesTradingCardFriendsItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_CHECKCANFRIENDEXCHANGECARD_OFFSET UNITYSDK_OFFSET(0xAD48620)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAD48550)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETDEMANDFRIENDDATAWITHPERMISSION_OFFSET UNITYSDK_OFFSET(0xAD48690)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETFRIENDDATA_OFFSET UNITYSDK_OFFSET(0xAD485C0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETPRESENTFRIENDDATAWITHPERMISSION_OFFSET UNITYSDK_OFFSET(0xAD48950)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GET_FRIENDSDATALIST_OFFSET UNITYSDK_OFFSET(0xAD48900)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAD485B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardFriendData_TypeDefinitionIndex = 61340;

	class PlanetFesTradingCardFriendData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesTradingCardFriendData_IServerAgent* _Agent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardFriendData* Create(::RPG::Client::PlanetFesTradingCardFriendData_IServerAgent* agent)
		{
			return ((::RPG::Client::PlanetFesTradingCardFriendData*(*)(::RPG::Client::PlanetFesTradingCardFriendData_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_CREATE_OFFSET))(agent);
		}

		::RPG::Client::PlanetFesTradingCardFriendsItem* GetFriendData(::System::UInt32 friendID)
		{
			return ((::RPG::Client::PlanetFesTradingCardFriendsItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETFRIENDDATA_OFFSET))(this, friendID);
		}

		::System::Boolean CheckCanFriendExchangeCard(::System::UInt32 friendID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_CHECKCANFRIENDEXCHANGECARD_OFFSET))(this, friendID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>* GetDemandFriendDataWithPermission()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETDEMANDFRIENDDATAWITHPERMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>* GetPresentFriendDataWithPermission()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETPRESENTFRIENDDATAWITHPERMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>* get_FriendsDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GET_FRIENDSDATALIST_OFFSET))(this);
		}
	};
}
