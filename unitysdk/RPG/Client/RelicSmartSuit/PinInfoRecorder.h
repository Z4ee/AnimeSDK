#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_6FC4D75D938BC053_14;
class Class_1_7FF19F6206AF6DD7_41;
class Class_1_7FF19F6206AF6DD7_42;
class Class_1_963E317C37FB5E9A_30;
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

#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_CLEAR_OFFSET UNITYSDK_OFFSET(0xAF98D30)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_CREATE_OFFSET UNITYSDK_OFFSET(0xAFAA4D0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_GETPINDATA_OFFSET UNITYSDK_OFFSET(0xAFAA6F0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_GETPINRELICUIDBYRELICTYPE_OFFSET UNITYSDK_OFFSET(0xAFAA840)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_GET_PLANDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xAFAA470)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REMOVEINVALIDPININFOBYPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFAAD20)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTDELETEPINRELIC_OFFSET UNITYSDK_OFFSET(0xAFAAB30)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTGETPININFO_OFFSET UNITYSDK_OFFSET(0xAFAA600)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTUPDATEPINRELIC_OFFSET UNITYSDK_OFFSET(0xAFAAA40)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_1_OFFSET UNITYSDK_OFFSET(0xAF99DD0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_2_OFFSET UNITYSDK_OFFSET(0xAF9A030)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_3_OFFSET UNITYSDK_OFFSET(0xAF9A440)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_OFFSET UNITYSDK_OFFSET(0xAF99950)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0xAFAA580)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETORCREATEPININFO_OFFSET UNITYSDK_OFFSET(0xAFAA8E0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETPININFO_OFFSET UNITYSDK_OFFSET(0xAFAA760)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETPLANDATAS_OFFSET UNITYSDK_OFFSET(0xAFAB360)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__ISPINDATAKEYVALID_OFFSET UNITYSDK_OFFSET(0xAFAB1E0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__ISSETIDSEQUAL_OFFSET UNITYSDK_OFFSET(0xAFAB5C0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__REJECTPROMISE_OFFSET UNITYSDK_OFFSET(0xAFAAC30)
#define RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0xAFAACC0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PinInfoRecorder_TypeDefinitionIndex = 68679;

	class PinInfoRecorder : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _UpdatePinRelicPromise; // 0x10
		::RPG::Client::Promises::Promise* _DeletePinRelicPromise; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicSmartSuit::PinInfo*>* _PinInfoDict; // 0x20
		::RPG::Client::Promises::Promise* _GetPinInfoPromise; // 0x28

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

		::RPG::Client::Promises::Promise* RequestGetPinInfo(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTGETPININFO_OFFSET))(this, avatarID);
		}

		::RPG::Client::RelicSmartSuit::PinData* GetPinData(::System::UInt32 avatarID, ::RPG::Client::RelicSmartSuit::PinDataKey* pinDataKey)
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_GETPINDATA_OFFSET))(this, avatarID, pinDataKey);
		}

		::System::UInt32 GetPinRelicUidByRelicType(::System::UInt32 avatarID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* planData, ::RPG::GameCore::RelicType relicType)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_GETPINRELICUIDBYRELICTYPE_OFFSET))(this, avatarID, planData, relicType);
		}

		::RPG::Client::RelicSmartSuit::PinInfo* _GetOrCreatePinInfo(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETORCREATEPININFO_OFFSET))(this, avatarID);
		}

		::RPG::Client::RelicSmartSuit::PinInfo* _GetPinInfo(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETPININFO_OFFSET))(this, avatarID);
		}

		::RPG::Client::Promises::Promise* RequestUpdatePinRelic(::System::UInt32 avatarID, ::RPG::Client::RelicSmartSuit::PinData* updatePinData)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::PinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTUPDATEPINRELIC_OFFSET))(this, avatarID, updatePinData);
		}

		::RPG::Client::Promises::Promise* RequestDeletePinRelic(::System::UInt32 avatarID, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::PinDataKey*>* deletePinDataKeys, ::System::Boolean isDeleteByUnPin)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::PinDataKey*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REQUESTDELETEPINRELIC_OFFSET))(this, avatarID, deletePinDataKeys, isDeleteByUnPin);
		}

		::System::Void SyncPinInfo(::Class_1_7FF19F6206AF6DD7_41* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_OFFSET))(this, rsp);
		}

		::System::Void SyncPinInfo_1(::Class_1_963E317C37FB5E9A_30* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_1_OFFSET))(this, rsp);
		}

		::System::Void SyncPinInfo_2(::Class_1_7FF19F6206AF6DD7_42* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_2_OFFSET))(this, rsp);
		}

		::System::Void SyncPinInfo_3(::Class_1_6FC4D75D938BC053_14* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_SYNCPININFO_3_OFFSET))(this, ntf);
		}

		::System::Void _ResolvePromise(::RPG::Client::Promises::Promise*& promise)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__RESOLVEPROMISE_OFFSET))(this, promise);
		}

		::System::Void _RejectPromise(::RPG::Client::Promises::Promise*& promise, ::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__REJECTPROMISE_OFFSET))(this, promise, exception);
		}

		::RPG::Client::Promises::IPromise* RemoveInvalidPinInfoByPlanData(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER_REMOVEINVALIDPININFOBYPLANDATA_OFFSET))(this, avatarRealID);
		}

		::System::Boolean _IsPinDataKeyValid(::System::UInt32 avatarRealID, ::RPG::Client::RelicSmartSuit::PinDataKey* pinDataKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__ISPINDATAKEYVALID_OFFSET))(this, avatarRealID, pinDataKey);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* _GetPlanDatas(::System::UInt32 avatarRealID, ::RPG::Client::RelicSmartSuit::PlanType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::PlanType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__GETPLANDATAS_OFFSET))(this, avatarRealID, type);
		}

		::System::Boolean _IsSetIDsEqual(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* planData, ::RPG::Client::RelicSmartSuit::PinDataKey* pinDataKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFORECORDER__ISSETIDSEQUAL_OFFSET))(this, planData, pinDataKey);
		}
	};
}
