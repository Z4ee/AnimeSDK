#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_34D861EC1B1CDD27;
class Class_1_45BB92167AED63A0_85;
class Class_1_5610B7568BF432BE;
class Class_1_78B57D7DFB653947;
class Class_1_917011F650CA881D;
class Class_1_F91AD0C5A85E4AFA_31;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IAvatarComparer; }
namespace RPG::Client { class RogueTournBuildRefHttpDataItem; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }
namespace RPG::Client { class RogueTournModule; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class RogueTournBuildRefFallbackLangConfig; }
namespace RPG::GameCore { class RogueTournBuildRefMatchConfig; }
namespace RPG::GameCore { class RogueTournBuildRefSortConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7FBB60)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETFAVORITEBUILDREFS_OFFSET UNITYSDK_OFFSET(0xC7FA010)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETONEEMPTYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xC7FB720)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETRECOMPATHAVATARCOMPARER_OFFSET UNITYSDK_OFFSET(0xC7FB980)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_CURFALLBACKLANGUAGE_OFFSET UNITYSDK_OFFSET(0xC7FBF40)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_CURFAVORITECOUNT_OFFSET UNITYSDK_OFFSET(0xC7FA510)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_FALLBACKLANGCONFIG_OFFSET UNITYSDK_OFFSET(0xC7FBE90)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_HTTPDATADICT_OFFSET UNITYSDK_OFFSET(0xC7FA720)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_HTTPDATAVERSION_OFFSET UNITYSDK_OFFSET(0xC7FA700)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_ISHTTPDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xC7FA6F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_ISSHARECODEDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xC7FB940)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MATCHCONFIG_OFFSET UNITYSDK_OFFSET(0xC7FBCD0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MAXFAVORITECOUNT_OFFSET UNITYSDK_OFFSET(0xC7FA740)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MAXSHARECODEARCHIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC7FB7E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_SHARECODEDATADICT_OFFSET UNITYSDK_OFFSET(0xC7FB960)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_SORTCONFIG_OFFSET UNITYSDK_OFFSET(0xC7FBDB0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_ISFAVORITEBUILDREF_OFFSET UNITYSDK_OFFSET(0xC7F9C00)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC7FBC90)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_PREPAREFAVORITEBUILDREF_OFFSET UNITYSDK_OFFSET(0xC7FA260)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATADICT_OFFSET UNITYSDK_OFFSET(0xC7FA730)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATAVERSION_OFFSET UNITYSDK_OFFSET(0xC7FA710)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_ISSHARECODEDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xC7FB950)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_MAXFAVORITECOUNT_OFFSET UNITYSDK_OFFSET(0xC7FA750)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_SHARECODEDATADICT_OFFSET UNITYSDK_OFFSET(0xC7FB970)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDATAVERSION_OFFSET UNITYSDK_OFFSET(0xC7F8D60)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDELETEARCHIVE_OFFSET UNITYSDK_OFFSET(0xC7FB380)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCFAVORITE_OFFSET UNITYSDK_OFFSET(0xC7F9330)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCINTERACTDATA_OFFSET UNITYSDK_OFFSET(0xC7F94A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCISLIKE_OFFSET UNITYSDK_OFFSET(0xC7F9A10)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCRENAMEARCHIVE_OFFSET UNITYSDK_OFFSET(0xC7FB1E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSERVERARCHIVES_OFFSET UNITYSDK_OFFSET(0xC7FA9B0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSTATICDATA_OFFSET UNITYSDK_OFFSET(0xC7F8DB0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__ADJUSTFAVORITEBUILDREFS_OFFSET UNITYSDK_OFFSET(0xC7FA570)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__CLEARHTTPDATADICT_OFFSET UNITYSDK_OFFSET(0xC7F8B80)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__CLEARSHARECODEDATADICT_OFFSET UNITYSDK_OFFSET(0xC7FA7B0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7F89D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSEHTTP_OFFSET UNITYSDK_OFFSET(0xC7F8AE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSESHARECODE_OFFSET UNITYSDK_OFFSET(0xC7FA760)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__TRYPRUNEFAVORITEBUILDREFS_OFFSET UNITYSDK_OFFSET(0xC7F9C90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefInfo_TypeDefinitionIndex = 63161;

	class RogueTournBuildRefInfo : public ::System::Object
	{
	public:
		// static const ::System::String* _MatchConfigPath; // 0x0
		// static const ::System::String* _SortConfigPath; // 0x0
		// static const ::System::String* _FallbackLangConfigPath; // 0x0
		::System::Collections::Generic::HashSet_1<::RPG::Client::MongoObjectId>* _FavoriteBuildRefIDs; // 0x10
		::RPG::GameCore::RogueTournBuildRefSortConfig* _SortConfig; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>* _ShareCodeDataDict_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>* _HttpDataDict_k__BackingField; // 0x28
		::RPG::GameCore::RogueTournBuildRefFallbackLangConfig* _FallbackLangConfig; // 0x30
		::RPG::GameCore::RogueTournBuildRefMatchConfig* _MatchConfig; // 0x38
		::RPG::Client::RogueTournModule* _OwnerRef; // 0x40
		::System::UInt32 _MaxFavoriteCount_k__BackingField; // 0x48
		::System::Boolean _IsShareCodeDataPrepared_k__BackingField; // 0x4C
		::System::UInt32 _HttpDataVersion_k__BackingField; // 0x50

		::System::Void _ctor(::RPG::Client::RogueTournModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournModule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void _DisposeHttp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSEHTTP_OFFSET))(this);
		}

		::System::Void SyncDataVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDATAVERSION_OFFSET))(this, a1);
		}

		::System::Void SyncStaticData(::Class_1_917011F650CA881D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_917011F650CA881D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSTATICDATA_OFFSET))(this, a1);
		}

		::System::Void SyncFavorite(::Class_1_34D861EC1B1CDD27* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_34D861EC1B1CDD27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCFAVORITE_OFFSET))(this, a1);
		}

		::System::Void SyncInteractData(::Class_1_5610B7568BF432BE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5610B7568BF432BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCINTERACTDATA_OFFSET))(this, a1);
		}

		::System::Void SyncIsLike(::RPG::Client::MongoObjectId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCISLIKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsFavoriteBuildRef(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_ISFAVORITEBUILDREF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefHttpDataItem*>* GetFavoriteBuildRefs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefHttpDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETFAVORITEBUILDREFS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* PrepareFavoriteBuildRef()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_PREPAREFAVORITEBUILDREF_OFFSET))(this);
		}

		::System::Void _ClearHttpDataDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__CLEARHTTPDATADICT_OFFSET))(this);
		}

		::System::Void _TryPruneFavoriteBuildRefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__TRYPRUNEFAVORITEBUILDREFS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _AdjustFavoriteBuildRefs()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__ADJUSTFAVORITEBUILDREFS_OFFSET))(this);
		}

		::System::Boolean get_IsHttpDataPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_ISHTTPDATAPREPARED_OFFSET))(this);
		}

		::System::UInt32 get_HttpDataVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_HTTPDATAVERSION_OFFSET))(this);
		}

		::System::Void set_HttpDataVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATAVERSION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>* get_HttpDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_HTTPDATADICT_OFFSET))(this);
		}

		::System::Void set_HttpDataDict(::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATADICT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurFavoriteCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_CURFAVORITECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_MaxFavoriteCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MAXFAVORITECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxFavoriteCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_MAXFAVORITECOUNT_OFFSET))(this, a1);
		}

		::System::Void _DisposeShareCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSESHARECODE_OFFSET))(this);
		}

		::System::Void SyncServerArchives(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_78B57D7DFB653947*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_78B57D7DFB653947*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSERVERARCHIVES_OFFSET))(this, a1);
		}

		::System::Void SyncRenameArchive(::Class_1_F91AD0C5A85E4AFA_31* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCRENAMEARCHIVE_OFFSET))(this, a1);
		}

		::System::Void SyncDeleteArchive(::Class_1_45BB92167AED63A0_85* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDELETEARCHIVE_OFFSET))(this, a1);
		}

		::System::UInt32 GetOneEmptySlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETONEEMPTYSLOTINDEX_OFFSET))(this);
		}

		::System::Void _ClearShareCodeDataDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__CLEARSHARECODEDATADICT_OFFSET))(this);
		}

		::System::Boolean get_IsShareCodeDataPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_ISSHARECODEDATAPREPARED_OFFSET))(this);
		}

		::System::Void set_IsShareCodeDataPrepared(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_ISSHARECODEDATAPREPARED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>* get_ShareCodeDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_SHARECODEDATADICT_OFFSET))(this);
		}

		::System::Void set_ShareCodeDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_SHARECODEDATADICT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxShareCodeArchiveCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MAXSHARECODEARCHIVECOUNT_OFFSET))(this);
		}

		static ::RPG::Client::IAvatarComparer* GetRecomPathAvatarComparer()
		{
			return ((::RPG::Client::IAvatarComparer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETRECOMPATHAVATARCOMPARER_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_ONRECONNECT_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournBuildRefMatchConfig* get_MatchConfig()
		{
			return ((::RPG::GameCore::RogueTournBuildRefMatchConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MATCHCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournBuildRefSortConfig* get_SortConfig()
		{
			return ((::RPG::GameCore::RogueTournBuildRefSortConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_SORTCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournBuildRefFallbackLangConfig* get_FallbackLangConfig()
		{
			return ((::RPG::GameCore::RogueTournBuildRefFallbackLangConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_FALLBACKLANGCONFIG_OFFSET))(this);
		}

		::System::String* get_CurFallbackLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_CURFALLBACKLANGUAGE_OFFSET))(this);
		}
	};
}
