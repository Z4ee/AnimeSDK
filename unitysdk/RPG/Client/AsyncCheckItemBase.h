#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ASYNCCHECKITEMBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D46890)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_DOCHECKWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x9D46550)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_DOCHECK_OFFSET UNITYSDK_OFFSET(0x9D46500)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x9D461C0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0x9D46210)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_GET_ISTICKABLE_OFFSET UNITYSDK_OFFSET(0x9D461B0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9D46770)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x9D467C0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x9D46260)
#define RPG_CLIENT_ASYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x9D46310)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D468E0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x9D463C0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x9D46400)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__ONDISPOSEIMPL_OFFSET UNITYSDK_OFFSET(0x9D464C0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x9D46440)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x9D462C0)
#define RPG_CLIENT_ASYNCCHECKITEMBASE__UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x9D46370)

namespace RPG::Client
{
	inline static constexpr unsigned int AsyncCheckItemBase_TypeDefinitionIndex = 55233;

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

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_FILLNOTIFYTYPESTO_OFFSET))(this, buffer);
		}

		::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_FILLRSPCMDIDSTO_OFFSET))(this, buffer);
		}

		::System::Void RPG_Client_IConditionCheckItem_SubscribeCustomEvent(::System::Action* observer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_SUBSCRIBECUSTOMEVENT_OFFSET))(this, observer);
		}

		::System::Void _SubscribeCustomEvent(::System::Action* observer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE__SUBSCRIBECUSTOMEVENT_OFFSET))(this, observer);
		}

		::System::Void RPG_Client_IConditionCheckItem_UnsubscribeCustomEvent(::System::Action* observer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE_RPG_CLIENT_ICONDITIONCHECKITEM_UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, observer);
		}

		::System::Void _UnsubscribeCustomEvent(::System::Action* observer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE__UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, observer);
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
