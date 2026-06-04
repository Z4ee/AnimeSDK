#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_10.h"
#include "unitysdk/System/Object.h"

class Class_1_B1FF62FAE312BC49_8;
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CHANGEPERMISSION_OFFSET UNITYSDK_OFFSET(0xC4873D0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CHECKISPIECEHASEXCHANGED_OFFSET UNITYSDK_OFFSET(0xC4882B0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC4872D0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC486B70)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETEXTRALITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xC487EF0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETEXTRALITEMLIST_OFFSET UNITYSDK_OFFSET(0xC487E50)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETHEADICON_OFFSET UNITYSDK_OFFSET(0xC488140)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETID_OFFSET UNITYSDK_OFFSET(0xC488270)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETLACKINGITEMLIST_OFFSET UNITYSDK_OFFSET(0xC487C20)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETNAME_OFFSET UNITYSDK_OFFSET(0xC487F80)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xC4884F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETTOTAITEMDICT_OFFSET UNITYSDK_OFFSET(0xC4884B0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_EXTRALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xC488830)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDID_OFFSET UNITYSDK_OFFSET(0xC488810)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDSEXTRALITEMIDLIST_OFFSET UNITYSDK_OFFSET(0xC488890)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDSTOTALITEMIDLIST_OFFSET UNITYSDK_OFFSET(0xC488930)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0xC4889D0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_LASTLOGINTIME_OFFSET UNITYSDK_OFFSET(0xC488AD0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_PERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0xC488870)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_TOTALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xC488850)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET__FRIENDBASEDATA_OFFSET UNITYSDK_OFFSET(0xC487FE0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0xC4885A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_EXTRALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xC488840)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_FRIENDID_OFFSET UNITYSDK_OFFSET(0xC488820)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_PERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0xC488880)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_TOTALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xC488860)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xC487420)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC4872C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardFriendsItem_TypeDefinitionIndex = 62261;

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

		static ::RPG::Client::PlanetFesTradingCardFriendsItem* Create(::Class_1_B1FF62FAE312BC49_8* a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardFriendsItem*(*)(::Class_1_B1FF62FAE312BC49_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesTradingCardFriendsItem* Create_1(::RPG::Client::PlanetFesTradingCardFriendsItem* a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardFriendsItem*(*)(::RPG::Client::PlanetFesTradingCardFriendsItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_1_OFFSET))(a1);
		}

		::System::Void ChangePermission(::Enum_3_0A3761FE34514D6C_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CHANGEPERMISSION_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_B1FF62FAE312BC49_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_UPDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLackingItemList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETLACKINGITEMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetExtralItemList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETEXTRALITEMLIST_OFFSET))(this);
		}

		::System::UInt32 GetExtralItemCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETEXTRALITEMCOUNT_OFFSET))(this, a1);
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

		::System::Boolean CheckIsPieceHasExchanged(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CHECKISPIECEHASEXCHANGED_OFFSET))(this, a1, a2);
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

		::System::Void set_FriendID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_FRIENDID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ExtralPieceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_EXTRALPIECEDICT_OFFSET))(this);
		}

		::System::Void set_ExtralPieceDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_EXTRALPIECEDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_TotalPieceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_TOTALPIECEDICT_OFFSET))(this);
		}

		::System::Void set_TotalPieceDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_TOTALPIECEDICT_OFFSET))(this, a1);
		}

		::Enum_3_0A3761FE34514D6C_10 get_PermissionType()
		{
			return ((::Enum_3_0A3761FE34514D6C_10(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_PERMISSIONTYPE_OFFSET))(this);
		}

		::System::Void set_PermissionType(::Enum_3_0A3761FE34514D6C_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_PERMISSIONTYPE_OFFSET))(this, a1);
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
