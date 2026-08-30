#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_85B276A0726A0A0D;
class Class_1_C66C693646754FAB;
class Class_1_D17272E82AE804C2_1097;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class SpaceZooCatData; }
namespace RPG::Client { class SpaceZooFeatureData; }
namespace RPG::Client { class SpaceZooSpecialEventData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SPACEZOODATA_ADDCAT_OFFSET UNITYSDK_OFFSET(0xE0B2F50)
#define RPG_CLIENT_SPACEZOODATA_GETCATDATABYCATTERY_OFFSET UNITYSDK_OFFSET(0xE0B43B0)
#define RPG_CLIENT_SPACEZOODATA_GETCATDATA_OFFSET UNITYSDK_OFFSET(0xE0B2EC0)
#define RPG_CLIENT_SPACEZOODATA_GETEXP_OFFSET UNITYSDK_OFFSET(0xE0B45E0)
#define RPG_CLIENT_SPACEZOODATA_GETFEATUREDATA_OFFSET UNITYSDK_OFFSET(0xE0B3F90)
#define RPG_CLIENT_SPACEZOODATA_GETISEXPMAX_OFFSET UNITYSDK_OFFSET(0xE0B46E0)
#define RPG_CLIENT_SPACEZOODATA_GETLEVEL_OFFSET UNITYSDK_OFFSET(0xE0B4540)
#define RPG_CLIENT_SPACEZOODATA_GETMAXEXP_OFFSET UNITYSDK_OFFSET(0xE0B4430)
#define RPG_CLIENT_SPACEZOODATA_GETSPECIALEVENTDATA_OFFSET UNITYSDK_OFFSET(0xE0B2DE0)
#define RPG_CLIENT_SPACEZOODATA_GET_CATS_OFFSET UNITYSDK_OFFSET(0xE0B4A90)
#define RPG_CLIENT_SPACEZOODATA_GET_CATTERY_OFFSET UNITYSDK_OFFSET(0xE0B4AF0)
#define RPG_CLIENT_SPACEZOODATA_GET_EXP_OFFSET UNITYSDK_OFFSET(0xE0B4BE0)
#define RPG_CLIENT_SPACEZOODATA_GET_FEATURES_OFFSET UNITYSDK_OFFSET(0xE0B4B10)
#define RPG_CLIENT_SPACEZOODATA_GET_HANDBOOKREWARD_OFFSET UNITYSDK_OFFSET(0xE0B4B30)
#define RPG_CLIENT_SPACEZOODATA_GET_HAVEMUTATEEVENT_OFFSET UNITYSDK_OFFSET(0xE0B4B90)
#define RPG_CLIENT_SPACEZOODATA_GET_ISEXPMAX_OFFSET UNITYSDK_OFFSET(0xE0B4CD0)
#define RPG_CLIENT_SPACEZOODATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE0B4C80)
#define RPG_CLIENT_SPACEZOODATA_GET_MAXCATCOUNT_OFFSET UNITYSDK_OFFSET(0xE0B4B70)
#define RPG_CLIENT_SPACEZOODATA_GET_MAXEXP_OFFSET UNITYSDK_OFFSET(0xE0B4C30)
#define RPG_CLIENT_SPACEZOODATA_GET_PHASEUNLOCKMISSIONS_OFFSET UNITYSDK_OFFSET(0xE0B4D20)
#define RPG_CLIENT_SPACEZOODATA_GET_SPECIALEVENTDATAS_OFFSET UNITYSDK_OFFSET(0xE0B4AD0)
#define RPG_CLIENT_SPACEZOODATA_GET_TEMPLATECATS_OFFSET UNITYSDK_OFFSET(0xE0B4AB0)
#define RPG_CLIENT_SPACEZOODATA_GET_TOTALEXP_OFFSET UNITYSDK_OFFSET(0xE0B3410)
#define RPG_CLIENT_SPACEZOODATA_GET_WAITMUTATECAT_OFFSET UNITYSDK_OFFSET(0xE0B4B50)
#define RPG_CLIENT_SPACEZOODATA_INIT_OFFSET UNITYSDK_OFFSET(0xE0B1020)
#define RPG_CLIENT_SPACEZOODATA_ISHANDBOOKFINISH_OFFSET UNITYSDK_OFFSET(0xE0B40B0)
#define RPG_CLIENT_SPACEZOODATA_ISHANDBOOKREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xE0B4020)
#define RPG_CLIENT_SPACEZOODATA_REMOVECAT_OFFSET UNITYSDK_OFFSET(0xE0B3E10)
#define RPG_CLIENT_SPACEZOODATA_SET_CATS_OFFSET UNITYSDK_OFFSET(0xE0B4AA0)
#define RPG_CLIENT_SPACEZOODATA_SET_CATTERY_OFFSET UNITYSDK_OFFSET(0xE0B4B00)
#define RPG_CLIENT_SPACEZOODATA_SET_FEATURES_OFFSET UNITYSDK_OFFSET(0xE0B4B20)
#define RPG_CLIENT_SPACEZOODATA_SET_HANDBOOKREWARD_OFFSET UNITYSDK_OFFSET(0xE0B4B40)
#define RPG_CLIENT_SPACEZOODATA_SET_MAXCATCOUNT_OFFSET UNITYSDK_OFFSET(0xE0B4B80)
#define RPG_CLIENT_SPACEZOODATA_SET_PHASEUNLOCKMISSIONS_OFFSET UNITYSDK_OFFSET(0xE0B4D30)
#define RPG_CLIENT_SPACEZOODATA_SET_SPECIALEVENTDATAS_OFFSET UNITYSDK_OFFSET(0xE0B4AE0)
#define RPG_CLIENT_SPACEZOODATA_SET_TEMPLATECATS_OFFSET UNITYSDK_OFFSET(0xE0B4AC0)
#define RPG_CLIENT_SPACEZOODATA_SET_WAITMUTATECAT_OFFSET UNITYSDK_OFFSET(0xE0B4B60)
#define RPG_CLIENT_SPACEZOODATA_SYNCCATTERY_OFFSET UNITYSDK_OFFSET(0xE0B2010)
#define RPG_CLIENT_SPACEZOODATA_SYNCCAT_OFFSET UNITYSDK_OFFSET(0xE0B3810)
#define RPG_CLIENT_SPACEZOODATA_SYNCSPACEZOODATA_OFFSET UNITYSDK_OFFSET(0xE0B1A90)
#define RPG_CLIENT_SPACEZOODATA_SYNCSPECIALNODES_OFFSET UNITYSDK_OFFSET(0xE0B1E40)
#define RPG_CLIENT_SPACEZOODATA__CACHENEWCATEXPCHANGE_OFFSET UNITYSDK_OFFSET(0xE0B3710)
#define RPG_CLIENT_SPACEZOODATA__CACHESPECIALCATEXPCHANGE_OFFSET UNITYSDK_OFFSET(0xE0B34F0)
#define RPG_CLIENT_SPACEZOODATA__CREATEFEATUREDATAS_OFFSET UNITYSDK_OFFSET(0xE0B13C0)
#define RPG_CLIENT_SPACEZOODATA__CREATESPECIALEVENTDATAS_OFFSET UNITYSDK_OFFSET(0xE0B1180)
#define RPG_CLIENT_SPACEZOODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE0B0CE0)
#define RPG_CLIENT_SPACEZOODATA__INITPHASEEXP_OFFSET UNITYSDK_OFFSET(0xE0B16F0)
#define RPG_CLIENT_SPACEZOODATA__INITPHASEMISSION_OFFSET UNITYSDK_OFFSET(0xE0B18C0)
#define RPG_CLIENT_SPACEZOODATA__REFRESHSPECIALEVENTUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xE0B2260)
#define RPG_CLIENT_SPACEZOODATA__SYNCCATS_OFFSET UNITYSDK_OFFSET(0xE0B1B40)
#define RPG_CLIENT_SPACEZOODATA__SYNCFEATUREUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xE0B24B0)
#define RPG_CLIENT_SPACEZOODATA__SYNCHANDBOOKREWARD_OFFSET UNITYSDK_OFFSET(0xE0B2B50)
#define RPG_CLIENT_SPACEZOODATA__SYNCSPECIALEVENT_OFFSET UNITYSDK_OFFSET(0xE0B1C80)
#define RPG_CLIENT_SPACEZOODATA__TRYUNLOCKSPECIALEVENT_OFFSET UNITYSDK_OFFSET(0xE0B4870)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooData_TypeDefinitionIndex = 67965;

