#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F_16;
class Class_1_28D410CCE235575F_17;
class Class_1_7F6A638FBAAEC90B_24;
class Class_1_963E317C37FB5E9A_72;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::RelicSmartSuit { class PinData; }
namespace RPG::Client::RelicSmartSuit { class PinDataKey; }
namespace RPG::Client::RelicSmartSuit { class PinInfo; }
namespace RPG::Client::RelicSmartSuit { class PlanDataManager; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x17372050)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_CREATE_OFFSET UNITYSDK_OFFSET(0x17371F20)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_GETPINDATA_OFFSET UNITYSDK_OFFSET(0x173721E0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_GETPINRELICUIDBYRELICTYPE_OFFSET UNITYSDK_OFFSET(0x17372300)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_GET_PLANDATAMANAGER_OFFSET UNITYSDK_OFFSET(0x17371E60)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REMOVEINVALIDPININFOBYPLANDATA_OFFSET UNITYSDK_OFFSET(0x17373D70)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTDELETEPINRELIC_OFFSET UNITYSDK_OFFSET(0x173725C0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTGETPININFO_OFFSET UNITYSDK_OFFSET(0x173720F0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTUPDATEPINRELIC_OFFSET UNITYSDK_OFFSET(0x173724D0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_1_OFFSET UNITYSDK_OFFSET(0x17372D60)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_2_OFFSET UNITYSDK_OFFSET(0x17372F40)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_3_OFFSET UNITYSDK_OFFSET(0x173734E0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_OFFSET UNITYSDK_OFFSET(0x173726C0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17371FD0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETORCREATEPININFO_OFFSET UNITYSDK_OFFSET(0x173723A0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETPININFO_OFFSET UNITYSDK_OFFSET(0x17372250)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETPLANDATAS_OFFSET UNITYSDK_OFFSET(0x17374510)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__ISPINDATAKEYVALID_OFFSET UNITYSDK_OFFSET(0x17374390)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__ISSETIDSEQUAL_OFFSET UNITYSDK_OFFSET(0x17374920)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__REJECTPROMISE_OFFSET UNITYSDK_OFFSET(0x17372C10)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0x17372D00)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PinInfoRecorder_TypeDefinitionIndex = 71014;

	class PinInfoRecorder : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _GetPinInfoPromise; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicSmartSuit::PinInfo*>* _PinInfoDict; // 0x18
		::RPG::Client::Promises::Promise* _DeletePinRelicPromise; // 0x20
		::RPG::Client::Promises::Promise* _UpdatePinRelicPromise; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::PlanDataManager* get_PlanDataManager()
		{
			return ((::RPG::Client::RelicSmartSuit::PlanDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_GET_PLANDATAMANAGER_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::PinInfoRecorder* Create()
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfoRecorder*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_CREATE_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_CLEAR_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RequestGetPinInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTGETPININFO_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::PinData* GetPinData(::System::UInt32 a1, ::RPG::Client::RelicSmartSuit::PinDataKey* a2)
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_GETPINDATA_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetPinRelicUidByRelicType(::System::UInt32 a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2, ::RPG::GameCore::RelicType a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_GETPINRELICUIDBYRELICTYPE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::RelicSmartSuit::PinInfo* _GetOrCreatePinInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETORCREATEPININFO_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::PinInfo* _GetPinInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETPININFO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* RequestUpdatePinRelic(::System::UInt32 a1, ::RPG::Client::RelicSmartSuit::PinData* a2)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::PinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTUPDATEPINRELIC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise* RequestDeletePinRelic(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::PinDataKey*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::PinDataKey*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTDELETEPINRELIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncPinInfo(::Class_1_28D410CCE235575F_16* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_OFFSET))(this, a1);
		}

		::System::Void SyncPinInfo_1(::Class_1_963E317C37FB5E9A_72* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_72*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_1_OFFSET))(this, a1);
		}

		::System::Void SyncPinInfo_2(::Class_1_28D410CCE235575F_17* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_2_OFFSET))(this, a1);
		}

		::System::Void SyncPinInfo_3(::Class_1_7F6A638FBAAEC90B_24* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_3_OFFSET))(this, a1);
		}

		::System::Void _ResolvePromise(::RPG::Client::Promises::Promise*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__RESOLVEPROMISE_OFFSET))(this, a1);
		}

		::System::Void _RejectPromise(::RPG::Client::Promises::Promise*& a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__REJECTPROMISE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* RemoveInvalidPinInfoByPlanData(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REMOVEINVALIDPININFOBYPLANDATA_OFFSET))(this, a1);
		}

		::System::Boolean _IsPinDataKeyValid(::System::UInt32 a1, ::RPG::Client::RelicSmartSuit::PinDataKey* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__ISPINDATAKEYVALID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* _GetPlanDatas(::System::UInt32 a1, ::RPG::Client::RelicSmartSuit::PlanType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::PlanType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETPLANDATAS_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsSetIDsEqual(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1, ::RPG::Client::RelicSmartSuit::PinDataKey* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__ISSETIDSEQUAL_OFFSET))(this, a1, a2);
		}
	};
}
