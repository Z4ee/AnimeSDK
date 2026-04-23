#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1DC52A0BEDF50632_4;
class Class_1_569A1536AD9335E7_1;
class Class_1_D17272E82AE804C2_918;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class SpaceZooCatData; }
namespace RPG::Client { class SpaceZooFeatureData; }
namespace RPG::Client { class SpaceZooSpecialEventData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SPACEZOODATA_ADDCAT_OFFSET UNITYSDK_OFFSET(0xB198A80)
#define RPG_CLIENT_SPACEZOODATA_GETCATDATABYCATTERY_OFFSET UNITYSDK_OFFSET(0xB199F40)
#define RPG_CLIENT_SPACEZOODATA_GETCATDATA_OFFSET UNITYSDK_OFFSET(0xB1989C0)
#define RPG_CLIENT_SPACEZOODATA_GETEXP_OFFSET UNITYSDK_OFFSET(0xB19A120)
#define RPG_CLIENT_SPACEZOODATA_GETFEATUREDATA_OFFSET UNITYSDK_OFFSET(0xB199B50)
#define RPG_CLIENT_SPACEZOODATA_GETISEXPMAX_OFFSET UNITYSDK_OFFSET(0xB19A1E0)
#define RPG_CLIENT_SPACEZOODATA_GETLEVEL_OFFSET UNITYSDK_OFFSET(0xB19A0A0)
#define RPG_CLIENT_SPACEZOODATA_GETMAXEXP_OFFSET UNITYSDK_OFFSET(0xB199FD0)
#define RPG_CLIENT_SPACEZOODATA_GETSPECIALEVENTDATA_OFFSET UNITYSDK_OFFSET(0xB1988B0)
#define RPG_CLIENT_SPACEZOODATA_GET_CATS_OFFSET UNITYSDK_OFFSET(0xB19A580)
#define RPG_CLIENT_SPACEZOODATA_GET_CATTERY_OFFSET UNITYSDK_OFFSET(0xB19A5E0)
#define RPG_CLIENT_SPACEZOODATA_GET_EXP_OFFSET UNITYSDK_OFFSET(0xB19A690)
#define RPG_CLIENT_SPACEZOODATA_GET_FEATURES_OFFSET UNITYSDK_OFFSET(0xB19A600)
#define RPG_CLIENT_SPACEZOODATA_GET_HANDBOOKREWARD_OFFSET UNITYSDK_OFFSET(0xB19A620)
#define RPG_CLIENT_SPACEZOODATA_GET_HAVEMUTATEEVENT_OFFSET UNITYSDK_OFFSET(0xB19A680)
#define RPG_CLIENT_SPACEZOODATA_GET_ISEXPMAX_OFFSET UNITYSDK_OFFSET(0xB19A7E0)
#define RPG_CLIENT_SPACEZOODATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB19A730)
#define RPG_CLIENT_SPACEZOODATA_GET_MAXCATCOUNT_OFFSET UNITYSDK_OFFSET(0xB19A660)
#define RPG_CLIENT_SPACEZOODATA_GET_MAXEXP_OFFSET UNITYSDK_OFFSET(0xB19A6E0)
#define RPG_CLIENT_SPACEZOODATA_GET_PHASEUNLOCKMISSIONS_OFFSET UNITYSDK_OFFSET(0xB19A890)
#define RPG_CLIENT_SPACEZOODATA_GET_SPECIALEVENTDATAS_OFFSET UNITYSDK_OFFSET(0xB19A5C0)
#define RPG_CLIENT_SPACEZOODATA_GET_TEMPLATECATS_OFFSET UNITYSDK_OFFSET(0xB19A5A0)
#define RPG_CLIENT_SPACEZOODATA_GET_TOTALEXP_OFFSET UNITYSDK_OFFSET(0xB198F90)
#define RPG_CLIENT_SPACEZOODATA_GET_WAITMUTATECAT_OFFSET UNITYSDK_OFFSET(0xB19A640)
#define RPG_CLIENT_SPACEZOODATA_INIT_OFFSET UNITYSDK_OFFSET(0xB196DD0)
#define RPG_CLIENT_SPACEZOODATA_ISHANDBOOKFINISH_OFFSET UNITYSDK_OFFSET(0xB199CB0)
#define RPG_CLIENT_SPACEZOODATA_ISHANDBOOKREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB199C10)
#define RPG_CLIENT_SPACEZOODATA_REMOVECAT_OFFSET UNITYSDK_OFFSET(0xB1999A0)
#define RPG_CLIENT_SPACEZOODATA_SET_CATS_OFFSET UNITYSDK_OFFSET(0xB19A590)
#define RPG_CLIENT_SPACEZOODATA_SET_CATTERY_OFFSET UNITYSDK_OFFSET(0xB19A5F0)
#define RPG_CLIENT_SPACEZOODATA_SET_FEATURES_OFFSET UNITYSDK_OFFSET(0xB19A610)
#define RPG_CLIENT_SPACEZOODATA_SET_HANDBOOKREWARD_OFFSET UNITYSDK_OFFSET(0xB19A630)
#define RPG_CLIENT_SPACEZOODATA_SET_MAXCATCOUNT_OFFSET UNITYSDK_OFFSET(0xB19A670)
#define RPG_CLIENT_SPACEZOODATA_SET_PHASEUNLOCKMISSIONS_OFFSET UNITYSDK_OFFSET(0xB19A8A0)
#define RPG_CLIENT_SPACEZOODATA_SET_SPECIALEVENTDATAS_OFFSET UNITYSDK_OFFSET(0xB19A5D0)
#define RPG_CLIENT_SPACEZOODATA_SET_TEMPLATECATS_OFFSET UNITYSDK_OFFSET(0xB19A5B0)
#define RPG_CLIENT_SPACEZOODATA_SET_WAITMUTATECAT_OFFSET UNITYSDK_OFFSET(0xB19A650)
#define RPG_CLIENT_SPACEZOODATA_SYNCCATTERY_OFFSET UNITYSDK_OFFSET(0xB197D00)
#define RPG_CLIENT_SPACEZOODATA_SYNCCAT_OFFSET UNITYSDK_OFFSET(0xB199380)
#define RPG_CLIENT_SPACEZOODATA_SYNCSPACEZOODATA_OFFSET UNITYSDK_OFFSET(0xB1977A0)
#define RPG_CLIENT_SPACEZOODATA_SYNCSPECIALNODES_OFFSET UNITYSDK_OFFSET(0xB197B50)
#define RPG_CLIENT_SPACEZOODATA__CACHENEWCATEXPCHANGE_OFFSET UNITYSDK_OFFSET(0xB199280)
#define RPG_CLIENT_SPACEZOODATA__CACHESPECIALCATEXPCHANGE_OFFSET UNITYSDK_OFFSET(0xB199070)
#define RPG_CLIENT_SPACEZOODATA__CREATEFEATUREDATAS_OFFSET UNITYSDK_OFFSET(0xB197130)
#define RPG_CLIENT_SPACEZOODATA__CREATESPECIALEVENTDATAS_OFFSET UNITYSDK_OFFSET(0xB196F30)
#define RPG_CLIENT_SPACEZOODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB196AD0)
#define RPG_CLIENT_SPACEZOODATA__INITPHASEEXP_OFFSET UNITYSDK_OFFSET(0xB197420)
#define RPG_CLIENT_SPACEZOODATA__INITPHASEMISSION_OFFSET UNITYSDK_OFFSET(0xB1975E0)
#define RPG_CLIENT_SPACEZOODATA__REFRESHSPECIALEVENTUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xB197F20)
#define RPG_CLIENT_SPACEZOODATA__SYNCCATS_OFFSET UNITYSDK_OFFSET(0xB197850)
#define RPG_CLIENT_SPACEZOODATA__SYNCFEATUREUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xB1980F0)
#define RPG_CLIENT_SPACEZOODATA__SYNCHANDBOOKREWARD_OFFSET UNITYSDK_OFFSET(0xB1986F0)
#define RPG_CLIENT_SPACEZOODATA__SYNCSPECIALEVENT_OFFSET UNITYSDK_OFFSET(0xB197950)
#define RPG_CLIENT_SPACEZOODATA__TRYUNLOCKSPECIALEVENT_OFFSET UNITYSDK_OFFSET(0xB19A360)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooData_TypeDefinitionIndex = 62658;

