#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ASYNCCHECKITEMBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB336AA0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_DOCHECKWITHPROMISE_OFFSET UNITYSDK_OFFSET(0xB336750)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_DOCHECK_OFFSET UNITYSDK_OFFSET(0xB336700)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB3363C0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0xB336410)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_GET_ISTICKABLE_OFFSET UNITYSDK_OFFSET(0xB3363B0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xB336980)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB3369D0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB336460)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB336510)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB336AF0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB3365C0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xB336600)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__ONDISPOSEIMPL_OFFSET UNITYSDK_OFFSET(0xB3366C0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xB336640)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB3364C0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB336570)

namespace RPG::Client
{
	inline static constexpr unsigned int AsyncCheckItemBase_TypeDefinitionIndex = 55967;

	class AsyncCheckItemBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsTickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_GET_ISTICKABLE_OFFSET))(this);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_FILLRSPCMDIDSTO_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_IConditionCheckItem_SubscribeCustomEvent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_SUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void _SubscribeCustomEvent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE__SUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_IConditionCheckItem_UnsubscribeCustomEvent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void _UnsubscribeCustomEvent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE__UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Boolean _IsDataReadyImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE__ISDATAREADYIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareDataImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE__PREPAREDATAIMPL_OFFSET))(this);
		}

		::System::Void _OnDisposeImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE__ONDISPOSEIMPL_OFFSET))(this);
		}

		::System::Boolean DoCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_DOCHECK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* DoCheckWithPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_DOCHECKWITHPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_PREPAREDATA_OFFSET))(this);
		}

		::System::Boolean IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_ISDATAREADY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_DISPOSE_OFFSET))(this);
		}
	};
}
