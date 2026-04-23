#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefUnionIndex.h"
#include "unitysdk/System/Object.h"

class Class_1_5610B7568BF432BE_Class_1_07A071497BFBCF79;
class Class_1_B202CD093058243F;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xB0A70D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0A7210)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_APPLIEDCOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A7880)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_AUTHOR_OFFSET UNITYSDK_OFFSET(0xB0A7620)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_BUILDREFID_OFFSET UNITYSDK_OFFSET(0xB0A7430)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ESSENTIALFORMULAS_OFFSET UNITYSDK_OFFSET(0xB0A76C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ESSENTIALHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0xB0A7780)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_FAVORITECOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A78A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_GAMEMAJORVERSIONFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A7900)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_GAMEMINORVERSIONFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A7920)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ISLIKE_OFFSET UNITYSDK_OFFSET(0xB0A7840)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0xB0A7640)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LIKECOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A78C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LIKECOUNT_OFFSET UNITYSDK_OFFSET(0xB0A7860)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_OPTIONALFORMULAS_OFFSET UNITYSDK_OFFSET(0xB0A7720)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_OPTIONALHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0xB0A77E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_TEAMS_OFFSET UNITYSDK_OFFSET(0xB0A7660)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xB0A7600)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_UNIONINDEX_OFFSET UNITYSDK_OFFSET(0xB0A7460)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_WEIGHTFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A78E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SETCONTENT_OFFSET UNITYSDK_OFFSET(0xB0A7280)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_APPLIEDCOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A7890)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_AUTHOR_OFFSET UNITYSDK_OFFSET(0xB0A7630)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_BUILDREFID_OFFSET UNITYSDK_OFFSET(0xB0A7450)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_FAVORITECOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A78B0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_GAMEMAJORVERSIONFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A7910)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_GAMEMINORVERSIONFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A7930)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_ISLIKE_OFFSET UNITYSDK_OFFSET(0xB0A7850)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0xB0A7650)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LIKECOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A78D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LIKECOUNT_OFFSET UNITYSDK_OFFSET(0xB0A7870)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xB0A7610)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_WEIGHTFORSORT_OFFSET UNITYSDK_OFFSET(0xB0A78F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SYNCINTERACTDATA_OFFSET UNITYSDK_OFFSET(0xB0A72D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SYNCISLIKE_OFFSET UNITYSDK_OFFSET(0xB0A7330)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB0A6DC0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A6DB0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB0A7940)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefHttpDataItem_TypeDefinitionIndex = 62213;

	class RogueTournBuildRefHttpDataItem : public ::System::Object
	{
	public:
		::Class_1_B202CD093058243F* _BuildRefContent; // 0x10
		::System::String* _Title_k__BackingField; // 0x18
		::System::String* _Language_k__BackingField; // 0x20
		::System::String* _Author_k__BackingField; // 0x28
		::System::UInt64 _LikeCountForSort_k__BackingField; // 0x30
		::System::UInt64 _FavoriteCountForSort_k__BackingField; // 0x38
		::System::Boolean _IsLike_k__BackingField; // 0x40
		::RPG::Client::MongoObjectId _BuildRefID_k__BackingField; // 0x44
		::System::Double _WeightForSort_k__BackingField; // 0x50
		::System::UInt64 _AppliedCountForSort_k__BackingField; // 0x58
		::System::UInt32 _GameMinorVersionForSort_k__BackingField; // 0x60
		::System::UInt32 _GameMajorVersionForSort_k__BackingField; // 0x64
		::System::UInt64 _LikeCount_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void SetContent(::Class_1_B202CD093058243F* content)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B202CD093058243F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SETCONTENT_OFFSET))(this, content);
		}

		::System::Void SyncInteractData(::Class_1_5610B7568BF432BE_Class_1_07A071497BFBCF79* syncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5610B7568BF432BE_Class_1_07A071497BFBCF79*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SYNCINTERACTDATA_OFFSET))(this, syncData);
		}

		::System::Void SyncIsLike(::System::Boolean isLike)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SYNCISLIKE_OFFSET))(this, isLike);
		}

		::RPG::Client::MongoObjectId get_BuildRefID()
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_BUILDREFID_OFFSET))(this);
		}

		::System::Void set_BuildRefID(::RPG::Client::MongoObjectId value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_BUILDREFID_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournBuildRefUnionIndex get_UnionIndex()
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_UNIONINDEX_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_TITLE_OFFSET))(this, value);
		}

		::System::String* get_Author()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_AUTHOR_OFFSET))(this);
		}

		::System::Void set_Author(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_AUTHOR_OFFSET))(this, value);
		}

		::System::String* get_Language()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LANGUAGE_OFFSET))(this);
		}

		::System::Void set_Language(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LANGUAGE_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* get_Teams()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_TEAMS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* get_EssentialFormulas()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ESSENTIALFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* get_OptionalFormulas()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_OPTIONALFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* get_EssentialHexMiracles()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ESSENTIALHEXMIRACLES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* get_OptionalHexMiracles()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_OPTIONALHEXMIRACLES_OFFSET))(this);
		}

		::System::Boolean get_IsLike()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ISLIKE_OFFSET))(this);
		}

		::System::Void set_IsLike(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_ISLIKE_OFFSET))(this, value);
		}

		::System::UInt64 get_LikeCount()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LIKECOUNT_OFFSET))(this);
		}

		::System::Void set_LikeCount(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LIKECOUNT_OFFSET))(this, value);
		}

		::System::UInt64 get_AppliedCountForSort()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_APPLIEDCOUNTFORSORT_OFFSET))(this);
		}

		::System::Void set_AppliedCountForSort(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_APPLIEDCOUNTFORSORT_OFFSET))(this, value);
		}

		::System::UInt64 get_FavoriteCountForSort()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_FAVORITECOUNTFORSORT_OFFSET))(this);
		}

		::System::Void set_FavoriteCountForSort(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_FAVORITECOUNTFORSORT_OFFSET))(this, value);
		}

		::System::UInt64 get_LikeCountForSort()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LIKECOUNTFORSORT_OFFSET))(this);
		}

		::System::Void set_LikeCountForSort(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LIKECOUNTFORSORT_OFFSET))(this, value);
		}

		::System::Double get_WeightForSort()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_WEIGHTFORSORT_OFFSET))(this);
		}

		::System::Void set_WeightForSort(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_WEIGHTFORSORT_OFFSET))(this, value);
		}

		::System::UInt32 get_GameMajorVersionForSort()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_GAMEMAJORVERSIONFORSORT_OFFSET))(this);
		}

		::System::Void set_GameMajorVersionForSort(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_GAMEMAJORVERSIONFORSORT_OFFSET))(this, value);
		}

		::System::UInt32 get_GameMinorVersionForSort()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_GAMEMINORVERSIONFORSORT_OFFSET))(this);
		}

		::System::Void set_GameMinorVersionForSort(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_GAMEMINORVERSIONFORSORT_OFFSET))(this, value);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
