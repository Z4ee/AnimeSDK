#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_592;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_1_OFFSET UNITYSDK_OFFSET(0xB7073D0)
#define RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_OFFSET UNITYSDK_OFFSET(0xB7072C0)
#define RPG_CLIENT_CONDITIONCHECKER_COLLECTREQUIREDMISSION_OFFSET UNITYSDK_OFFSET(0xB706AD0)
#define RPG_CLIENT_CONDITIONCHECKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB707220)
#define RPG_CLIENT_CONDITIONCHECKER_DOASYNCCHECK_OFFSET UNITYSDK_OFFSET(0xB7062D0)
#define RPG_CLIENT_CONDITIONCHECKER_DOCHECKIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xB707480)
#define RPG_CLIENT_CONDITIONCHECKER_DOCHECKWITHPROMISE_OFFSET UNITYSDK_OFFSET(0xB7074D0)
#define RPG_CLIENT_CONDITIONCHECKER_DOSYNCCHECK_OFFSET UNITYSDK_OFFSET(0xB705F60)
#define RPG_CLIENT_CONDITIONCHECKER_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB705920)
#define RPG_CLIENT_CONDITIONCHECKER_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0xB705AB0)
#define RPG_CLIENT_CONDITIONCHECKER_GETCHECKITEMLIST_OFFSET UNITYSDK_OFFSET(0xB706F70)
#define RPG_CLIENT_CONDITIONCHECKER_GET_ISTICKABLE_OFFSET UNITYSDK_OFFSET(0xB7057B0)
#define RPG_CLIENT_CONDITIONCHECKER_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xB7060E0)
#define RPG_CLIENT_CONDITIONCHECKER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB706F10)
#define RPG_CLIENT_CONDITIONCHECKER_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB7064F0)
#define RPG_CLIENT_CONDITIONCHECKER_SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB705C40)
#define RPG_CLIENT_CONDITIONCHECKER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB706FB0)
#define RPG_CLIENT_CONDITIONCHECKER_UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB705DD0)
#define RPG_CLIENT_CONDITIONCHECKER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB707600)
#define RPG_CLIENT_CONDITIONCHECKER__CLEARITEMPREPAREPROMISE_OFFSET UNITYSDK_OFFSET(0xB706A30)
#define RPG_CLIENT_CONDITIONCHECKER__COLLECTITEMPREPAREPROMISE_OFFSET UNITYSDK_OFFSET(0xB706750)
#define RPG_CLIENT_CONDITIONCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0xB7071E0)
#define RPG_CLIENT_CONDITIONCHECKER___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB707640)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionChecker_TypeDefinitionIndex = 55998;

	class ConditionChecker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>** StaticGet__s_ItemPreparePromises()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(ConditionChecker_TypeDefinitionIndex)->GetStaticField(0x663F0);
		}
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_592*>* _CheckItemList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsTickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_GET_ISTICKABLE_OFFSET))(this);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_FILLRSPCMDIDSTO_OFFSET))(this, a1);
		}

		::System::Void SubscribeCustomEvent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_SUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void UnsubscribeCustomEvent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Boolean DoSyncCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_DOSYNCCHECK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* DoAsyncCheck()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_DOASYNCCHECK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_PREPAREDATA_OFFSET))(this);
		}

		::System::Boolean IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_ISDATAREADY_OFFSET))(this);
		}

		::System::Void CollectRequiredMission(::System::Collections::Generic::HashSet_1<::System::UInt32>*& a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_COLLECTREQUIREDMISSION_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_ISEMPTY_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_592*>* GetCheckItemList()
		{
			return ((::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_592*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_GETCHECKITEMLIST_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddCheckItem(::RPG::GameCore::ConditionType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_OFFSET))(this, a1, a2);
		}

		::System::Void AddCheckItem_1(::Class_0_16E4307DCC419505_592* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_592*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_1_OFFSET))(this, a1);
		}

		::System::Boolean DoCheckImmediate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_DOCHECKIMMEDIATE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::Boolean>*>* DoCheckWithPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_DOCHECKWITHPROMISE_OFFSET))(this);
		}

		::System::Void _CollectItemPreparePromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER__COLLECTITEMPREPAREPROMISE_OFFSET))(this);
		}

		::System::Void _ClearItemPreparePromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER__CLEARITEMPREPAREPROMISE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
