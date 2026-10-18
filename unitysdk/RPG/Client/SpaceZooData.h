#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8388853775500737;
class Class_1_D17272E82AE804C2_1127;
class Class_1_FC2703A58AD1FBC0_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class SpaceZooCatData; }
namespace RPG::Client { class SpaceZooFeatureData; }
namespace RPG::Client { class SpaceZooSpecialEventData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SPACEZOODATA_ADDCAT_OFFSET UNITYSDK_OFFSET(0xE0F3EB0)
#define RPG_CLIENT_SPACEZOODATA_GETCATDATABYCATTERY_OFFSET UNITYSDK_OFFSET(0xE0F53C0)
#define RPG_CLIENT_SPACEZOODATA_GETCATDATA_OFFSET UNITYSDK_OFFSET(0xE0F3E20)
#define RPG_CLIENT_SPACEZOODATA_GETEXP_OFFSET UNITYSDK_OFFSET(0xE0F55F0)
#define RPG_CLIENT_SPACEZOODATA_GETFEATUREDATA_OFFSET UNITYSDK_OFFSET(0xE0F4FA0)
#define RPG_CLIENT_SPACEZOODATA_GETISEXPMAX_OFFSET UNITYSDK_OFFSET(0xE0F56F0)
#define RPG_CLIENT_SPACEZOODATA_GETLEVEL_OFFSET UNITYSDK_OFFSET(0xE0F5550)
#define RPG_CLIENT_SPACEZOODATA_GETMAXEXP_OFFSET UNITYSDK_OFFSET(0xE0F5440)
#define RPG_CLIENT_SPACEZOODATA_GETSPECIALEVENTDATA_OFFSET UNITYSDK_OFFSET(0xE0F3D40)
#define RPG_CLIENT_SPACEZOODATA_GET_CATS_OFFSET UNITYSDK_OFFSET(0xE0F5AA0)
#define RPG_CLIENT_SPACEZOODATA_GET_CATTERY_OFFSET UNITYSDK_OFFSET(0xE0F5B00)
#define RPG_CLIENT_SPACEZOODATA_GET_EXP_OFFSET UNITYSDK_OFFSET(0xE0F5BF0)
#define RPG_CLIENT_SPACEZOODATA_GET_FEATURES_OFFSET UNITYSDK_OFFSET(0xE0F5B20)
#define RPG_CLIENT_SPACEZOODATA_GET_HANDBOOKREWARD_OFFSET UNITYSDK_OFFSET(0xE0F5B40)
#define RPG_CLIENT_SPACEZOODATA_GET_HAVEMUTATEEVENT_OFFSET UNITYSDK_OFFSET(0xE0F5BA0)
#define RPG_CLIENT_SPACEZOODATA_GET_ISEXPMAX_OFFSET UNITYSDK_OFFSET(0xE0F5CE0)
#define RPG_CLIENT_SPACEZOODATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE0F5C90)
#define RPG_CLIENT_SPACEZOODATA_GET_MAXCATCOUNT_OFFSET UNITYSDK_OFFSET(0xE0F5B80)
#define RPG_CLIENT_SPACEZOODATA_GET_MAXEXP_OFFSET UNITYSDK_OFFSET(0xE0F5C40)
#define RPG_CLIENT_SPACEZOODATA_GET_PHASEUNLOCKMISSIONS_OFFSET UNITYSDK_OFFSET(0xE0F5D30)
#define RPG_CLIENT_SPACEZOODATA_GET_SPECIALEVENTDATAS_OFFSET UNITYSDK_OFFSET(0xE0F5AE0)
#define RPG_CLIENT_SPACEZOODATA_GET_TEMPLATECATS_OFFSET UNITYSDK_OFFSET(0xE0F5AC0)
#define RPG_CLIENT_SPACEZOODATA_GET_TOTALEXP_OFFSET UNITYSDK_OFFSET(0xE0F43A0)
#define RPG_CLIENT_SPACEZOODATA_GET_WAITMUTATECAT_OFFSET UNITYSDK_OFFSET(0xE0F5B60)
#define RPG_CLIENT_SPACEZOODATA_INIT_OFFSET UNITYSDK_OFFSET(0xE0F1F50)
#define RPG_CLIENT_SPACEZOODATA_ISHANDBOOKFINISH_OFFSET UNITYSDK_OFFSET(0xE0F50C0)
#define RPG_CLIENT_SPACEZOODATA_ISHANDBOOKREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xE0F5030)
#define RPG_CLIENT_SPACEZOODATA_REMOVECAT_OFFSET UNITYSDK_OFFSET(0xE0F4E20)
#define RPG_CLIENT_SPACEZOODATA_SET_CATS_OFFSET UNITYSDK_OFFSET(0xE0F5AB0)
#define RPG_CLIENT_SPACEZOODATA_SET_CATTERY_OFFSET UNITYSDK_OFFSET(0xE0F5B10)
#define RPG_CLIENT_SPACEZOODATA_SET_FEATURES_OFFSET UNITYSDK_OFFSET(0xE0F5B30)
#define RPG_CLIENT_SPACEZOODATA_SET_HANDBOOKREWARD_OFFSET UNITYSDK_OFFSET(0xE0F5B50)
#define RPG_CLIENT_SPACEZOODATA_SET_MAXCATCOUNT_OFFSET UNITYSDK_OFFSET(0xE0F5B90)
#define RPG_CLIENT_SPACEZOODATA_SET_PHASEUNLOCKMISSIONS_OFFSET UNITYSDK_OFFSET(0xE0F5D40)
#define RPG_CLIENT_SPACEZOODATA_SET_SPECIALEVENTDATAS_OFFSET UNITYSDK_OFFSET(0xE0F5AF0)
#define RPG_CLIENT_SPACEZOODATA_SET_TEMPLATECATS_OFFSET UNITYSDK_OFFSET(0xE0F5AD0)
#define RPG_CLIENT_SPACEZOODATA_SET_WAITMUTATECAT_OFFSET UNITYSDK_OFFSET(0xE0F5B70)
#define RPG_CLIENT_SPACEZOODATA_SYNCCATTERY_OFFSET UNITYSDK_OFFSET(0xE0F2F40)
#define RPG_CLIENT_SPACEZOODATA_SYNCCAT_OFFSET UNITYSDK_OFFSET(0xE0F47A0)
#define RPG_CLIENT_SPACEZOODATA_SYNCSPACEZOODATA_OFFSET UNITYSDK_OFFSET(0xE0F29C0)
#define RPG_CLIENT_SPACEZOODATA_SYNCSPECIALNODES_OFFSET UNITYSDK_OFFSET(0xE0F2D70)
#define RPG_CLIENT_SPACEZOODATA__CACHENEWCATEXPCHANGE_OFFSET UNITYSDK_OFFSET(0xE0F46A0)
#define RPG_CLIENT_SPACEZOODATA__CACHESPECIALCATEXPCHANGE_OFFSET UNITYSDK_OFFSET(0xE0F4480)
#define RPG_CLIENT_SPACEZOODATA__CREATEFEATUREDATAS_OFFSET UNITYSDK_OFFSET(0xE0F22F0)
#define RPG_CLIENT_SPACEZOODATA__CREATESPECIALEVENTDATAS_OFFSET UNITYSDK_OFFSET(0xE0F20B0)
#define RPG_CLIENT_SPACEZOODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F1C10)
#define RPG_CLIENT_SPACEZOODATA__INITPHASEEXP_OFFSET UNITYSDK_OFFSET(0xE0F2620)
#define RPG_CLIENT_SPACEZOODATA__INITPHASEMISSION_OFFSET UNITYSDK_OFFSET(0xE0F27F0)
#define RPG_CLIENT_SPACEZOODATA__REFRESHSPECIALEVENTUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xE0F3190)
#define RPG_CLIENT_SPACEZOODATA__SYNCCATS_OFFSET UNITYSDK_OFFSET(0xE0F2A70)
#define RPG_CLIENT_SPACEZOODATA__SYNCFEATUREUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xE0F33E0)
#define RPG_CLIENT_SPACEZOODATA__SYNCHANDBOOKREWARD_OFFSET UNITYSDK_OFFSET(0xE0F3AB0)
#define RPG_CLIENT_SPACEZOODATA__SYNCSPECIALEVENT_OFFSET UNITYSDK_OFFSET(0xE0F2BB0)
#define RPG_CLIENT_SPACEZOODATA__TRYUNLOCKSPECIALEVENT_OFFSET UNITYSDK_OFFSET(0xE0F5880)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooData_TypeDefinitionIndex = 67970;

