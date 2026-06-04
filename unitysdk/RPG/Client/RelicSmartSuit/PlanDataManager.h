#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_45;
class Class_1_963E317C37FB5E9A_61;
class Class_1_963E317C37FB5E9A_62;
class Class_1_D17272E82AE804C2_787;
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::RelicSmartSuit { class PinInfoRecorder; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xC6E06A0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_CREATE_OFFSET UNITYSDK_OFFSET(0xC6DEA40)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_GET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0xC6F3730)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTADDPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F3F60)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTDELETEPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F41B0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTRELICSMARTSUITPLANDATAS_OFFSET UNITYSDK_OFFSET(0xC6F38F0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTUPDATEPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F4070)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_1_OFFSET UNITYSDK_OFFSET(0xC6E0B70)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_2_OFFSET UNITYSDK_OFFSET(0xC6E0DF0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_3_OFFSET UNITYSDK_OFFSET(0xC6E1070)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6E0930)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETCUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F3680)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETHIGHLYUSEDPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F35D0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETSYSTEMPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F3520)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__ADDCUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F5040)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC6F3790)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REJECTPROMISE_OFFSET UNITYSDK_OFFSET(0xC6F4AF0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REMOVECUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F5490)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0xC6F4E80)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATEHIGHLYUSEDPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F4560)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATESYSTEMPLANDATA_OFFSET UNITYSDK_OFFSET(0xC6F42A0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PlanDataManager_TypeDefinitionIndex = 69492;

	class PlanDataManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* _SystemPlanDataDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*>* _CustomPlanDataDict; // 0x18
		::RPG::Client::Promises::Promise* _AddPlanDataPromise; // 0x20
		::RPG::Client::Promises::Promise* _UpdatePlanDataPromise; // 0x28
		::RPG::Client::Promises::Promise* _GetPlanDataPromise; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*>* _HighlyUsedPlanDataDict; // 0x38
		::RPG::Client::Promises::Promise* _DeletePlanDataPromise; // 0x40

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

		::RPG::Client::Promises::Promise* RequestRelicSmartSuitPlanDatas(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTRELICSMARTSUITPLANDATAS_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* RequestAddPlanData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTADDPLANDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::Promise* RequestUpdatePlanData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTUPDATEPLANDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::Promises::Promise* RequestDeletePlanData(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTDELETEPLANDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* TryGetSystemPlanData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETSYSTEMPLANDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateSystemPlanData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATESYSTEMPLANDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* TryGetHighlyUsedPlanData(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETHIGHLYUSEDPLANDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateHighlyUsedPlanData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATEHIGHLYUSEDPLANDATA_OFFSET))(this, a1);
		}

		::System::Void SyncPlanData(::Class_1_7FF19F6206AF6DD7_45* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_OFFSET))(this, a1);
		}

		::System::Void SyncPlanData_1(::Class_1_963E317C37FB5E9A_61* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_61*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_1_OFFSET))(this, a1);
		}

		::System::Void SyncPlanData_2(::Class_1_963E317C37FB5E9A_62* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_2_OFFSET))(this, a1);
		}

		::System::Void SyncPlanData_3(::Class_1_D17272E82AE804C2_787* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_787*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_3_OFFSET))(this, a1);
		}

		::System::Void _ResolvePromise(::RPG::Client::Promises::Promise*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__RESOLVEPROMISE_OFFSET))(this, a1);
		}

		::System::Void _RejectPromise(::RPG::Client::Promises::Promise*& a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REJECTPROMISE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* TryGetCustomPlanData(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETCUSTOMPLANDATA_OFFSET))(this, a1);
		}

		::System::Void _AddCustomPlanData(::System::UInt32 a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__ADDCUSTOMPLANDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveCustomPlanData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REMOVECUSTOMPLANDATA_OFFSET))(this, a1);
		}
	};
}