	class SpaceZooData : public ::System::Object
	{
	public:
		// static const ::System::String* _CAT_LIMIT_KEY; // 0x0
		// static const ::System::String* _PHASE_EXP_LEY; // 0x0
		// static const ::System::String* _PHASE_MISSION_LEY; // 0x0
		// static const ::System::String* _NEW_CAT_EXP_LEY; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _HandBookReward_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* _TemplateCats_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooFeatureData*>* _Features_k__BackingField; // 0x20
		::RPG::Client::SpaceZooCatData* _WaitMutateCat_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _PhaseExp; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooSpecialEventData*>* _SpecialEventDatas_k__BackingField; // 0x38
		::RPG::Client::SpaceZooCatData* _CurSyncCatData; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _PhaseUnlockMissions_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* _Cattery_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* _Cats_k__BackingField; // 0x58
		::System::UInt32 _MaxCatCount_k__BackingField; // 0x60
		::System::UInt32 _NewCatEXP; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_INIT_OFFSET))(this);
		}

		::System::Void SyncSpaceZooData(::Class_1_1DC52A0BEDF50632_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1DC52A0BEDF50632_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCSPACEZOODATA_OFFSET))(this, rsp);
		}

		::System::Void SyncSpecialNodes(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_918*>* specialNodes)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_918*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCSPECIALNODES_OFFSET))(this, specialNodes);
		}

		::System::Void SyncCattery(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* catIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCCATTERY_OFFSET))(this, catIDs);
		}

		::System::Void AddCat(::Class_1_569A1536AD9335E7_1* catNode, ::System::Boolean unlock, ::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_569A1536AD9335E7_1*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_ADDCAT_OFFSET))(this, catNode, unlock, isNew);
		}

		::System::Void SyncCat(::Class_1_569A1536AD9335E7_1* catNode, ::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_569A1536AD9335E7_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SYNCCAT_OFFSET))(this, catNode, isNew);
		}

		::System::Void RemoveCat(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_REMOVECAT_OFFSET))(this, uniqueID);
		}

		::RPG::Client::SpaceZooCatData* GetCatData(::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::SpaceZooCatData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETCATDATA_OFFSET))(this, uniqueID);
		}

		::RPG::Client::SpaceZooFeatureData* GetFeatureData(::System::UInt32 featureID)
		{
			return ((::RPG::Client::SpaceZooFeatureData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETFEATUREDATA_OFFSET))(this, featureID);
		}

		::System::Boolean IsHandBookRewardTaken(::System::UInt32 handBookID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_ISHANDBOOKREWARDTAKEN_OFFSET))(this, handBookID);
		}

		::System::Boolean IsHandBookFinish(::System::UInt32 handBookID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_ISHANDBOOKFINISH_OFFSET))(this, handBookID);
		}

		::RPG::Client::SpaceZooCatData* GetCatDataByCattery(::System::UInt32 catteryID)
		{
			return ((::RPG::Client::SpaceZooCatData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETCATDATABYCATTERY_OFFSET))(this, catteryID);
		}

		::RPG::Client::SpaceZooSpecialEventData* GetSpecialEventData(::System::UInt32 specialCatID)
		{
			return ((::RPG::Client::SpaceZooSpecialEventData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETSPECIALEVENTDATA_OFFSET))(this, specialCatID);
		}

		::System::UInt32 GetMaxEXP(::System::UInt32 curEXP)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETMAXEXP_OFFSET))(this, curEXP);
		}

		::System::UInt32 GetLevel(::System::UInt32 curEXP)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETLEVEL_OFFSET))(this, curEXP);
		}

		::System::UInt32 GetEXP(::System::UInt32 totalEXP)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETEXP_OFFSET))(this, totalEXP);
		}

		::System::Boolean GetIsEXPMax(::System::UInt32 totalEXP)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GETISEXPMAX_OFFSET))(this, totalEXP);
		}

		::System::Void _SyncCats(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_569A1536AD9335E7_1*>* catNodes)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_569A1536AD9335E7_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__SYNCCATS_OFFSET))(this, catNodes);
		}

		::System::Void _SyncSpecialEvent(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* specialEvents)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__SYNCSPECIALEVENT_OFFSET))(this, specialEvents);
		}

		::System::Void _RefreshSpecialEventUnlockState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__REFRESHSPECIALEVENTUNLOCKSTATE_OFFSET))(this);
		}

		::System::Void _CacheSpecialCatExpChange(::RPG::Client::SpaceZooCatData* catData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__CACHESPECIALCATEXPCHANGE_OFFSET))(this, catData);
		}

		::System::Void _CacheNewCatExpChange(::RPG::Client::SpaceZooCatData* catData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__CACHENEWCATEXPCHANGE_OFFSET))(this, catData);
		}

		::System::Void _SyncFeatureUnlockState(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* unlockFeatureList, ::System::Boolean cacheUnlockFeature)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__SYNCFEATUREUNLOCKSTATE_OFFSET))(this, unlockFeatureList, cacheUnlockFeature);
		}

		::System::Void _SyncHandBookReward(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* takenRewardHandBooks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__SYNCHANDBOOKREWARD_OFFSET))(this, takenRewardHandBooks);
		}

		::System::Void _TryUnlockSpecialEvent(::RPG::Client::SpaceZooSpecialEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooSpecialEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA__TRYUNLOCKSPECIALEVENT_OFFSET))(this, eventData);
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

		::System::Void set_Cats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_CATS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* get_TemplateCats()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_TEMPLATECATS_OFFSET))(this);
		}

		::System::Void set_TemplateCats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooCatData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_TEMPLATECATS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooSpecialEventData*>* get_SpecialEventDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooSpecialEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_SPECIALEVENTDATAS_OFFSET))(this);
		}

		::System::Void set_SpecialEventDatas(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooSpecialEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooSpecialEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_SPECIALEVENTDATAS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* get_Cattery()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_CATTERY_OFFSET))(this);
		}

		::System::Void set_Cattery(::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_CATTERY_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooFeatureData*>* get_Features()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooFeatureData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_FEATURES_OFFSET))(this);
		}

		::System::Void set_Features(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooFeatureData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SpaceZooFeatureData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_FEATURES_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* get_HandBookReward()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_HANDBOOKREWARD_OFFSET))(this);
		}

		::System::Void set_HandBookReward(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_HANDBOOKREWARD_OFFSET))(this, value);
		}

		::RPG::Client::SpaceZooCatData* get_WaitMutateCat()
		{
			return ((::RPG::Client::SpaceZooCatData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_WAITMUTATECAT_OFFSET))(this);
		}

		::System::Void set_WaitMutateCat(::RPG::Client::SpaceZooCatData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_WAITMUTATECAT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxCatCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_GET_MAXCATCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxCatCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_MAXCATCOUNT_OFFSET))(this, value);
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

		::System::Void set_PhaseUnlockMissions(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOODATA_SET_PHASEUNLOCKMISSIONS_OFFSET))(this, value);
		}
	};
}
