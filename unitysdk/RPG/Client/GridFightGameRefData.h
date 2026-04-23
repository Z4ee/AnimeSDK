#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameRefLevel.h"
#include "unitysdk/RPG/Client/GridFightGameRefData_RoleExpiredStatus.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_90E07F539BBA9EB2_Class_1_93CDA5C33880619D;
class Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869;
class Class_1_90E07F539BBA9EB2_Class_1_D61246606DA6D5D3;
class Class_1_C0277CE3A38B20B6;
class Class_1_D465268DC854B3B5;
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonTextReader; }
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGameFormation; }
namespace RPG::Client { class GridFightGameRefEquipRecommend; }
namespace RPG::Client { class GridFightGameRefExpiredSummary; }
namespace RPG::Client { class GridFightGameRefTeam; }
namespace RPG::Client { class GridFightGameRefTrait; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_CHECKSATISFYREFERENCED_OFFSET UNITYSDK_OFFSET(0xA4C9BC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GETFINALROLEEXPIREDSTATUS_OFFSET UNITYSDK_OFFSET(0xA4C55C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GETINTERIMROLEEXPIREDSTATUS_OFFSET UNITYSDK_OFFSET(0xA4C5790)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GETRECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0xA4C95B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GETSHARECODETEXT_OFFSET UNITYSDK_OFFSET(0xA4CCB00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xA4C9690)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ACTIVATEDTRAITS_OFFSET UNITYSDK_OFFSET(0xA4C5A40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_AUTHOR_OFFSET UNITYSDK_OFFSET(0xA4C5BC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_BASICEQUIPS_OFFSET UNITYSDK_OFFSET(0xA4C87C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_CARRYIDS_OFFSET UNITYSDK_OFFSET(0xA4C6A00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_COREEQUIPS_OFFSET UNITYSDK_OFFSET(0xA4C8A60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_COREROLE_OFFSET UNITYSDK_OFFSET(0xA4C9610)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA4C5C00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_EARLYROLES_OFFSET UNITYSDK_OFFSET(0xA4C6F70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_EMBLEMEQUIPS_OFFSET UNITYSDK_OFFSET(0xA4C8D00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_EQUIPRECOMMENDS_OFFSET UNITYSDK_OFFSET(0xA4C7E90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xA4C5B80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_EXPIREDSUMMARY_OFFSET UNITYSDK_OFFSET(0xA4C6020)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_FAVOURCNT_OFFSET UNITYSDK_OFFSET(0xA4C5D30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_FILTERLEVEL_OFFSET UNITYSDK_OFFSET(0xA4C5CA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_FINALROLES_OFFSET UNITYSDK_OFFSET(0xA4C5EA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_GAMEVERSION_OFFSET UNITYSDK_OFFSET(0xA4C5DB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_HASAUGMENTDATA_OFFSET UNITYSDK_OFFSET(0xA4C9260)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_HASEMBLEM_OFFSET UNITYSDK_OFFSET(0xA4C9A90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_HASEQUIPDATA_OFFSET UNITYSDK_OFFSET(0xA4C91A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_HASORDERDATA_OFFSET UNITYSDK_OFFSET(0xA4C9120)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA4C4E80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISAPPLIED_OFFSET UNITYSDK_OFFSET(0xA4C92F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISCURSEASON_OFFSET UNITYSDK_OFFSET(0xA4C8F90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISCURVERSION_OFFSET UNITYSDK_OFFSET(0xA4C8E40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0xA4C5E30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xA4C6A20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISOCCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA4C5CF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_LANG_OFFSET UNITYSDK_OFFSET(0xA4C5DD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA4C5C80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_LIKECNT_OFFSET UNITYSDK_OFFSET(0xA4C5C20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_MAINROLES_OFFSET UNITYSDK_OFFSET(0xA4C6C50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_MAINSEASONROLES_OFFSET UNITYSDK_OFFSET(0xA4C76E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_MAJORVERSION_OFFSET UNITYSDK_OFFSET(0xA4C8EE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_MIDROLES_OFFSET UNITYSDK_OFFSET(0xA4C7600)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_MINORVERSION_OFFSET UNITYSDK_OFFSET(0xA4C8F30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_PORTALS_OFFSET UNITYSDK_OFFSET(0xA4C7D10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_PRIMARYAUGMENTS_OFFSET UNITYSDK_OFFSET(0xA4C7A10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_RECENTFAVOURCNT_OFFSET UNITYSDK_OFFSET(0xA4C5D70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_RECENTLIKECNT_OFFSET UNITYSDK_OFFSET(0xA4C5D50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_RECENTUSECNT_OFFSET UNITYSDK_OFFSET(0xA4C5D90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SAVED_OFFSET UNITYSDK_OFFSET(0xA4C6B00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xA4C5DF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xA4C5E50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SECONDARYAUGMENTS_OFFSET UNITYSDK_OFFSET(0xA4C7B90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SHARECODE_OFFSET UNITYSDK_OFFSET(0xA4C5C60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SUBSEASONID_OFFSET UNITYSDK_OFFSET(0xA4C5E10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0xA4C5BE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xA4C5EB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA4C5C40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA4C5BA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xA4C5A20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA4C5D10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET__JSONDATA_OFFSET UNITYSDK_OFFSET(0xA4C7050)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET__TERMLEVELLIST_OFFSET UNITYSDK_OFFSET(0xA4CD4F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_HASAVATAR_OFFSET UNITYSDK_OFFSET(0xA4C9770)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_HASEQUIPRECOMMEND_OFFSET UNITYSDK_OFFSET(0xA4C9550)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_HASROLE_OFFSET UNITYSDK_OFFSET(0xA4C9890)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_HASTRAIT_OFFSET UNITYSDK_OFFSET(0xA4C9630)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_ISPARTIALEXPIRED_OFFSET UNITYSDK_OFFSET(0xA4CBC60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0xA4CCCB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_ISROLEFINAL_OFFSET UNITYSDK_OFFSET(0xA4C58E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_ISROLEMAIN_OFFSET UNITYSDK_OFFSET(0xA4C56B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_MEETFILTER_OFFSET UNITYSDK_OFFSET(0xA4C9EB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_AUTHOR_OFFSET UNITYSDK_OFFSET(0xA4C5BD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_COREROLE_OFFSET UNITYSDK_OFFSET(0xA4C9620)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xA4C5C10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xA4C5B90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_FAVOURCNT_OFFSET UNITYSDK_OFFSET(0xA4C5D40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_GAMEVERSION_OFFSET UNITYSDK_OFFSET(0xA4C5DC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0xA4C5E40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_ISOCCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA4C5D00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_LANG_OFFSET UNITYSDK_OFFSET(0xA4C5DE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA4C5C90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_LIKECNT_OFFSET UNITYSDK_OFFSET(0xA4C5C30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_RECENTFAVOURCNT_OFFSET UNITYSDK_OFFSET(0xA4C5D80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_RECENTLIKECNT_OFFSET UNITYSDK_OFFSET(0xA4C5D60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_RECENTUSECNT_OFFSET UNITYSDK_OFFSET(0xA4C5DA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xA4C5E00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_SHARECODE_OFFSET UNITYSDK_OFFSET(0xA4C5C70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_SUBSEASONID_OFFSET UNITYSDK_OFFSET(0xA4C5E20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_TAGS_OFFSET UNITYSDK_OFFSET(0xA4C5BF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA4C5C50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xA4C5BB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0xA4C5A30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA4C5D20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__ADDEXPIREDTRAITLAYER_OFFSET UNITYSDK_OFFSET(0xA4CC5C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__ADDTRAITLAYER_OFFSET UNITYSDK_OFFSET(0xA4CC700)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__BUILDROLES_OFFSET UNITYSDK_OFFSET(0xA4C6CA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__BUILDSEASONROLES_1_OFFSET UNITYSDK_OFFSET(0xA4C70F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__BUILDSEASONROLES_OFFSET UNITYSDK_OFFSET(0xA4C7730)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4CD740)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__CHECKISEXPERT_OFFSET UNITYSDK_OFFSET(0xA4CB260)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__COLLECTCOREROLE_OFFSET UNITYSDK_OFFSET(0xA4CB190)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__COLLECTEQUIPSANDTRAIT_OFFSET UNITYSDK_OFFSET(0xA4C9F20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA4CA4C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C3E80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__GETRECOMMENDS_OFFSET UNITYSDK_OFFSET(0xA4C7EE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__GETROLESWITCHROLE_OFFSET UNITYSDK_OFFSET(0xA4CA790)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__GET_SAVED_B__108_0_OFFSET UNITYSDK_OFFSET(0xA4CE230)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__HASROLE_1_OFFSET UNITYSDK_OFFSET(0xA4CD5C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__HASROLE_OFFSET UNITYSDK_OFFSET(0xA4C98E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xA4C6A90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__ISROLEEXIPRED_OFFSET UNITYSDK_OFFSET(0xA4CB490)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__ISTRAITEXPIRED_OFFSET UNITYSDK_OFFSET(0xA4CB800)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__UPDATEEXPIREDTRAITLAYER_OFFSET UNITYSDK_OFFSET(0xA4CBFE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA__UPDATETRAITLAYER_OFFSET UNITYSDK_OFFSET(0xA4CA9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData_TypeDefinitionIndex = 59575;

	class GridFightGameRefData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_3<::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*>*>** StaticGet__NecessaryAttributeMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_3<::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData_TypeDefinitionIndex)->GetStaticField(0x13B00);
		}
		::Il2CppArray<::System::String*>* _Tags_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Class_1_C0277CE3A38B20B6*>* _Rules; // 0x18
		::Class_1_D465268DC854B3B5* _Loader; // 0x20
		::Class_1_90E07F539BBA9EB2_Class_1_93CDA5C33880619D* _RawJsonData; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* _Equips_k__BackingField; // 0x30
		::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869* _FinalStageData; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefTrait*>* _Traits_k__BackingField; // 0x40
		::System::String* _Lang_k__BackingField; // 0x48
		::System::String* _Author_k__BackingField; // 0x50
		::System::String* _Desc_k__BackingField; // 0x58
		::RPG::Client::GridFightSeasonRole* _CoreRole_k__BackingField; // 0x60
		::System::String* _Title_k__BackingField; // 0x68
		::System::String* _ShareCode_k__BackingField; // 0x70
		::System::UInt32 _RecentFavourCnt_k__BackingField; // 0x78
		::System::UInt32 _RecentLikeCnt_k__BackingField; // 0x7C
		::System::Single PortalScore; // 0x80
		::System::Boolean _IsExpert_k__BackingField; // 0x84
		::System::Boolean _IsOCCompatible_k__BackingField; // 0x85
		::System::Int32 _Level_k__BackingField; // 0x88
		::System::Single _Weight_k__BackingField; // 0x8C
		::System::UInt32 _RecentUseCnt_k__BackingField; // 0x90
		::RPG::Client::MongoObjectId _ID; // 0x94
		::System::UInt32 _SubSeasonID_k__BackingField; // 0xA0
		::System::UInt32 _SeasonID_k__BackingField; // 0xA4
		::System::UInt32 _GameVersion_k__BackingField; // 0xA8
		::System::UInt32 _LikeCnt_k__BackingField; // 0xAC
		::System::UInt32 _FavourCnt_k__BackingField; // 0xB0
		::System::UInt32 _TimeStamp_k__BackingField; // 0xB4
		::System::Single Score; // 0xB8

		::System::Void _ctor(::Class_1_90E07F539BBA9EB2_Class_1_93CDA5C33880619D* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90E07F539BBA9EB2_Class_1_93CDA5C33880619D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__CTOR_OFFSET))(this, data);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::JsonTextReader* reader, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonTextReader*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__CTOR_1_OFFSET))(this, reader, index);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightGameRefData_RoleExpiredStatus GetFinalRoleExpiredStatus(::RPG::Client::GridFightSeasonRole* role)
		{
			return ((::RPG::Client::GridFightGameRefData_RoleExpiredStatus(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GETFINALROLEEXPIREDSTATUS_OFFSET))(this, role);
		}

		::RPG::Client::GridFightGameRefData_RoleExpiredStatus GetInterimRoleExpiredStatus(::RPG::Client::GridFightSeasonRole* role)
		{
			return ((::RPG::Client::GridFightGameRefData_RoleExpiredStatus(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GETINTERIMROLEEXPIREDSTATUS_OFFSET))(this, role);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefTrait*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_TRAITS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefTrait*>* get_ActivatedTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ACTIVATEDTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* get_Equips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_EQUIPS_OFFSET))(this, value);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_TITLE_OFFSET))(this, value);
		}

		::System::String* get_Author()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_AUTHOR_OFFSET))(this);
		}

		::System::Void set_Author(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_AUTHOR_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_Tags()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_TAGS_OFFSET))(this);
		}

		::System::Void set_Tags(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_TAGS_OFFSET))(this, value);
		}

		::System::String* get_ID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ID_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_DESC_OFFSET))(this, value);
		}

		::System::UInt32 get_LikeCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_LIKECNT_OFFSET))(this);
		}

		::System::Void set_LikeCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_LIKECNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Void set_TimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_TIMESTAMP_OFFSET))(this, value);
		}

		::System::String* get_ShareCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SHARECODE_OFFSET))(this);
		}

		::System::Void set_ShareCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_SHARECODE_OFFSET))(this, value);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::RPG::Client::GameRefLevel get_FilterLevel()
		{
			return ((::RPG::Client::GameRefLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_FILTERLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsOCCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISOCCOMPATIBLE_OFFSET))(this);
		}

		::System::Void set_IsOCCompatible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_ISOCCOMPATIBLE_OFFSET))(this, value);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_Weight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_WEIGHT_OFFSET))(this, value);
		}

		::System::UInt32 get_FavourCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_FAVOURCNT_OFFSET))(this);
		}

		::System::Void set_FavourCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_FAVOURCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_RecentLikeCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_RECENTLIKECNT_OFFSET))(this);
		}

		::System::Void set_RecentLikeCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_RECENTLIKECNT_OFFSET))(this, value);
		}

		::System::UInt32 get_RecentFavourCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_RECENTFAVOURCNT_OFFSET))(this);
		}

		::System::Void set_RecentFavourCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_RECENTFAVOURCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_RecentUseCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_RECENTUSECNT_OFFSET))(this);
		}

		::System::Void set_RecentUseCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_RECENTUSECNT_OFFSET))(this, value);
		}

		::System::UInt32 get_GameVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_GAMEVERSION_OFFSET))(this);
		}

		::System::Void set_GameVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_GAMEVERSION_OFFSET))(this, value);
		}

		::System::String* get_Lang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_LANG_OFFSET))(this);
		}

		::System::Void set_Lang(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_LANG_OFFSET))(this, value);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SEASONID_OFFSET))(this);
		}

		::System::Void set_SeasonID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_SEASONID_OFFSET))(this, value);
		}

		::System::UInt32 get_SubSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SUBSEASONID_OFFSET))(this);
		}

		::System::Void set_SubSeasonID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_SUBSEASONID_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISEXPERT_OFFSET))(this);
		}

		::System::Void set_IsExpert(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_ISEXPERT_OFFSET))(this, value);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SEASONUID_OFFSET))(this);
		}

		::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869* get_FinalRoles()
		{
			return ((::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_FINALROLES_OFFSET))(this);
		}

		::RPG::Client::GridFightGameRefTeam* get_Team()
		{
			return ((::RPG::Client::GridFightGameRefTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_TEAM_OFFSET))(this);
		}

		::RPG::Client::GridFightGameRefExpiredSummary* get_ExpiredSummary()
		{
			return ((::RPG::Client::GridFightGameRefExpiredSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_EXPIREDSUMMARY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_CarryIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_CARRYIDS_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Boolean get_Saved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SAVED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_MainRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_MAINROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_EarlyRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_EARLYROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_MidRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_MIDROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_MainSeasonRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_MAINSEASONROLES_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::GridFightAugment*>* get_PrimaryAugments()
		{
			return ((::Il2CppArray<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_PRIMARYAUGMENTS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::GridFightAugment*>* get_SecondaryAugments()
		{
			return ((::Il2CppArray<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_SECONDARYAUGMENTS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::GridFightPortalData*>* get_Portals()
		{
			return ((::Il2CppArray<::RPG::Client::GridFightPortalData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_PORTALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefEquipRecommend*>* get_EquipRecommends()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefEquipRecommend*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_EQUIPRECOMMENDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::GridFightEquipItemData*>* get_BasicEquips()
		{
			return ((::Il2CppArray<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_BASICEQUIPS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::GridFightEquipItemData*>* get_CoreEquips()
		{
			return ((::Il2CppArray<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_COREEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* get_EmblemEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_EMBLEMEQUIPS_OFFSET))(this);
		}

		::System::Boolean get_IsCurVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISCURVERSION_OFFSET))(this);
		}

		::System::UInt32 get_MajorVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_MAJORVERSION_OFFSET))(this);
		}

		::System::UInt32 get_MinorVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_MINORVERSION_OFFSET))(this);
		}

		::System::Boolean get_IsCurSeason()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISCURSEASON_OFFSET))(this);
		}

		::System::Boolean get_HasOrderData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_HASORDERDATA_OFFSET))(this);
		}

		::System::Boolean get_HasEquipData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_HASEQUIPDATA_OFFSET))(this);
		}

		::System::Boolean get_HasAugmentData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_HASAUGMENTDATA_OFFSET))(this);
		}

		::System::Boolean get_IsApplied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_ISAPPLIED_OFFSET))(this);
		}

		::System::Boolean HasEquipRecommend(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_HASEQUIPRECOMMEND_OFFSET))(this, roleID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRecommendEquips(::System::UInt32 roleID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GETRECOMMENDEQUIPS_OFFSET))(this, roleID);
		}

		::RPG::Client::GridFightSeasonRole* get_CoreRole()
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_COREROLE_OFFSET))(this);
		}

		::System::Void set_CoreRole(::RPG::Client::GridFightSeasonRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_SET_COREROLE_OFFSET))(this, value);
		}

		::System::Boolean HasTrait(::System::UInt32 traitID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_HASTRAIT_OFFSET))(this, traitID);
		}

		::System::Boolean HasAvatar(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_HASAVATAR_OFFSET))(this, id);
		}

		::System::Boolean HasRole(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_HASROLE_OFFSET))(this, roleID);
		}

		::System::Boolean get_HasEmblem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET_HASEMBLEM_OFFSET))(this);
		}

		static ::System::Boolean CheckSatisfyReferenced(::System::UInt32 roleID, ::System::UInt32 meetRoleID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_CHECKSATISFYREFERENCED_OFFSET))(roleID, meetRoleID);
		}

		::RPG::Client::GridFightGameRefTrait* GetTraitByID(::System::UInt32 traitID)
		{
			return ((::RPG::Client::GridFightGameRefTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GETTRAITBYID_OFFSET))(this, traitID);
		}

		::System::Boolean MeetFilter(::RPG::Client::GameRefLevel level)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GameRefLevel))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_MEETFILTER_OFFSET))(this, level);
		}

		::System::Void _CollectEquipsAndTrait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__COLLECTEQUIPSANDTRAIT_OFFSET))(this);
		}

		::System::Void _CollectCoreRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__COLLECTCOREROLE_OFFSET))(this);
		}

		::System::Void _CheckIsExpert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__CHECKISEXPERT_OFFSET))(this);
		}

		::System::Boolean _IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__ISEXPIRED_OFFSET))(this);
		}

		::System::Boolean IsPartialExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_ISPARTIALEXPIRED_OFFSET))(this);
		}

		::System::Boolean _IsRoleExipred()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__ISROLEEXIPRED_OFFSET))(this);
		}

		::System::Boolean _IsTraitExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__ISTRAITEXPIRED_OFFSET))(this);
		}

		::System::Void _UpdateExpiredTraitLayer(::System::UInt32 roleID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* equipIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__UPDATEEXPIREDTRAITLAYER_OFFSET))(this, roleID, equipIDs);
		}

		::System::Void _UpdateTraitLayer(::System::UInt32 roleID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* equipIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__UPDATETRAITLAYER_OFFSET))(this, roleID, equipIDs);
		}

		::System::Void _AddTraitLayer(::System::UInt32 traitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__ADDTRAITLAYER_OFFSET))(this, traitID);
		}

		::System::Void _AddExpiredTraitLayer(::System::UInt32 traitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__ADDEXPIREDTRAITLAYER_OFFSET))(this, traitID);
		}

		::System::Boolean _HasRole(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__HASROLE_OFFSET))(this, roleID);
		}

		::System::Collections::Generic::List_1<::Class_1_C0277CE3A38B20B6*>* _GetRoleSwitchRole()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C0277CE3A38B20B6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__GETROLESWITCHROLE_OFFSET))(this);
		}

		::System::Boolean IsRoleMain(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_ISROLEMAIN_OFFSET))(this, roleID);
		}

		::System::Boolean IsRoleFinal(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_ISROLEFINAL_OFFSET))(this, roleID);
		}

		::System::String* GetShareCodeText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GETSHARECODETEXT_OFFSET))(this);
		}

		::System::Boolean IsReferenced(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_ISREFERENCED_OFFSET))(this, roleID);
		}

		::System::Boolean _HasRole_1(::System::Func_2<::System::UInt32, ::System::Boolean>* pred)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__HASROLE_1_OFFSET))(this, pred);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* _BuildRoles(::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869* roles)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__BUILDROLES_OFFSET))(this, roles);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* _BuildSeasonRoles(::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869* roles)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID, ::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__BUILDSEASONROLES_OFFSET))(this, roles);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* _BuildSeasonRoles_1(::Class_1_90E07F539BBA9EB2_Class_1_D61246606DA6D5D3* roles)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID, ::Class_1_90E07F539BBA9EB2_Class_1_D61246606DA6D5D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__BUILDSEASONROLES_1_OFFSET))(this, roles);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefEquipRecommend*>* _GetRecommends(::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869* finalRoles)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefEquipRecommend*>*(*)(::PVOID, ::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__GETRECOMMENDS_OFFSET))(this, finalRoles);
		}

		::Class_1_90E07F539BBA9EB2_Class_1_93CDA5C33880619D* get__JsonData()
		{
			return ((::Class_1_90E07F539BBA9EB2_Class_1_93CDA5C33880619D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET__JSONDATA_OFFSET))(this);
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* get__TermLevelList()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA_GET__TERMLEVELLIST_OFFSET))();
		}

		::System::Boolean _get_Saved_b__108_0(::RPG::Client::GridFightGameFormation* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA__GET_SAVED_B__108_0_OFFSET))(this, x);
		}
	};
}
