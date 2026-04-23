#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_36.h"
#include "unitysdk/System/Object.h"

class Class_1_DB9F32FCA772D309_2;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitEffectBase; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CHANGEBOTHSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0xA487A40)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA486BD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CONTAINSEQUIPWITHVARIANT_OFFSET UNITYSDK_OFFSET(0xA484FF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xA486220)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA489050)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GETFINISHEDEQUIPCHECKSTATE_OFFSET UNITYSDK_OFFSET(0xA486E30)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GETFINISHEDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xA486DF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_BASEMEMBERID_OFFSET UNITYSDK_OFFSET(0xA485090)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_DUMMYMEMBER_OFFSET UNITYSDK_OFFSET(0xA4886F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_EQUIPIDS_OFFSET UNITYSDK_OFFSET(0xA488EF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_FORCETRACKWHENFULL_OFFSET UNITYSDK_OFFSET(0xA488E50)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_HASBOTHEQUIPCONFIGSELECT_OFFSET UNITYSDK_OFFSET(0xA487CD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISALLFINISHED_OFFSET UNITYSDK_OFFSET(0xA488F50)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISSELECTBACKEQUIPCONFIG_OFFSET UNITYSDK_OFFSET(0xA488FD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISSELECTFRONTEQUIPCONFIG_OFFSET UNITYSDK_OFFSET(0xA487D90)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISTRACKDUMMY_OFFSET UNITYSDK_OFFSET(0xA488ED0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISTRACKFRONT_OFFSET UNITYSDK_OFFSET(0xA488FB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_MEMBERID_OFFSET UNITYSDK_OFFSET(0xA488E70)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0xA488E90)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_PRIORITYINDEX_OFFSET UNITYSDK_OFFSET(0xA488CF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA488CD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_REQUIREDCOSTEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xA488F30)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA488CB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_TARGETMEMBER_OFFSET UNITYSDK_OFFSET(0xA487E10)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_TRAITMEMBER_OFFSET UNITYSDK_OFFSET(0xA488EB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_WAITTRACKEQUIPID2COUNT_OFFSET UNITYSDK_OFFSET(0xA488F10)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_ISTRACKEDBYEQUIPID_OFFSET UNITYSDK_OFFSET(0xA4880A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETPRIORITY_OFFSET UNITYSDK_OFFSET(0xA488050)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_EQUIPIDS_OFFSET UNITYSDK_OFFSET(0xA488F00)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_FORCETRACKWHENFULL_OFFSET UNITYSDK_OFFSET(0xA488E60)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_ISTRACKDUMMY_OFFSET UNITYSDK_OFFSET(0xA488EE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_ISTRACKFRONT_OFFSET UNITYSDK_OFFSET(0xA488FC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_MEMBERID_OFFSET UNITYSDK_OFFSET(0xA488E80)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_MEMBER_OFFSET UNITYSDK_OFFSET(0xA488EA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA488CE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_REQUIREDCOSTEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xA488F40)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA488CC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_TRAITMEMBER_OFFSET UNITYSDK_OFFSET(0xA488EC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_WAITTRACKEQUIPID2COUNT_OFFSET UNITYSDK_OFFSET(0xA488F20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SWAPPRIORITY_OFFSET UNITYSDK_OFFSET(0xA486C40)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_TRYRECORDFINISHEQUIPID_OFFSET UNITYSDK_OFFSET(0xA4876B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATEREQUIREDEQUIPS_OFFSET UNITYSDK_OFFSET(0xA4881D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0xA486730)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATEWAITTRACKEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xA488750)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA486A20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA486550)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK__GETBASEEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0xA4875D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK__GETFINISHEDEQUIPCHECKSTATES_OFFSET UNITYSDK_OFFSET(0xA486EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrack_TypeDefinitionIndex = 60137;

	class GridFightEquipTrack : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EquipIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedEquipIDs; // 0x18
		::RPG::Client::GridFightRole* _Member_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _WaitTrackEquipID2Count_k__BackingField; // 0x28
		::RPG::Client::GridFightRole* _DummyMember; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _RequiredCostEquipCount_k__BackingField; // 0x38
		::RPG::Client::GridFightTraitEffectBase* _TraitMember_k__BackingField; // 0x40
		::Enum_3_DB663931210BBC27_36 _Source_k__BackingField; // 0x48
		::System::UInt32 _Priority_k__BackingField; // 0x4C
		::System::Boolean _IsTrackFront_k__BackingField; // 0x50
		::System::Boolean _IsTrackDummy_k__BackingField; // 0x51
		::System::Boolean _ForceTrackWhenFull_k__BackingField; // 0x52
		::System::UInt32 _MemberID_k__BackingField; // 0x54

		::System::Void _ctor(::Class_1_DB9F32FCA772D309_2* trackInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB9F32FCA772D309_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK__CTOR_OFFSET))(this, trackInfo);
		}

		::System::Void _ctor_1(::System::UInt32 memberID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* equipIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK__CTOR_1_OFFSET))(this, memberID, equipIDs);
		}

		static ::RPG::Client::GridFightEquipTrack* CreateFromServer(::Class_1_DB9F32FCA772D309_2* trackInfo)
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::Class_1_DB9F32FCA772D309_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CREATEFROMSERVER_OFFSET))(trackInfo);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightEquipTrack* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_COMPARETO_OFFSET))(this, other);
		}

		::System::Void SwapPriority(::RPG::Client::GridFightEquipTrack* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SWAPPRIORITY_OFFSET))(this, other);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFinishedEquipIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GETFINISHEDEQUIPIDS_OFFSET))(this);
		}

		::System::Boolean GetFinishedEquipCheckState(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GETFINISHEDEQUIPCHECKSTATE_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::System::Boolean>* _GetFinishedEquipCheckStates()
		{
			return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK__GETFINISHEDEQUIPCHECKSTATES_OFFSET))(this);
		}

		::System::Void TryRecordFinishEquipID(::System::UInt32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_TRYRECORDFINISHEQUIPID_OFFSET))(this, equipID);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ChangeBothSelectConfig()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CHANGEBOTHSELECTCONFIG_OFFSET))(this);
		}

		::System::Void SetPriority(::System::UInt32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETPRIORITY_OFFSET))(this, priority);
		}

		::System::Boolean ContainsEquipWithVariant(::System::UInt32 equipID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CONTAINSEQUIPWITHVARIANT_OFFSET))(this, equipID);
		}

		::System::Boolean IsTrackedByEquipID(::System::UInt32 equipID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_ISTRACKEDBYEQUIPID_OFFSET))(this, equipID);
		}

		::System::Void UpdateRequiredEquips(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* assignedUIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATEREQUIREDEQUIPS_OFFSET))(this, assignedUIDs);
		}

		::System::Void UpdateTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATETARGET_OFFSET))(this);
		}

		::System::Void UpdateWaitTrackEquipIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATEWAITTRACKEQUIPIDS_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_36 get_Source()
		{
			return ((::Enum_3_DB663931210BBC27_36(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::Enum_3_DB663931210BBC27_36 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_36))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_SOURCE_OFFSET))(this, value);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_PRIORITY_OFFSET))(this, value);
		}

		::System::Int32 get_PriorityIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_PRIORITYINDEX_OFFSET))(this);
		}

		::System::Boolean get_ForceTrackWhenFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_FORCETRACKWHENFULL_OFFSET))(this);
		}

		::System::Void set_ForceTrackWhenFull(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_FORCETRACKWHENFULL_OFFSET))(this, value);
		}

		::System::UInt32 get_MemberID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_MEMBERID_OFFSET))(this);
		}

		::System::Void set_MemberID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_MEMBERID_OFFSET))(this, value);
		}

		::System::UInt32 get_BaseMemberID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_BASEMEMBERID_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_TargetMember()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_TARGETMEMBER_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Member()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_MEMBER_OFFSET))(this);
		}

		::System::Void set_Member(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_MEMBER_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitEffectBase* get_TraitMember()
		{
			return ((::RPG::Client::GridFightTraitEffectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_TRAITMEMBER_OFFSET))(this);
		}

		::System::Void set_TraitMember(::RPG::Client::GridFightTraitEffectBase* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_TRAITMEMBER_OFFSET))(this, value);
		}

		::System::Boolean get_IsTrackDummy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISTRACKDUMMY_OFFSET))(this);
		}

		::System::Void set_IsTrackDummy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_ISTRACKDUMMY_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRole* get_DummyMember()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_DUMMYMEMBER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EquipIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_EQUIPIDS_OFFSET))(this);
		}

		::System::Void set_EquipIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_EQUIPIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* get_WaitTrackEquipID2Count()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_WAITTRACKEQUIPID2COUNT_OFFSET))(this);
		}

		::System::Void set_WaitTrackEquipID2Count(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_WAITTRACKEQUIPID2COUNT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_RequiredCostEquipCount()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_REQUIREDCOSTEQUIPCOUNT_OFFSET))(this);
		}

		::System::Void set_RequiredCostEquipCount(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_REQUIREDCOSTEQUIPCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISALLFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsTrackFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISTRACKFRONT_OFFSET))(this);
		}

		::System::Void set_IsTrackFront(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_ISTRACKFRONT_OFFSET))(this, value);
		}

		::System::Boolean get_HasBothEquipConfigSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_HASBOTHEQUIPCONFIGSELECT_OFFSET))(this);
		}

		::System::Boolean get_IsSelectFrontEquipConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISSELECTFRONTEQUIPCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsSelectBackEquipConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISSELECTBACKEQUIPCONFIG_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::GridFightEquipTrack* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_EQUALS_OFFSET))(this, other);
		}

		::System::UInt32 _GetBaseEquipItemID(::System::UInt32 equipID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK__GETBASEEQUIPITEMID_OFFSET))(this, equipID);
		}
	};
}
