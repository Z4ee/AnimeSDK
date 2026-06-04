#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_36.h"
#include "unitysdk/RPG/Client/GridFightEquipTrackCancelReason.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_768;
class Class_1_0812913C2F0E10CD;
class Class_1_C9DFE5EE7107C629_9;
class Class_1_D17272E82AE804C2_447;
class Class_1_DB9F32FCA772D309_2;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightEquipTrackQuickCraftParam; }
namespace RPG::Client { class GridFightEquipTrackQuickDressParam; }
namespace RPG::Client { class GridFightEquipTrackTargetSelector; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACKLATESTPRIORITY_OFFSET UNITYSDK_OFFSET(0xBB2CD50)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACK_1_OFFSET UNITYSDK_OFFSET(0xBB15DE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0xBB2B630)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CHANGETRACKEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xBB263D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CREATESERVERTRACKUPDATEINFO_OFFSET UNITYSDK_OFFSET(0xBB25DB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB27DD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_FORCESETEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0xBB2D990)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKBYROLEID_OFFSET UNITYSDK_OFFSET(0xBB2EEE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_1_OFFSET UNITYSDK_OFFSET(0xBB2F230)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_OFFSET UNITYSDK_OFFSET(0xBB2B750)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0xBB15600)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xBB27940)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_ISEQUIPTRACKFULL_OFFSET UNITYSDK_OFFSET(0xBB30080)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_ISQUICKOPPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0xBB32090)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HASEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0xBB2F000)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_1_OFFSET UNITYSDK_OFFSET(0xBB2F540)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_OFFSET UNITYSDK_OFFSET(0xBB2F480)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ISTRACKSAME_OFFSET UNITYSDK_OFFSET(0xBB2DAB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONBEFOREUSECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0xBB2F600)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONUPDATETRACKRSP_OFFSET UNITYSDK_OFFSET(0xBB2FC50)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_1_OFFSET UNITYSDK_OFFSET(0xBB2E080)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0xBB16110)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEGUIDETRACK_OFFSET UNITYSDK_OFFSET(0xBB2EC00)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REPLACEEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0xBB2E320)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBB27F20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xBB27950)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_ISQUICKOPPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0xBB320A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SYNCGAMEREFCHANGE_OFFSET UNITYSDK_OFFSET(0xBB2EA60)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATEEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0xBB2E610)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xBB28D90)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__ADDTRACKTOLASTANDSEND_OFFSET UNITYSDK_OFFSET(0xBB2CE50)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CHECKUNHIDEEQUIP_OFFSET UNITYSDK_OFFSET(0xBB29FD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB27960)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETALREADYEQUIPPEDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xBB2DCC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETMAXPRIORITY_OFFSET UNITYSDK_OFFSET(0xBB2FD10)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETMINPRIORITY_OFFSET UNITYSDK_OFFSET(0xBB2FEC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__RECORDREQUIREDCOSTEQUIP_OFFSET UNITYSDK_OFFSET(0xBB310D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__RESETALLTRACKSPRIORITYANDSEND_OFFSET UNITYSDK_OFFSET(0xBB2B990)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYASSIGNBASICEQUIP_OFFSET UNITYSDK_OFFSET(0xBB30CA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYASSIGNNONEBASICEQUIP_OFFSET UNITYSDK_OFFSET(0xBB309C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYCRAFTEQUIPFORTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xBB319E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATECANCELTRACK_OFFSET UNITYSDK_OFFSET(0xBB290D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEHIDEEQUIPCOUNTSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0xBB2A190)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEQUICKDRESSANDCRAFTPARAMS_1_OFFSET UNITYSDK_OFFSET(0xBB311E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEQUICKDRESSANDCRAFTPARAMS_OFFSET UNITYSDK_OFFSET(0xBB2A8A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEREQUIREDEQUIPS_1_OFFSET UNITYSDK_OFFSET(0xBB30580)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEREQUIREDEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB29AE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATETRACKTARGET_OFFSET UNITYSDK_OFFSET(0xBB29820)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEWAITTRACKEQUIP_OFFSET UNITYSDK_OFFSET(0xBB28E10)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__41_0_OFFSET UNITYSDK_OFFSET(0xBB320B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__41_1_OFFSET UNITYSDK_OFFSET(0xBB32250)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__41_2_OFFSET UNITYSDK_OFFSET(0xBB32340)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__41_3_OFFSET UNITYSDK_OFFSET(0xBB324E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__41_6_OFFSET UNITYSDK_OFFSET(0xBB325C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData_TypeDefinitionIndex = 61079;

	class GridFightEquipTrackData : public ::Sofa::Core::ObservableObject
	{
	public:
		static ::RPG::Client::GridFightEquipTrackData** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::GridFightEquipTrackData**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData_TypeDefinitionIndex)->GetStaticField(0x2BF40);
		}
		::Sofa::Core::ObservableList_1<::RPG::Client::GridFightEquipTrackQuickCraftParam*>* QuickCraftParams; // 0x18
		::Sofa::Core::ObservableList_1<::RPG::Client::GridFightEquipTrack*>* AllTracks; // 0x20
		::Class_1_0812913C2F0E10CD* TrackContext; // 0x28
		::Sofa::Core::ObservableList_1<::RPG::Client::GridFightEquipTrackQuickDressParam*>* QuickDressParams; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightEquipTrackQuickDressParam*>* HideQuickDressParams; // 0x38
		::RPG::Client::GridFightEquipTrackTargetSelector* TargetSelector; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* HideEquipCountSnapShot; // 0x48
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightEquipTrackQuickCraftParam*>* HideQuickCraftParams; // 0x50
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _UpdateTrackPromise; // 0x58
		::Sofa::Core::ObservableDictionary_2<::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipTrackCancelReason>* TracksToCancel; // 0x60
		::System::Boolean _IsQuickOPParamsChanged_k__BackingField; // 0x68

		::System::Void _ctor(::Class_1_0812913C2F0E10CD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0812913C2F0E10CD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightEquipTrackData* get_Instance()
		{
			return ((::RPG::Client::GridFightEquipTrackData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::GridFightEquipTrackData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AddEquipTrack(::RPG::Client::GridFightRole* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::Enum_3_DB663931210BBC27_36 a3, ::System::Nullable_1<::System::UInt32> a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AddEquipTrack_1(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::Enum_3_DB663931210BBC27_36 a3, ::System::Nullable_1<::System::UInt32> a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACK_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AddEquipTrackLatestPriority(::RPG::Client::GridFightRole* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::Enum_3_DB663931210BBC27_36 a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACKLATESTPRIORITY_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ForceSetEquipTrack(::RPG::Client::GridFightRole* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::Enum_3_DB663931210BBC27_36 a3, ::System::Nullable_1<::System::UInt32> a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_FORCESETEQUIPTRACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ChangeTrackEquipIDs(::RPG::Client::GridFightEquipTrack* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CHANGETRACKEQUIPIDS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RemoveEquipTrack(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RemoveEquipTrack_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ReplaceEquipTrack(::RPG::Client::GridFightEquipTrack* a1, ::RPG::Client::GridFightRole* a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::Enum_3_DB663931210BBC27_36 a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REPLACEEQUIPTRACK_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::Class_1_C9DFE5EE7107C629_9* CreateServerTrackUpdateInfo(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::Collections::Generic::IList_1<::System::UInt32>* a4, ::System::UInt32 a5, ::Enum_3_DB663931210BBC27_36 a6)
		{
			return ((::Class_1_C9DFE5EE7107C629_9*(*)(::System::UInt32, ::System::Boolean, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::Enum_3_DB663931210BBC27_36))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CREATESERVERTRACKUPDATEINFO_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void UpdateEquipTrack(::System::Collections::Generic::IEnumerable_1<::Class_1_DB9F32FCA772D309_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_DB9F32FCA772D309_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATEEQUIPTRACK_OFFSET))(this, a1);
		}

		::System::Void SyncGameRefChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SYNCGAMEREFCHANGE_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipTrack* GetEquipTrackByRoleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKBYROLEID_OFFSET))(this, a1);
		}

		::System::Boolean HasEquipTrack(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HASEQUIPTRACK_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_36 GetEquipTrackSource(::RPG::Client::GridFightRole* a1)
		{
			return ((::Enum_3_DB663931210BBC27_36(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_36 GetEquipTrackSource_1(::System::UInt32 a1)
		{
			return ((::Enum_3_DB663931210BBC27_36(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipTrack* GetEquipTrack(::System::UInt32 a1, ::Enum_3_DB663931210BBC27_36 a2)
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID, ::System::UInt32, ::Enum_3_DB663931210BBC27_36))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACK_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveGuideTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEGUIDETRACK_OFFSET))(this);
		}

		::System::Boolean IsTrackSame(::RPG::Client::GridFightRole* a1, ::Enum_3_DB663931210BBC27_36 a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*, ::Enum_3_DB663931210BBC27_36, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ISTRACKSAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HideQuickParams(::RPG::Client::GridFightEquipTrackQuickDressParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_OFFSET))(this, a1);
		}

		::System::Void HideQuickParams_1(::RPG::Client::GridFightEquipTrackQuickCraftParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickCraftParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_1_OFFSET))(this, a1);
		}

		::System::Void OnBeforeUseConsumableItem(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONBEFOREUSECONSUMABLEITEM_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdateTrackRsp(::Class_1_D17272E82AE804C2_447* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_447*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONUPDATETRACKRSP_OFFSET))(this, a1);
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

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _ResetAllTracksPriorityAndSend(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::Enum_3_DB663931210BBC27_36 a3, ::System::Nullable_1<::System::UInt32> a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__RESETALLTRACKSPRIORITYANDSEND_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _AddTrackToLastAndSend(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::Enum_3_DB663931210BBC27_36 a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__ADDTRACKTOLASTANDSEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* _GetAlreadyEquippedEquipIDs(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETALREADYEQUIPPEDEQUIPIDS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateTrackTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATETRACKTARGET_OFFSET))(this);
		}

		::System::Void _UpdateRequiredEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEREQUIREDEQUIPS_OFFSET))(this);
		}

		::System::Void _UpdateRequiredEquips_1(::RPG::Client::GridFightEquipTrack* a1, ::System::UInt32 a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEREQUIREDEQUIPS_1_OFFSET))(this, a1, a2, a3);
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

		::System::Void _UpdateQuickDressAndCraftParams_1(::RPG::Client::GridFightEquipTrack* a1, ::System::UInt32 a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a3, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEQUICKDRESSANDCRAFTPARAMS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _TryCraftEquipForTraitEffect(::RPG::Client::GridFightEquipTrack* a1, ::RPG::Client::GridFightEquipCraftRecipe* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYCRAFTEQUIPFORTRAITEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _TryAssignBasicEquip(::System::UInt32 a1, ::RPG::Client::GridFightEquipTrack* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::RPG::Client::GridFightEquipItemData*& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipTrack*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::GridFightEquipItemData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYASSIGNBASICEQUIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _TryAssignNoneBasicEquip(::System::UInt32 a1, ::RPG::Client::GridFightEquipTrack* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::RPG::Client::GridFightEquipItemData*& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipTrack*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::GridFightEquipItemData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYASSIGNNONEBASICEQUIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RecordRequiredCostEquip(::RPG::Client::GridFightEquipTrack* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__RECORDREQUIREDCOSTEQUIP_OFFSET))(this, a1, a2);
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

		::System::Void set_IsQuickOPParamsChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_ISQUICKOPPARAMSCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean __CheckUnHideEquip_b__41_0(::RPG::Client::GridFightEquipTrackQuickDressParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__41_0_OFFSET))(this, a1);
		}

		::System::Boolean __CheckUnHideEquip_b__41_1(::RPG::Client::GridFightEquipTrackQuickDressParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__41_1_OFFSET))(this, a1);
		}

		::System::Boolean __CheckUnHideEquip_b__41_2(::RPG::Client::GridFightEquipTrackQuickCraftParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickCraftParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__41_2_OFFSET))(this, a1);
		}

		::System::Boolean __CheckUnHideEquip_b__41_3(::RPG::Client::GridFightEquipTrackQuickCraftParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickCraftParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__41_3_OFFSET))(this, a1);
		}

		::System::Boolean __CheckUnHideEquip_b__41_6(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__41_6_OFFSET))(this, a1);
		}
	};
}
