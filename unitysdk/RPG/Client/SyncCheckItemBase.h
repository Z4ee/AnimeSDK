#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_SYNCCHECKITEMBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB265D40)
#define RPG_CLIENT_SYNCCHECKITEMBASE_DOCHECKWITHPROMISE_OFFSET UNITYSDK_OFFSET(0xB265BA0)
#define RPG_CLIENT_SYNCCHECKITEMBASE_DOCHECK_OFFSET UNITYSDK_OFFSET(0xB265B50)
#define RPG_CLIENT_SYNCCHECKITEMBASE_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB2658D0)
#define RPG_CLIENT_SYNCCHECKITEMBASE_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0xB265920)
#define RPG_CLIENT_SYNCCHECKITEMBASE_GET_ISTICKABLE_OFFSET UNITYSDK_OFFSET(0xB2658C0)
#define RPG_CLIENT_SYNCCHECKITEMBASE_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xB265D00)
#define RPG_CLIENT_SYNCCHECKITEMBASE_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB265C80)
#define RPG_CLIENT_SYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB265970)
#define RPG_CLIENT_SYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB265A20)
#define RPG_CLIENT_SYNCCHECKITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB265D90)
#define RPG_CLIENT_SYNCCHECKITEMBASE__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB265AD0)
#define RPG_CLIENT_SYNCCHECKITEMBASE__ONDISPOSEIMPL_OFFSET UNITYSDK_OFFSET(0xB265B10)
#define RPG_CLIENT_SYNCCHECKITEMBASE__SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB2659D0)
#define RPG_CLIENT_SYNCCHECKITEMBASE__UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB265A80)

namespace RPG::Client
{
	inline static constexpr unsigned int SyncCheckItemBase_TypeDefinitionIndex = 55263;

	class SyncCheckItemBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsTickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE_GET_ISTICKABLE_OFFSET))(this);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE_FILLNOTIFYTYPESTO_OFFSET))(this, buffer);
		}

		::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE_FILLRSPCMDIDSTO_OFFSET))(this, buffer);
		}

		::System::Void RPG_Client_IConditionCheckItem_SubscribeCustomEvent(::System::Action* observer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_SUBSCRIBECUSTOMEVENT_OFFSET))(this, observer);
		}

		::System::Void _SubscribeCustomEvent(::System::Action* observer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE__SUBSCRIBECUSTOMEVENT_OFFSET))(this, observer);
		}

		::System::Void RPG_Client_IConditionCheckItem_UnsubscribeCustomEvent(::System::Action* observer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, observer);
		}

		::System::Void _UnsubscribeCustomEvent(::System::Action* observer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE__UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, observer);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Void _OnDisposeImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE__ONDISPOSEIMPL_OFFSET))(this);
		}

		::System::Boolean DoCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE_DOCHECK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* DoCheckWithPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE_DOCHECKWITHPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE_PREPAREDATA_OFFSET))(this);
		}

		::System::Boolean IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE_ISDATAREADY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCCHECKITEMBASE_DISPOSE_OFFSET))(this);
		}
	};
}