	class SpaceZooData : public ::System::Object
	{
	public:
		// static const ::System::String* _CAT_LIMIT_KEY; // 0x0
		// static const ::System::String* _PHASE_EXP_LEY; // 0x0
		// static const ::System::String* _PHASE_MISSION_LEY; // 0x0
		// static const ::System::String* _NEW_CAT_EXP_LEY; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* _TemplateCats_k__BackingField; // 0x10
		::RPG::Client::SpaceZooCatData* _CurSyncCatData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* _Cats_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _PhaseUnlockMissions_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _PhaseExp; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* _Cattery_k__BackingField; // 0x38
		::RPG::Client::SpaceZooCatData* _WaitMutateCat_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooSpecialEventData*>* _SpecialEventDatas_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooFeatureData*>* _Features_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _HandBookReward_k__BackingField; // 0x58
		::System::UInt32 _NewCatEXP; // 0x60
		::System::UInt32 _MaxCatCount_k__BackingField; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_INIT_OFFSET))(this);
		}

		::System::Void SyncSpaceZooData(::Class_1_8388853775500737* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8388853775500737*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCSPACEZOODATA_OFFSET))(this, a1);
		}

		::System::Void SyncSpecialNodes(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1127*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1127*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCSPECIALNODES_OFFSET))(this, a1);
		}

		::System::Void SyncCattery(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCCATTERY_OFFSET))(this, a1);
		}

		::System::Void AddCat(::Class_1_FC2703A58AD1FBC0_1* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC2703A58AD1FBC0_1*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_ADDCAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncCat(::Class_1_FC2703A58AD1FBC0_1* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC2703A58AD1FBC0_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCCAT_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveCat(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_REMOVECAT_OFFSET))(this, a1);
		}

		::RPG::Client::SpaceZooCatData* GetCatData(::System::UInt32 a1)
		{
			return ((::RPG::Client::SpaceZooCatData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETCATDATA_OFFSET))(this, a1);
		}

		::RPG::Client::SpaceZooFeatureData* GetFeatureData(::System::UInt32 a1)
		{
			return ((::RPG::Client::SpaceZooFeatureData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETFEATUREDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsHandBookRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_ISHANDBOOKREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean IsHandBookFinish(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_ISHANDBOOKFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::SpaceZooCatData* GetCatDataByCattery(::System::UInt32 a1)
		{
			return ((::RPG::Client::SpaceZooCatData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETCATDATABYCATTERY_OFFSET))(this, a1);
		}

		::RPG::Client::SpaceZooSpecialEventData* GetSpecialEventData(::System::UInt32 a1)
		{
			return ((::RPG::Client::SpaceZooSpecialEventData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETSPECIALEVENTDATA_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxEXP(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETMAXEXP_OFFSET))(this, a1);
		}

		::System::UInt32 GetLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 GetEXP(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETEXP_OFFSET))(this, a1);
		}

		::System::Boolean GetIsEXPMax(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETISEXPMAX_OFFSET))(this, a1);
		}

		::System::Void _SyncCats(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC2703A58AD1FBC0_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC2703A58AD1FBC0_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__SYNCCATS_OFFSET))(this, a1);
		}

		::System::Void _SyncSpecialEvent(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__SYNCSPECIALEVENT_OFFSET))(this, a1);
		}

		::System::Void _RefreshSpecialEventUnlockState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__REFRESHSPECIALEVENTUNLOCKSTATE_OFFSET))(this);
		}

		::System::Void _CacheSpecialCatExpChange(::RPG::Client::SpaceZooCatData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__CACHESPECIALCATEXPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _CacheNewCatExpChange(::RPG::Client::SpaceZooCatData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__CACHENEWCATEXPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _SyncFeatureUnlockState(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__SYNCFEATUREUNLOCKSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncHandBookReward(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__SYNCHANDBOOKREWARD_OFFSET))(this, a1);
		}

		::System::Void _TryUnlockSpecialEvent(::RPG::Client::SpaceZooSpecialEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooSpecialEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__TRYUNLOCKSPECIALEVENT_OFFSET))(this, a1);
		}

		::System::Void _CreateSpecialEventDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__CREATESPECIALEVENTDATAS_OFFSET))(this);
		}

		::System::Void _CreateFeatureDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__CREATEFEATUREDATAS_OFFSET))(this);
		}

		::System::Void _InitPhaseEXP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__INITPHASEEXP_OFFSET))(this);
		}

		::System::Void _InitPhaseMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__INITPHASEMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* get_Cats()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_CATS_OFFSET))(this);
		}

		::System::Void set_Cats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_CATS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* get_TemplateCats()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_TEMPLATECATS_OFFSET))(this);
		}

		::System::Void set_TemplateCats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_TEMPLATECATS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooSpecialEventData*>* get_SpecialEventDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooSpecialEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_SPECIALEVENTDATAS_OFFSET))(this);
		}

		::System::Void set_SpecialEventDatas(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooSpecialEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooSpecialEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_SPECIALEVENTDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* get_Cattery()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_CATTERY_OFFSET))(this);
		}

		::System::Void set_Cattery(::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_CATTERY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooFeatureData*>* get_Features()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooFeatureData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_FEATURES_OFFSET))(this);
		}

		::System::Void set_Features(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooFeatureData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooFeatureData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_FEATURES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* get_HandBookReward()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_HANDBOOKREWARD_OFFSET))(this);
		}

		::System::Void set_HandBookReward(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_HANDBOOKREWARD_OFFSET))(this, a1);
		}

		::RPG::Client::SpaceZooCatData* get_WaitMutateCat()
		{
			return ((::RPG::Client::SpaceZooCatData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_WAITMUTATECAT_OFFSET))(this);
		}

		::System::Void set_WaitMutateCat(::RPG::Client::SpaceZooCatData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_WAITMUTATECAT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxCatCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_MAXCATCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxCatCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_MAXCATCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_HaveMutateEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_HAVEMUTATEEVENT_OFFSET))(this);
		}

		::System::UInt32 get_TotalEXP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_TOTALEXP_OFFSET))(this);
		}

		::System::UInt32 get_EXP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_EXP_OFFSET))(this);
		}

		::System::UInt32 get_MaxExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_MAXEXP_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsEXPMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_ISEXPMAX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PhaseUnlockMissions()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_PHASEUNLOCKMISSIONS_OFFSET))(this);
		}

		::System::Void set_PhaseUnlockMissions(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_PHASEUNLOCKMISSIONS_OFFSET))(this, a1);
		}
	};
}
