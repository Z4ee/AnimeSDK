#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_40;
class Class_1_963E317C37FB5E9A_28;
class Class_1_963E317C37FB5E9A_29;
class Class_1_D17272E82AE804C2_751;
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::RelicSmartSuit { class PinInfoRecorder; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xAF98B80)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_CREATE_OFFSET UNITYSDK_OFFSET(0xAFABBA0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_GET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0xAFABB40)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTADDPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFAC520)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTDELETEPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFAC770)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTRELICSMARTSUITPLANDATAS_OFFSET UNITYSDK_OFFSET(0xAFABEA0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTUPDATEPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFAC630)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_1_OFFSET UNITYSDK_OFFSET(0xAF992A0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_2_OFFSET UNITYSDK_OFFSET(0xAF99510)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_3_OFFSET UNITYSDK_OFFSET(0xAF99780)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_OFFSET UNITYSDK_OFFSET(0xAF99060)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETCUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFABA60)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETHIGHLYUSEDPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFAB980)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETSYSTEMPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFAB8A0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__ADDCUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFAD650)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAFABD40)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REJECTPROMISE_OFFSET UNITYSDK_OFFSET(0xAFAD120)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REMOVECUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFAD990)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0xAFAD460)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATEHIGHLYUSEDPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFACB50)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATESYSTEMPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFAC860)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PlanDataManager_TypeDefinitionIndex = 68680;

	class PlanDataManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* _SystemPlanDataDict; // 0x10
		::RPG::Client::Promises::Promise* _GetPlanDataPromise; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*>* _HighlyUsedPlanDataDict; // 0x20
		::RPG::Client::Promises::Promise* _AddPlanDataPromise; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*>* _CustomPlanDataDict; // 0x30
		::RPG::Client::Promises::Promise* _DeletePlanDataPromise; // 0x38
		::RPG::Client::Promises::Promise* _UpdatePlanDataPromise; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::PinInfoRecorder* get_PinInfoRecorder()
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfoRecorder*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_GET_PININFORECORDER_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::PlanDataManager* Create()
		{
			return ((::RPG::Client::RelicSmartSuit::PlanDataManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_CREATE_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_CLEAR_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RequestRelicSmartSuitPlanDatas(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTRELICSMARTSUITPLANDATAS_OFFSET))(this, avatarRealID);
		}

		::RPG::Client::Promises::Promise* RequestAddPlanData(::System::UInt32 avatarID, ::System::UInt32 outerSetID1, ::System::UInt32 outerSetID2, ::System::UInt32 innerSetID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTADDPLANDATA_OFFSET))(this, avatarID, outerSetID1, outerSetID2, innerSetID);
		}

		::RPG::Client::Promises::Promise* RequestUpdatePlanData(::System::UInt32 uniqueID, ::System::UInt32 avatarID, ::System::UInt32 outerSetID1, ::System::UInt32 outerSetID2, ::System::UInt32 innerSetID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTUPDATEPLANDATA_OFFSET))(this, uniqueID, avatarID, outerSetID1, outerSetID2, innerSetID);
		}

		::RPG::Client::Promises::Promise* RequestDeletePlanData(::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTDELETEPLANDATA_OFFSET))(this, uniqueID);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* TryGetSystemPlanData(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETSYSTEMPLANDATA_OFFSET))(this, avatarID);
		}

		::System::Void _UpdateSystemPlanData(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATESYSTEMPLANDATA_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* TryGetHighlyUsedPlanData(::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETHIGHLYUSEDPLANDATA_OFFSET))(this, avatarID);
		}

		::System::Void _UpdateHighlyUsedPlanData(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATEHIGHLYUSEDPLANDATA_OFFSET))(this, avatarID);
		}

		::System::Void SyncPlanData(::Class_1_7FF19F6206AF6DD7_40* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_40*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_OFFSET))(this, rsp);
		}

		::System::Void SyncPlanData_1(::Class_1_963E317C37FB5E9A_28* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_1_OFFSET))(this, rsp);
		}

		::System::Void SyncPlanData_2(::Class_1_963E317C37FB5E9A_29* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_2_OFFSET))(this, rsp);
		}

		::System::Void SyncPlanData_3(::Class_1_D17272E82AE804C2_751* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_751*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_3_OFFSET))(this, rsp);
		}

		::System::Void _ResolvePromise(::RPG::Client::Promises::Promise*& promise)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__RESOLVEPROMISE_OFFSET))(this, promise);
		}

		::System::Void _RejectPromise(::RPG::Client::Promises::Promise*& promise, ::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REJECTPROMISE_OFFSET))(this, promise, exception);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* TryGetCustomPlanData(::System::UInt32 avatarRealID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETCUSTOMPLANDATA_OFFSET))(this, avatarRealID);
		}

		::System::Void _AddCustomPlanData(::System::UInt32 avatarRealID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* planData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__ADDCUSTOMPLANDATA_OFFSET))(this, avatarRealID, planData);
		}

		::System::Void _RemoveCustomPlanData(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REMOVECUSTOMPLANDATA_OFFSET))(this, uniqueID);
		}
	};
}