	class SpaceZooData : public ::System::Object
	{
	public:
		// static const ::System::String* _CAT_LIMIT_KEY; // 0x0
		// static const ::System::String* _PHASE_EXP_LEY; // 0x0
		// static const ::System::String* _PHASE_MISSION_LEY; // 0x0
		// static const ::System::String* _NEW_CAT_EXP_LEY; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _PhaseExp; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _HandBookReward_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* _Cats_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* _TemplateCats_k__BackingField; // 0x28
		::RPG::Client::SpaceZooCatData* _CurSyncCatData; // 0x30
		::RPG::Client::SpaceZooCatData* _WaitMutateCat_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* _Cattery_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _PhaseUnlockMissions_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooSpecialEventData*>* _SpecialEventDatas_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooFeatureData*>* _Features_k__BackingField; // 0x58
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

		::System::Void SyncSpaceZooData(::Class_1_85B276A0726A0A0D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_85B276A0726A0A0D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCSPACEZOODATA_OFFSET))(this, a1);
		}

		::System::Void SyncSpecialNodes(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1097*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1097*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCSPECIALNODES_OFFSET))(this, a1);
		}

		::System::Void SyncCattery(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCCATTERY_OFFSET))(this, a1);
		}

		::System::Void AddCat(::Class_1_C66C693646754FAB* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C66C693646754FAB*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_ADDCAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncCat(::Class_1_C66C693646754FAB* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C66C693646754FAB*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCCAT_OFFSET))(this, a1, a2);
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

		::System::Void _SyncCats(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66C693646754FAB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66C693646754FAB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__SYNCCATS_OFFSET))(this, a1);
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
