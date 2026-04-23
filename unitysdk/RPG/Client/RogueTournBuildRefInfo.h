#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_34D861EC1B1CDD27;
class Class_1_45BB92167AED63A0_83;
class Class_1_5610B7568BF432BE;
class Class_1_8E690193A2EE0AD6;
class Class_1_8FCA304455C313FC_4;
class Class_1_9C480F8C7F93E8F5;
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

#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0AAB70)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETFAVORITEBUILDREFS_OFFSET UNITYSDK_OFFSET(0xB0A9060)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETONEEMPTYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB0AA720)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETRECOMPATHAVATARCOMPARER_OFFSET UNITYSDK_OFFSET(0xB0AA9A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_CURFALLBACKLANGUAGE_OFFSET UNITYSDK_OFFSET(0xB0AAF50)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_CURFAVORITECOUNT_OFFSET UNITYSDK_OFFSET(0xB0A9540)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_FALLBACKLANGCONFIG_OFFSET UNITYSDK_OFFSET(0xB0AAEA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_HTTPDATADICT_OFFSET UNITYSDK_OFFSET(0xB0A9740)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_HTTPDATAVERSION_OFFSET UNITYSDK_OFFSET(0xB0A9720)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_ISHTTPDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xB0A9710)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_ISSHARECODEDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xB0AA960)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MATCHCONFIG_OFFSET UNITYSDK_OFFSET(0xB0AACE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MAXFAVORITECOUNT_OFFSET UNITYSDK_OFFSET(0xB0A9760)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MAXSHARECODEARCHIVECOUNT_OFFSET UNITYSDK_OFFSET(0xB0AA810)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_SHARECODEDATADICT_OFFSET UNITYSDK_OFFSET(0xB0AA980)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_SORTCONFIG_OFFSET UNITYSDK_OFFSET(0xB0AADC0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_ISFAVORITEBUILDREF_OFFSET UNITYSDK_OFFSET(0xB0A8C20)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB0AACA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_PREPAREFAVORITEBUILDREF_OFFSET UNITYSDK_OFFSET(0xB0A92A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATADICT_OFFSET UNITYSDK_OFFSET(0xB0A9750)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATAVERSION_OFFSET UNITYSDK_OFFSET(0xB0A9730)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_ISSHARECODEDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xB0AA970)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_MAXFAVORITECOUNT_OFFSET UNITYSDK_OFFSET(0xB0A9770)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_SHARECODEDATADICT_OFFSET UNITYSDK_OFFSET(0xB0AA990)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDATAVERSION_OFFSET UNITYSDK_OFFSET(0xB0A7D90)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDELETEARCHIVE_OFFSET UNITYSDK_OFFSET(0xB0AA3A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCFAVORITE_OFFSET UNITYSDK_OFFSET(0xB0A8390)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCINTERACTDATA_OFFSET UNITYSDK_OFFSET(0xB0A8510)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCISLIKE_OFFSET UNITYSDK_OFFSET(0xB0A8A30)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCRENAMEARCHIVE_OFFSET UNITYSDK_OFFSET(0xB0AA220)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSERVERARCHIVES_OFFSET UNITYSDK_OFFSET(0xB0A99F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSTATICDATA_OFFSET UNITYSDK_OFFSET(0xB0A7DE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__ADJUSTFAVORITEBUILDREFS_OFFSET UNITYSDK_OFFSET(0xB0A95A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__CLEARHTTPDATADICT_OFFSET UNITYSDK_OFFSET(0xB0A7BA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__CLEARSHARECODEDATADICT_OFFSET UNITYSDK_OFFSET(0xB0A97D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A7980)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSEHTTP_OFFSET UNITYSDK_OFFSET(0xB0A7B00)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSESHARECODE_OFFSET UNITYSDK_OFFSET(0xB0A9780)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__TRYPRUNEFAVORITEBUILDREFS_OFFSET UNITYSDK_OFFSET(0xB0A8CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefInfo_TypeDefinitionIndex = 62228;

	class RogueTournBuildRefInfo : public ::System::Object
	{
	public:
		// static const ::System::String* _MatchConfigPath; // 0x0
		// static const ::System::String* _SortConfigPath; // 0x0
		// static const ::System::String* _FallbackLangConfigPath; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>* _ShareCodeDataDict_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::MongoObjectId>* _FavoriteBuildRefIDs; // 0x18
		::RPG::GameCore::RogueTournBuildRefMatchConfig* _MatchConfig; // 0x20
		::RPG::GameCore::RogueTournBuildRefFallbackLangConfig* _FallbackLangConfig; // 0x28
		::RPG::Client::RogueTournModule* _OwnerRef; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>* _HttpDataDict_k__BackingField; // 0x38
		::RPG::GameCore::RogueTournBuildRefSortConfig* _SortConfig; // 0x40
		::System::Boolean _IsShareCodeDataPrepared_k__BackingField; // 0x48
		::System::UInt32 _MaxFavoriteCount_k__BackingField; // 0x4C
		::System::UInt32 _HttpDataVersion_k__BackingField; // 0x50

		::System::Void _ctor(::RPG::Client::RogueTournModule* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournModule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__CTOR_OFFSET))(this, owner);
		}

		::System::Void _DisposeHttp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSEHTTP_OFFSET))(this);
		}

		::System::Void SyncDataVersion(::System::UInt32 version)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDATAVERSION_OFFSET))(this, version);
		}

		::System::Void SyncStaticData(::Class_1_8E690193A2EE0AD6* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8E690193A2EE0AD6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSTATICDATA_OFFSET))(this, rsp);
		}

		::System::Void SyncFavorite(::Class_1_34D861EC1B1CDD27* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_34D861EC1B1CDD27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCFAVORITE_OFFSET))(this, rsp);
		}

		::System::Void SyncInteractData(::Class_1_5610B7568BF432BE* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5610B7568BF432BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCINTERACTDATA_OFFSET))(this, rsp);
		}

		::System::Void SyncIsLike(::RPG::Client::MongoObjectId buildRefID, ::System::Boolean isLike)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCISLIKE_OFFSET))(this, buildRefID, isLike);
		}

		::System::Boolean IsFavoriteBuildRef(::RPG::Client::MongoObjectId buildRefID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_ISFAVORITEBUILDREF_OFFSET))(this, buildRefID);
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

		::System::Void set_HttpDataVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATAVERSION_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>* get_HttpDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_HTTPDATADICT_OFFSET))(this);
		}

		::System::Void set_HttpDataDict(::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATADICT_OFFSET))(this, value);
		}

		::System::UInt32 get_CurFavoriteCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_CURFAVORITECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_MaxFavoriteCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MAXFAVORITECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxFavoriteCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_MAXFAVORITECOUNT_OFFSET))(this, value);
		}

		::System::Void _DisposeShareCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSESHARECODE_OFFSET))(this);
		}

		::System::Void SyncServerArchives(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9C480F8C7F93E8F5*>* protoArchives)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9C480F8C7F93E8F5*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSERVERARCHIVES_OFFSET))(this, protoArchives);
		}

		::System::Void SyncRenameArchive(::Class_1_8FCA304455C313FC_4* protoRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8FCA304455C313FC_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCRENAMEARCHIVE_OFFSET))(this, protoRsp);
		}

		::System::Void SyncDeleteArchive(::Class_1_45BB92167AED63A0_83* protoRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDELETEARCHIVE_OFFSET))(this, protoRsp);
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

		::System::Void set_IsShareCodeDataPrepared(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_ISSHARECODEDATAPREPARED_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>* get_ShareCodeDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_SHARECODEDATADICT_OFFSET))(this);
		}

		::System::Void set_ShareCodeDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_SHARECODEDATADICT_OFFSET))(this, value);
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
