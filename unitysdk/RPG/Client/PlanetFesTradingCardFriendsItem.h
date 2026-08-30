#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_10.h"
#include "unitysdk/System/Object.h"

class Class_1_6F289C13530086A8_1;
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CHANGEPERMISSION_OFFSET UNITYSDK_OFFSET(0x1C2CE7A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CHECKISPIECEHASEXCHANGED_OFFSET UNITYSDK_OFFSET(0x1C2CFA30)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1C2CE6A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C2CDC90)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETEXTRALITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1C2CF620)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETEXTRALITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C2CF560)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETHEADICON_OFFSET UNITYSDK_OFFSET(0x1C2CF870)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETID_OFFSET UNITYSDK_OFFSET(0x1C2CF9F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETLACKINGITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C2CF2A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETNAME_OFFSET UNITYSDK_OFFSET(0x1C2CF6B0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1C2CFC70)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GETTOTAITEMDICT_OFFSET UNITYSDK_OFFSET(0x1C2CFC30)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_EXTRALPIECEDICT_OFFSET UNITYSDK_OFFSET(0x1C2CFFB0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDID_OFFSET UNITYSDK_OFFSET(0x1C2CFF90)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDSEXTRALITEMIDLIST_OFFSET UNITYSDK_OFFSET(0x1C2D0010)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_FRIENDSTOTALITEMIDLIST_OFFSET UNITYSDK_OFFSET(0x1C2D00D0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x1C2D0190)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_LASTLOGINTIME_OFFSET UNITYSDK_OFFSET(0x1C2D02D0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_PERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C2CFFF0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET_TOTALPIECEDICT_OFFSET UNITYSDK_OFFSET(0x1C2CFFD0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_GET__FRIENDBASEDATA_OFFSET UNITYSDK_OFFSET(0x1C2CF710)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0x1C2CFD20)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_EXTRALPIECEDICT_OFFSET UNITYSDK_OFFSET(0x1C2CFFC0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_FRIENDID_OFFSET UNITYSDK_OFFSET(0x1C2CFFA0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_PERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C2D0000)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_SET_TOTALPIECEDICT_OFFSET UNITYSDK_OFFSET(0x1C2CFFE0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C2CE7F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CE690)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardFriendsItem_TypeDefinitionIndex = 66612;

	class PlanetFesTradingCardFriendsItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TotalPieceDict_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ExtralPieceDict_k__BackingField; // 0x18
		::System::UInt32 _FriendID_k__BackingField; // 0x20
		::Enum_3_0A3761FE34514D6C_10 _PermissionType_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardFriendsItem* Create(::Class_1_6F289C13530086A8_1* a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardFriendsItem*(*)(::Class_1_6F289C13530086A8_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesTradingCardFriendsItem* Create_1(::RPG::Client::PlanetFesTradingCardFriendsItem* a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardFriendsItem*(*)(::RPG::Client::PlanetFesTradingCardFriendsItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CREATE_1_OFFSET))(a1);
		}

		::System::Void ChangePermission(::Enum_3_0A3761FE34514D6C_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_CHANGEPERMISSION_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_6F289C13530086A8_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6F289C13530086A8_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDSITEM_UPDATE_OFFSET))(this, a1);
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
