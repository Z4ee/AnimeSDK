#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/System/Object.h"

class Class_1_1244640A944D6EC9;
class Class_1_455CA3FD2409BEB7_8;
class Class_1_F1C4ADA7BCD78942;
class Class_1_F9FBCC956DFCF137_10;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffTraitInfo; }
namespace RPG::Client { class FateTraitBuffItem; }
namespace RPG::Client { class IFateTraitSource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATETRAITDATA_CLEARSOURCE_OFFSET UNITYSDK_OFFSET(0xA365830)
#define RPG_CLIENT_FATETRAITDATA_CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA365610)
#define RPG_CLIENT_FATETRAITDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA3650F0)
#define RPG_CLIENT_FATETRAITDATA_GETACTIVETRAITBUFFRANKAFTERADDBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA366850)
#define RPG_CLIENT_FATETRAITDATA_GET_ACHIEVETRAITBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xA367350)
#define RPG_CLIENT_FATETRAITDATA_GET_ACHIEVETRAITBUFFMAXREQUIRECOUNT_OFFSET UNITYSDK_OFFSET(0xA367580)
#define RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITBUFFRANK_OFFSET UNITYSDK_OFFSET(0xA367330)
#define RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0xA3657A0)
#define RPG_CLIENT_FATETRAITDATA_GET_CASTERMODIFYMAINTRAITID_OFFSET UNITYSDK_OFFSET(0xA366FC0)
#define RPG_CLIENT_FATETRAITDATA_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xA367750)
#define RPG_CLIENT_FATETRAITDATA_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0xA367890)
#define RPG_CLIENT_FATETRAITDATA_GET_ISACTIVETRAITBUFFRANKMAX_OFFSET UNITYSDK_OFFSET(0xA367460)
#define RPG_CLIENT_FATETRAITDATA_GET_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0xA366B60)
#define RPG_CLIENT_FATETRAITDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xA367C20)
#define RPG_CLIENT_FATETRAITDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA367720)
#define RPG_CLIENT_FATETRAITDATA_GET_RELATEDFATEBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0xA366BD0)
#define RPG_CLIENT_FATETRAITDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA3654D0)
#define RPG_CLIENT_FATETRAITDATA_GET_SIMPLEEFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xA3677F0)
#define RPG_CLIENT_FATETRAITDATA_GET_SOURCEAVATARID_OFFSET UNITYSDK_OFFSET(0xA3670B0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBIGICONARRAY_OFFSET UNITYSDK_OFFSET(0xA3678D0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBIGICONPATH_OFFSET UNITYSDK_OFFSET(0xA3678F0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFIDARRAY_OFFSET UNITYSDK_OFFSET(0xA366AA0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xA3666C0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFMAXREQUIRECOUNT_OFFSET UNITYSDK_OFFSET(0xA367480)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xA367310)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITSMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xA3678B0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0xA366AC0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITTAG1_OFFSET UNITYSDK_OFFSET(0xA367B70)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITTAG2_OFFSET UNITYSDK_OFFSET(0xA367BA0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0xA3671F0)
#define RPG_CLIENT_FATETRAITDATA_GET_UNACHIEVETRAITBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xA367400)
#define RPG_CLIENT_FATETRAITDATA_GET_VIDEODESC_OFFSET UNITYSDK_OFFSET(0xA367BF0)
#define RPG_CLIENT_FATETRAITDATA_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0xA367BD0)
#define RPG_CLIENT_FATETRAITDATA_ISANYBUFFACTIVE_OFFSET UNITYSDK_OFFSET(0xA366590)
#define RPG_CLIENT_FATETRAITDATA_ISTRAITSKILLTYPEUNLOCK_OFFSET UNITYSDK_OFFSET(0xA366760)
#define RPG_CLIENT_FATETRAITDATA_REFRESHTRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0xA3658B0)
#define RPG_CLIENT_FATETRAITDATA_SET_ACTIVETRAITBUFFRANK_OFFSET UNITYSDK_OFFSET(0xA367340)
#define RPG_CLIENT_FATETRAITDATA_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0xA367320)
#define RPG_CLIENT_FATETRAITDATA_SYNCSOURCE_OFFSET UNITYSDK_OFFSET(0xA3656A0)
#define RPG_CLIENT_FATETRAITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3650E0)
#define RPG_CLIENT_FATETRAITDATA__GENERATETRAITBUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xA366930)
#define RPG_CLIENT_FATETRAITDATA__GETTEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xA367220)
#define RPG_CLIENT_FATETRAITDATA__GET_ACHIEVETRAITBUFFCOUNT_B__21_0_OFFSET UNITYSDK_OFFSET(0xA367C90)
#define RPG_CLIENT_FATETRAITDATA__REFRESHTRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0xA365900)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitData_TypeDefinitionIndex = 58873;

