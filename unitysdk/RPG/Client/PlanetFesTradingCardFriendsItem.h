#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_10.h"
#include "unitysdk/System/Object.h"

class Class_1_6F289C13530086A8_2;
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CHANGEPERMISSION_OFFSET UNITYSDK_OFFSET(0xAD49430)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CHECKISPIECEHASEXCHANGED_OFFSET UNITYSDK_OFFSET(0xAD4A3F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xAD49330)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xAD48BC0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETEXTRALITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xAD4A030)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETEXTRALITEMLIST_OFFSET UNITYSDK_OFFSET(0xAD49F70)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETHEADICON_OFFSET UNITYSDK_OFFSET(0xAD4A280)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETID_OFFSET UNITYSDK_OFFSET(0xAD4A3B0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETLACKINGITEMLIST_OFFSET UNITYSDK_OFFSET(0xAD49CB0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETNAME_OFFSET UNITYSDK_OFFSET(0xAD4A0C0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xAD4A5B0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETTOTAITEMDICT_OFFSET UNITYSDK_OFFSET(0xAD4A570)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_EXTRALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xAD4A8F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDID_OFFSET UNITYSDK_OFFSET(0xAD4A8D0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDSEXTRALITEMIDLIST_OFFSET UNITYSDK_OFFSET(0xAD4A950)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDSTOTALITEMIDLIST_OFFSET UNITYSDK_OFFSET(0xAD4AA10)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0xAD4AAD0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_LASTLOGINTIME_OFFSET UNITYSDK_OFFSET(0xAD4ABD0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_PERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0xAD4A930)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_TOTALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xAD4A910)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET__FRIENDBASEDATA_OFFSET UNITYSDK_OFFSET(0xAD4A120)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0xAD4A660)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_EXTRALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xAD4A900)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_FRIENDID_OFFSET UNITYSDK_OFFSET(0xAD4A8E0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_PERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0xAD4A940)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_TOTALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xAD4A920)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xAD49480)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAD49320)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardFriendsItem_TypeDefinitionIndex = 61337;

	class PlanetFesTradingCardFriendsItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ExtralPieceDict_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TotalPieceDict_k__BackingField; // 0x18
		::System::UInt32 _FriendID_k__BackingField; // 0x20
		::Enum_3_0A3761FE34514D6C_10 _PermissionType_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardFriendsItem* Create(::Class_1_6F289C13530086A8_2* info)
		{
			return ((::RPG::Client::PlanetFesTradingCardFriendsItem*(*)(::Class_1_6F289C13530086A8_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_OFFSET))(info);
		}

		static ::RPG::Client::PlanetFesTradingCardFriendsItem* Create_1(::RPG::Client::PlanetFesTradingCardFriendsItem* item)
		{
			return ((::RPG::Client::PlanetFesTradingCardFriendsItem*(*)(::RPG::Client::PlanetFesTradingCardFriendsItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_1_OFFSET))(item);
		}

		::System::Void ChangePermission(::Enum_3_0A3761FE34514D6C_10 type)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CHANGEPERMISSION_OFFSET))(this, type);
		}

		::System::Void Update(::Class_1_6F289C13530086A8_2* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6F289C13530086A8_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_UPDATE_OFFSET))(this, info);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLackingItemList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETLACKINGITEMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetExtralItemList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETEXTRALITEMLIST_OFFSET))(this);
		}

		::System::UInt32 GetExtralItemCount(::System::UInt32 ID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETEXTRALITEMCOUNT_OFFSET))(this, ID);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETNAME_OFFSET))(this);
		}

		::System::String* GetHeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETHEADICON_OFFSET))(this);
		}

		::System::UInt32 GetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETID_OFFSET))(this);
		}

		::System::Boolean CheckIsPieceHasExchanged(::System::UInt32 pieceID, ::System::UInt32 receiverID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CHECKISPIECEHASEXCHANGED_OFFSET))(this, pieceID, receiverID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetTotaItemDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETTOTAITEMDICT_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* GetPlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETPLATFORMINFO_OFFSET))(this);
		}

		::System::Boolean IsItemValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_ISITEMVALID_OFFSET))(this);
		}

		::System::UInt32 get_FriendID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDID_OFFSET))(this);
		}

		::System::Void set_FriendID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_FRIENDID_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ExtralPieceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_EXTRALPIECEDICT_OFFSET))(this);
		}

		::System::Void set_ExtralPieceDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_EXTRALPIECEDICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_TotalPieceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_TOTALPIECEDICT_OFFSET))(this);
		}

		::System::Void set_TotalPieceDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_TOTALPIECEDICT_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_10 get_PermissionType()
		{
			return ((::Enum_3_0A3761FE34514D6C_10(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_PERMISSIONTYPE_OFFSET))(this);
		}

		::System::Void set_PermissionType(::Enum_3_0A3761FE34514D6C_10 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_PERMISSIONTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FriendsExtralItemIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDSEXTRALITEMIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FriendsTotalItemIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDSTOTALITEMIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsMarked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_ISMARKED_OFFSET))(this);
		}

		::System::UInt32 get_LastLoginTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_LASTLOGINTIME_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* get__FriendBaseData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET__FRIENDBASEDATA_OFFSET))(this);
		}
	};
}
