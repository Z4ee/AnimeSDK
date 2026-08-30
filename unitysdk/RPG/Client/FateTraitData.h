#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/System/Object.h"

class Class_1_32161F1E0F11BEF4;
class Class_1_963E317C37FB5E9A_24;
class Class_1_F1C4ADA7BCD78942;
class Class_1_F9FBCC956DFCF137_18;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffTraitInfo; }
namespace RPG::Client { class FateTraitBuffItem; }
namespace RPG::Client { class IFateTraitSource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATETRAITDATA_CLEARSOURCE_OFFSET UNITYSDK_OFFSET(0x1AE3E9D0)
#define RPG_CLIENT_FATETRAITDATA_CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1AE3E790)
#define RPG_CLIENT_FATETRAITDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE3E270)
#define RPG_CLIENT_FATETRAITDATA_GETACTIVETRAITBUFFRANKAFTERADDBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1AE3FC00)
#define RPG_CLIENT_FATETRAITDATA_GET_ACHIEVETRAITBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE40970)
#define RPG_CLIENT_FATETRAITDATA_GET_ACHIEVETRAITBUFFMAXREQUIRECOUNT_OFFSET UNITYSDK_OFFSET(0x1AE40C30)
#define RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITBUFFRANK_OFFSET UNITYSDK_OFFSET(0x1AE40950)
#define RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0x1AE3E940)
#define RPG_CLIENT_FATETRAITDATA_GET_CASTERMODIFYMAINTRAITID_OFFSET UNITYSDK_OFFSET(0x1AE40540)
#define RPG_CLIENT_FATETRAITDATA_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0x1AE40F30)
#define RPG_CLIENT_FATETRAITDATA_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0x1AE41070)
#define RPG_CLIENT_FATETRAITDATA_GET_ISACTIVETRAITBUFFRANKMAX_OFFSET UNITYSDK_OFFSET(0x1AE40AA0)
#define RPG_CLIENT_FATETRAITDATA_GET_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1AE3FFE0)
#define RPG_CLIENT_FATETRAITDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1AE41710)
#define RPG_CLIENT_FATETRAITDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AE40EC0)
#define RPG_CLIENT_FATETRAITDATA_GET_RELATEDFATEBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0x1AE400B0)
#define RPG_CLIENT_FATETRAITDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1AE3E650)
#define RPG_CLIENT_FATETRAITDATA_GET_SIMPLEEFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0x1AE40FD0)
#define RPG_CLIENT_FATETRAITDATA_GET_SOURCEAVATARID_OFFSET UNITYSDK_OFFSET(0x1AE40650)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBIGICONARRAY_OFFSET UNITYSDK_OFFSET(0x1AE41130)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBIGICONPATH_OFFSET UNITYSDK_OFFSET(0x1AE41190)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFIDARRAY_OFFSET UNITYSDK_OFFSET(0x1AE3FEE0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0x1AE3FA70)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFMAXREQUIRECOUNT_OFFSET UNITYSDK_OFFSET(0x1AE40AF0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1AE40930)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITSMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1AE410D0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0x1AE3FF40)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITTAG1_OFFSET UNITYSDK_OFFSET(0x1AE41560)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITTAG2_OFFSET UNITYSDK_OFFSET(0x1AE415D0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0x1AE407D0)
#define RPG_CLIENT_FATETRAITDATA_GET_UNACHIEVETRAITBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE40A40)
#define RPG_CLIENT_FATETRAITDATA_GET_VIDEODESC_OFFSET UNITYSDK_OFFSET(0x1AE416A0)
#define RPG_CLIENT_FATETRAITDATA_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1AE41640)
#define RPG_CLIENT_FATETRAITDATA_ISANYBUFFACTIVE_OFFSET UNITYSDK_OFFSET(0x1AE3F910)
#define RPG_CLIENT_FATETRAITDATA_ISTRAITSKILLTYPEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1AE3FB10)
#define RPG_CLIENT_FATETRAITDATA_REFRESHTRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0x1AE3EA70)
#define RPG_CLIENT_FATETRAITDATA_SET_ACTIVETRAITBUFFRANK_OFFSET UNITYSDK_OFFSET(0x1AE40960)
#define RPG_CLIENT_FATETRAITDATA_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1AE40940)
#define RPG_CLIENT_FATETRAITDATA_SYNCSOURCE_OFFSET UNITYSDK_OFFSET(0x1AE3E820)
#define RPG_CLIENT_FATETRAITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3E260)
#define RPG_CLIENT_FATETRAITDATA__GENERATETRAITBUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0x1AE3FC90)
#define RPG_CLIENT_FATETRAITDATA__GETTEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1AE40840)
#define RPG_CLIENT_FATETRAITDATA__GET_ACHIEVETRAITBUFFCOUNT_B__21_0_OFFSET UNITYSDK_OFFSET(0x1AE417B0)
#define RPG_CLIENT_FATETRAITDATA__REFRESHTRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0x1AE3EAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitData_TypeDefinitionIndex = 64069;