	class FateTraitData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__CasterModifyMainTraitID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FateTraitData_TypeDefinitionIndex)->GetStaticField(0x4DA0);
		}
		::System::Collections::Generic::List_1<::RPG::Client::FateTraitBuffItem*>* _TraitBuffItemList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IFateTraitSource*>* _TraitSourceList; // 0x18
		::System::Collections::Generic::List_1<::Class_1_455CA3FD2409BEB7_8*>* _ActiveTraitSourceList; // 0x20
		::Class_1_1244640A944D6EC9* _DynamicParamTextData; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _RelatedFateBuffIDList; // 0x30
		::Class_1_F9FBCC956DFCF137_10* _ParameterProxyFactory; // 0x38
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x40
		::Class_1_F1C4ADA7BCD78942* _Row; // 0x48
		::System::UInt32 _TraitID_k__BackingField; // 0x50
		::System::UInt32 _TraitBuffMaxRequireCount; // 0x54
		::System::UInt32 _ActiveTraitBuffRank_k__BackingField; // 0x58

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::FateTraitData* Create(::System::UInt32 id, ::Class_1_F9FBCC956DFCF137_10* factory, ::RPG::Client::FateBuffTraitInfo* belongTraitInfo)
		{
			return ((::RPG::Client::FateTraitData*(*)(::System::UInt32, ::Class_1_F9FBCC956DFCF137_10*, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_CREATE_OFFSET))(id, factory, belongTraitInfo);
		}

		static ::RPG::Client::FateTraitData* CreateDisplayData(::System::UInt32 id, ::System::UInt32 rank, ::RPG::Client::FateBuffTraitInfo* belongTraitInfo)
		{
			return ((::RPG::Client::FateTraitData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_CREATEDISPLAYDATA_OFFSET))(id, rank, belongTraitInfo);
		}

		::System::Void SyncSource(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455CA3FD2409BEB7_8*>* sourceList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455CA3FD2409BEB7_8*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_SYNCSOURCE_OFFSET))(this, sourceList);
		}

		::System::Void ClearSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_CLEARSOURCE_OFFSET))(this);
		}

		::System::Void RefreshTraitSourceList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_REFRESHTRAITSOURCELIST_OFFSET))(this);
		}

		::System::Boolean IsAnyBuffActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_ISANYBUFFACTIVE_OFFSET))(this);
		}

		static ::System::Boolean IsTraitSkillTypeUnlock(::System::UInt32 curDifficulty)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_ISTRAITSKILLTYPEUNLOCK_OFFSET))(curDifficulty);
		}

		::System::UInt32 GetActiveTraitBuffRankAfterAddBuffData(::RPG::Client::FateBuffData* buffData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GETACTIVETRAITBUFFRANKAFTERADDBUFFDATA_OFFSET))(this, buffData);
		}

		::System::Void _GenerateTraitBuffItemList(::Class_1_F9FBCC956DFCF137_10* factory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__GENERATETRAITBUFFITEMLIST_OFFSET))(this, factory);
		}

		::System::Void _RefreshTraitSourceList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__REFRESHTRAITSOURCELIST_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* _GetTextParamList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__GETTEXTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITID_OFFSET))(this);
		}

		::System::Void set_TraitID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_SET_TRAITID_OFFSET))(this, value);
		}

		::System::UInt32 get_ActiveTraitBuffRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITBUFFRANK_OFFSET))(this);
		}

		::System::Void set_ActiveTraitBuffRank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_SET_ACTIVETRAITBUFFRANK_OFFSET))(this, value);
		}

		::System::UInt32 get_AchieveTraitBuffCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ACHIEVETRAITBUFFCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UnAchieveTraitBuffCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_UNACHIEVETRAITBUFFCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsActiveTraitBuffRankMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ISACTIVETRAITBUFFRANKMAX_OFFSET))(this);
		}

		::System::UInt32 get_TraitBuffMaxRequireCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFMAXREQUIRECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AchieveTraitBuffMaxRequireCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ACHIEVETRAITBUFFMAXREQUIRECOUNT_OFFSET))(this);
		}

		::Class_1_F1C4ADA7BCD78942* get_Row()
		{
			return ((::Class_1_F1C4ADA7BCD78942*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_EffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_EFFECTDESCTEXT_OFFSET))(this);
		}

		::System::String* get_SimpleEffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_SIMPLEEFFECTDESCTEXT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitBuffIDArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFIDARRAY_OFFSET))(this);
		}

		::System::UInt32 get_SourceAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_SOURCEAVATARID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateTraitBuffItem*>* get_TraitBuffItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateTraitBuffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFITEMLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_EXTRAEFFECTARRAY_OFFSET))(this);
		}

		::System::String* get_TraitSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITSMALLICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_TraitBigIconArray()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITBIGICONARRAY_OFFSET))(this);
		}

		::System::String* get_TraitBigIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITBIGICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::FateTraitType get_TraitType()
		{
			return ((::RPG::GameCore::FateTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TraitTag1()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITTAG1_OFFSET))(this);
		}

		::RPG::Client::TextID get_TraitTag2()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITTAG2_OFFSET))(this);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_VIDEOID_OFFSET))(this);
		}

		::RPG::Client::TextID get_VideoDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_VIDEODESC_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RelatedFateBuffIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_RELATEDFATEBUFFIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_455CA3FD2409BEB7_8*>* get_ActiveTraitSourceList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_455CA3FD2409BEB7_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITSOURCELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IFateTraitSource*>* get_TraitSourceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IFateTraitSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITSOURCELIST_OFFSET))(this);
		}

		static ::System::UInt32 get_CasterModifyMainTraitID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_CASTERMODIFYMAINTRAITID_OFFSET))();
		}

		::System::Boolean get_IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ISMODIFIED_OFFSET))(this);
		}

		::System::Boolean _get_AchieveTraitBuffCount_b__21_0(::RPG::Client::FateTraitBuffItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateTraitBuffItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__GET_ACHIEVETRAITBUFFCOUNT_B__21_0_OFFSET))(this, x);
		}
	};
}
