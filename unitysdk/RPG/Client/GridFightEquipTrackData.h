#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_37.h"
#include "unitysdk/RPG/Client/GridFightEquipTrackCancelReason.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_626;
class Class_1_0812913C2F0E10CD;
class Class_1_5CF1DDAFE12F0E87_1;
class Class_1_C9DFE5EE7107C629_8;
class Class_1_FA4F4A67B1C04320_417;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightEquipTrackQuickCraftParam; }
namespace RPG::Client { class GridFightEquipTrackQuickDressParam; }
namespace RPG::Client { class GridFightEquipTrackTargetSelector; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T1, typename T2> class Class_1_38F81D6A5D792EE0;
template <typename T> class Class_3_2A6530038D51A41A;

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACKLATESTPRIORITY_OFFSET UNITYSDK_OFFSET(0x980BC50)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x980A8A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CHANGETRACKEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x9806C30)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CREATESERVERTRACKUPDATEINFO_OFFSET UNITYSDK_OFFSET(0x9806610)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9807DF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_FORCESETEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x980C620)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKBYROLEID_OFFSET UNITYSDK_OFFSET(0x980DA30)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_1_OFFSET UNITYSDK_OFFSET(0x980DD40)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_OFFSET UNITYSDK_OFFSET(0x980A9D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x98078E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_ISEQUIPTRACKFULL_OFFSET UNITYSDK_OFFSET(0x980EA90)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_ISQUICKOPPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0x9810120)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HASEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x980DB80)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_1_OFFSET UNITYSDK_OFFSET(0x980E040)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_OFFSET UNITYSDK_OFFSET(0x980DF80)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ISTRACKSAME_OFFSET UNITYSDK_OFFSET(0x980C750)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONBEFOREUSECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0x980E100)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONUPDATETRACKRSP_OFFSET UNITYSDK_OFFSET(0x980E6B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_1_OFFSET UNITYSDK_OFFSET(0x980CDD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x980CC90)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEGUIDETRACK_OFFSET UNITYSDK_OFFSET(0x980D750)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REPLACEEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x980D020)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9807F50)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9807920)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_ISQUICKOPPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0x9810130)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SYNCGAMEREFCHANGE_OFFSET UNITYSDK_OFFSET(0x980D690)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATEEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x980D260)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x9808610)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__ADDTRACKTOLASTANDSEND_OFFSET UNITYSDK_OFFSET(0x980BD60)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CHECKUNHIDEEQUIP_OFFSET UNITYSDK_OFFSET(0x98098E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9807960)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETALREADYEQUIPPEDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x980C910)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETMAXPRIORITY_OFFSET UNITYSDK_OFFSET(0x980E770)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETMINPRIORITY_OFFSET UNITYSDK_OFFSET(0x980E900)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__RECORDREQUIREDCOSTEQUIP_OFFSET UNITYSDK_OFFSET(0x980F830)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__RESETALLTRACKSPRIORITYANDSEND_OFFSET UNITYSDK_OFFSET(0x980AC00)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYASSIGNBASICEQUIP_OFFSET UNITYSDK_OFFSET(0x980F500)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYASSIGNNONEBASICEQUIP_OFFSET UNITYSDK_OFFSET(0x980F260)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATECANCELTRACK_OFFSET UNITYSDK_OFFSET(0x9808960)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEHIDEEQUIPCOUNTSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x9809A70)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEQUICKDRESSANDCRAFTPARAMS_1_OFFSET UNITYSDK_OFFSET(0x980F900)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEQUICKDRESSANDCRAFTPARAMS_OFFSET UNITYSDK_OFFSET(0x980A290)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEREQUIREDEQUIPS_1_OFFSET UNITYSDK_OFFSET(0x980EE40)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEREQUIREDEQUIPS_OFFSET UNITYSDK_OFFSET(0x98092F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATETRACKTARGET_OFFSET UNITYSDK_OFFSET(0x9809020)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEWAITTRACKEQUIP_OFFSET UNITYSDK_OFFSET(0x9808690)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__39_0_OFFSET UNITYSDK_OFFSET(0x9810140)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__39_1_OFFSET UNITYSDK_OFFSET(0x9810240)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__39_2_OFFSET UNITYSDK_OFFSET(0x98102E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__39_3_OFFSET UNITYSDK_OFFSET(0x98103E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__39_6_OFFSET UNITYSDK_OFFSET(0x9810490)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData_TypeDefinitionIndex = 53049;

	class GridFightEquipTrackData : public ::Sofa::Core::ObservableObject
	{
	public:
		static ::RPG::Client::GridFightEquipTrackData** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::GridFightEquipTrackData**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData_TypeDefinitionIndex)->GetStaticField(0x13DB0);
		}
		::Class_3_2A6530038D51A41A<::RPG::Client::GridFightEquipTrackQuickDressParam*>* QuickDressParams; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightEquipTrackQuickCraftParam*>* HideQuickCraftParams; // 0x20
		::Class_3_2A6530038D51A41A<::RPG::Client::GridFightEquipTrackQuickCraftParam*>* QuickCraftParams; // 0x28
		::Class_3_2A6530038D51A41A<::RPG::Client::GridFightEquipTrack*>* AllTracks; // 0x30
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _UpdateTrackPromise; // 0x38
		::Class_1_38F81D6A5D792EE0<::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipTrackCancelReason>* TracksToCancel; // 0x40
		::RPG::Client::GridFightEquipTrackTargetSelector* TargetSelector; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* HideEquipCountSnapShot; // 0x50
		::Class_1_0812913C2F0E10CD* TrackContext; // 0x58
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightEquipTrackQuickDressParam*>* HideQuickDressParams; // 0x60
		::System::Boolean _IsQuickOPParamsChanged_k__BackingField; // 0x68

		::System::Void _ctor(::Class_1_0812913C2F0E10CD* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0812913C2F0E10CD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CTOR_OFFSET))(this, context);
		}

		static ::RPG::Client::GridFightEquipTrackData* get_Instance()
		{
			return ((::RPG::Client::GridFightEquipTrackData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::GridFightEquipTrackData* value)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_626* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_626*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AddEquipTrack(::RPG::Client::GridFightRole* role, ::System::Collections::Generic::IList_1<::System::UInt32>* trackEquipIDList, ::Enum_3_0A3761FE34514D6C_37 trackSource, ::System::Nullable_1<::System::UInt32> priority)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACK_OFFSET))(this, role, trackEquipIDList, trackSource, priority);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AddEquipTrackLatestPriority(::RPG::Client::GridFightRole* role, ::System::Collections::Generic::IList_1<::System::UInt32>* trackEquipIDList, ::Enum_3_0A3761FE34514D6C_37 trackSource)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACKLATESTPRIORITY_OFFSET))(this, role, trackEquipIDList, trackSource);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ForceSetEquipTrack(::RPG::Client::GridFightRole* role, ::System::Collections::Generic::IList_1<::System::UInt32>* trackEquipIDList, ::Enum_3_0A3761FE34514D6C_37 trackSource, ::System::Nullable_1<::System::UInt32> priority)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_FORCESETEQUIPTRACK_OFFSET))(this, role, trackEquipIDList, trackSource, priority);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ChangeTrackEquipIDs(::RPG::Client::GridFightEquipTrack* track, ::System::Collections::Generic::IList_1<::System::UInt32>* trackEquipIDList)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CHANGETRACKEQUIPIDS_OFFSET))(this, track, trackEquipIDList);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RemoveEquipTrack(::RPG::Client::GridFightEquipTrack* track)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_OFFSET))(this, track);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RemoveEquipTrack_1(::RPG::Client::GridFightRole* role)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_1_OFFSET))(this, role);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ReplaceEquipTrack(::RPG::Client::GridFightEquipTrack* track, ::RPG::Client::GridFightRole* role, ::System::Collections::Generic::IList_1<::System::UInt32>* trackEquipIDs, ::Enum_3_0A3761FE34514D6C_37 trackSource)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REPLACEEQUIPTRACK_OFFSET))(this, track, role, trackEquipIDs, trackSource);
		}

		static ::Class_1_C9DFE5EE7107C629_8* CreateServerTrackUpdateInfo(::System::UInt32 memberID, ::System::Boolean isTrack, ::System::Collections::Generic::IList_1<::System::UInt32>* equipIDs, ::System::Collections::Generic::IList_1<::System::UInt32>* finishedEquipIDs, ::System::UInt32 priority, ::Enum_3_0A3761FE34514D6C_37 source)
		{
			return ((::Class_1_C9DFE5EE7107C629_8*(*)(::System::UInt32, ::System::Boolean, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::Enum_3_0A3761FE34514D6C_37))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CREATESERVERTRACKUPDATEINFO_OFFSET))(memberID, isTrack, equipIDs, finishedEquipIDs, priority, source);
		}

		::System::Void UpdateEquipTrack(::System::Collections::Generic::IEnumerable_1<::Class_1_5CF1DDAFE12F0E87_1*>* trackInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_5CF1DDAFE12F0E87_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATEEQUIPTRACK_OFFSET))(this, trackInfos);
		}

		::System::Void SyncGameRefChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SYNCGAMEREFCHANGE_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipTrack* GetEquipTrackByRoleID(::System::UInt32 roleID)
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKBYROLEID_OFFSET))(this, roleID);
		}

		::System::Boolean HasEquipTrack(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HASEQUIPTRACK_OFFSET))(this, role);
		}

		::Enum_3_0A3761FE34514D6C_37 GetEquipTrackSource(::RPG::Client::GridFightRole* role)
		{
			return ((::Enum_3_0A3761FE34514D6C_37(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_OFFSET))(this, role);
		}

		::Enum_3_0A3761FE34514D6C_37 GetEquipTrackSource_1(::System::UInt32 roleID)
		{
			return ((::Enum_3_0A3761FE34514D6C_37(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_1_OFFSET))(this, roleID);
		}

		::System::Void RemoveGuideTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEGUIDETRACK_OFFSET))(this);
		}

		::System::Boolean IsTrackSame(::RPG::Client::GridFightRole* role, ::Enum_3_0A3761FE34514D6C_37 trackSource, ::System::Collections::Generic::IList_1<::System::UInt32>* trackEquipIDList)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*, ::Enum_3_0A3761FE34514D6C_37, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ISTRACKSAME_OFFSET))(this, role, trackSource, trackEquipIDList);
		}

		::System::Void HideQuickParams(::RPG::Client::GridFightEquipTrackQuickDressParam* dressParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_OFFSET))(this, dressParam);
		}

		::System::Void HideQuickParams_1(::RPG::Client::GridFightEquipTrackQuickCraftParam* craftParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickCraftParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_1_OFFSET))(this, craftParam);
		}

		::System::Void OnBeforeUseConsumableItem(::RPG::Client::GridFightConsumableItemData* itemData, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONBEFOREUSECONSUMABLEITEM_OFFSET))(this, itemData, param);
		}

		::System::Void OnUpdateTrackRsp(::Class_1_FA4F4A67B1C04320_417* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_417*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONUPDATETRACKRSP_OFFSET))(this, rsp);
		}

		::System::UInt32 _GetMaxPriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETMAXPRIORITY_OFFSET))(this);
		}

		::System::UInt32 _GetMinPriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETMINPRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsEquipTrackFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_ISEQUIPTRACKFULL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _ResetAllTracksPriorityAndSend(::System::UInt32 newTrackMemberID, ::System::Collections::Generic::IList_1<::System::UInt32>* newTrackEquipIDList, ::Enum_3_0A3761FE34514D6C_37 newTrackSource, ::System::Nullable_1<::System::UInt32> newTrackPriority)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__RESETALLTRACKSPRIORITYANDSEND_OFFSET))(this, newTrackMemberID, newTrackEquipIDList, newTrackSource, newTrackPriority);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _AddTrackToLastAndSend(::System::UInt32 newTrackMemberID, ::System::Collections::Generic::IList_1<::System::UInt32>* newTrackEquipIDList, ::Enum_3_0A3761FE34514D6C_37 newTrackSource)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__ADDTRACKTOLASTANDSEND_OFFSET))(this, newTrackMemberID, newTrackEquipIDList, newTrackSource);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* _GetAlreadyEquippedEquipIDs(::System::UInt32 memberID, ::System::Collections::Generic::IList_1<::System::UInt32>* trackEquipIDList)
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETALREADYEQUIPPEDEQUIPIDS_OFFSET))(this, memberID, trackEquipIDList);
		}

		::System::Void _UpdateTrackTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATETRACKTARGET_OFFSET))(this);
		}

		::System::Void _UpdateRequiredEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEREQUIREDEQUIPS_OFFSET))(this);
		}

		::System::Void _UpdateRequiredEquips_1(::RPG::Client::GridFightEquipTrack* track, ::System::UInt32 equipID, ::System::Collections::Generic::HashSet_1<::System::UInt32>* assignedUIDs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEREQUIREDEQUIPS_1_OFFSET))(this, track, equipID, assignedUIDs);
		}

		::System::Void _UpdateHideEquipCountSnapShots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEHIDEEQUIPCOUNTSNAPSHOTS_OFFSET))(this);
		}

		::System::Void _CheckUnHideEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CHECKUNHIDEEQUIP_OFFSET))(this);
		}

		::System::Void _UpdateQuickDressAndCraftParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEQUICKDRESSANDCRAFTPARAMS_OFFSET))(this);
		}

		::System::Void _UpdateQuickDressAndCraftParams_1(::RPG::Client::GridFightEquipTrack* track, ::System::UInt32 equipID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& quickCraftCostItemUIDs, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& emptyAssignedUIDs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEQUICKDRESSANDCRAFTPARAMS_1_OFFSET))(this, track, equipID, quickCraftCostItemUIDs, emptyAssignedUIDs);
		}

		::System::Boolean _TryAssignBasicEquip(::System::UInt32 equipID, ::RPG::Client::GridFightEquipTrack* track, ::System::Collections::Generic::HashSet_1<::System::UInt32>* usedUIDs, ::RPG::Client::GridFightEquipItemData*& assignedEquip)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipTrack*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::GridFightEquipItemData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYASSIGNBASICEQUIP_OFFSET))(this, equipID, track, usedUIDs, assignedEquip);
		}

		::System::Boolean _TryAssignNoneBasicEquip(::System::UInt32 equipID, ::RPG::Client::GridFightEquipTrack* track, ::System::Collections::Generic::HashSet_1<::System::UInt32>* usedUIDs, ::RPG::Client::GridFightEquipItemData*& assignedEquip)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipTrack*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::GridFightEquipItemData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYASSIGNNONEBASICEQUIP_OFFSET))(this, equipID, track, usedUIDs, assignedEquip);
		}

		::System::Void _RecordRequiredCostEquip(::RPG::Client::GridFightEquipTrack* track, ::System::UInt32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__RECORDREQUIREDCOSTEQUIP_OFFSET))(this, track, equipID);
		}

		::System::Void _UpdateWaitTrackEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEWAITTRACKEQUIP_OFFSET))(this);
		}

		::System::Void _UpdateCancelTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATECANCELTRACK_OFFSET))(this);
		}

		::System::Boolean get_IsQuickOPParamsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_ISQUICKOPPARAMSCHANGED_OFFSET))(this);
		}

		::System::Void set_IsQuickOPParamsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_ISQUICKOPPARAMSCHANGED_OFFSET))(this, value);
		}

		::System::Boolean __CheckUnHideEquip_b__39_0(::RPG::Client::GridFightEquipTrackQuickDressParam* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__39_0_OFFSET))(this, x);
		}

		::System::Boolean __CheckUnHideEquip_b__39_1(::RPG::Client::GridFightEquipTrackQuickDressParam* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__39_1_OFFSET))(this, x);
		}

		::System::Boolean __CheckUnHideEquip_b__39_2(::RPG::Client::GridFightEquipTrackQuickCraftParam* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickCraftParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__39_2_OFFSET))(this, x);
		}

		::System::Boolean __CheckUnHideEquip_b__39_3(::RPG::Client::GridFightEquipTrackQuickCraftParam* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickCraftParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__39_3_OFFSET))(this, x);
		}

		::System::Boolean __CheckUnHideEquip_b__39_6(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__39_6_OFFSET))(this, itemID);
		}
	};
}