	class FateTraitData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__CasterModifyMainTraitID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FateTraitData_TypeDefinitionIndex)->GetStaticField(0x45F0);
		}
		::Class_1_32161F1E0F11BEF4* _DynamicParamTextData; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RelatedFateBuffIDList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::FateTraitBuffItem*>* _TraitBuffItemList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IFateTraitSource*>* _TraitSourceList; // 0x28
		::System::Collections::Generic::List_1<::Class_1_963E317C37FB5E9A_24*>* _ActiveTraitSourceList; // 0x30
		::Class_1_F1C4ADA7BCD78942* _Row; // 0x38
		::Class_1_F9FBCC956DFCF137_18* _ParameterProxyFactory; // 0x40
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x48
		::System::UInt32 _TraitBuffMaxRequireCount; // 0x50
		::System::UInt32 _TraitID_k__BackingField; // 0x54
		::System::UInt32 _ActiveTraitBuffRank_k__BackingField; // 0x58

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateTraitData* Create(::System::UInt32 a1, ::Class_1_F9FBCC956DFCF137_18* a2, ::RPG::Client::FateBuffTraitInfo* a3)
		{
			return ((::RPG::Client::FateTraitData*(*)(::System::UInt32, ::Class_1_F9FBCC956DFCF137_18*, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::FateTraitData* CreateDisplayData(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FateBuffTraitInfo* a3)
		{
			return ((::RPG::Client::FateTraitData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_CREATEDISPLAYDATA_OFFSET))(a1, a2, a3);
		}

		::System::Void SyncSource(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_963E317C37FB5E9A_24*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_963E317C37FB5E9A_24*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_SYNCSOURCE_OFFSET))(this, a1);
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

		static ::System::Boolean IsTraitSkillTypeUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_ISTRAITSKILLTYPEUNLOCK_OFFSET))(a1);
		}

		::System::UInt32 GetActiveTraitBuffRankAfterAddBuffData(::RPG::Client::FateBuffData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GETACTIVETRAITBUFFRANKAFTERADDBUFFDATA_OFFSET))(this, a1);
		}

		::System::Void _GenerateTraitBuffItemList(::Class_1_F9FBCC956DFCF137_18* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__GENERATETRAITBUFFITEMLIST_OFFSET))(this, a1);
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

		::System::Void set_TraitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_SET_TRAITID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActiveTraitBuffRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITBUFFRANK_OFFSET))(this);
		}

		::System::Void set_ActiveTraitBuffRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_SET_ACTIVETRAITBUFFRANK_OFFSET))(this, a1);
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

		::System::Collections::Generic::List_1<::Class_1_963E317C37FB5E9A_24*>* get_ActiveTraitSourceList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_963E317C37FB5E9A_24*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITSOURCELIST_OFFSET))(this);
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

		::System::Boolean _get_AchieveTraitBuffCount_b__21_0(::RPG::Client::FateTraitBuffItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateTraitBuffItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__GET_ACHIEVETRAITBUFFCOUNT_B__21_0_OFFSET))(this, a1);
		}
	};
}
