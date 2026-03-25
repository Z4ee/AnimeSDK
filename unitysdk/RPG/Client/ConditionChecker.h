#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_491;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_1_OFFSET UNITYSDK_OFFSET(0x941A110)
#define RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_OFFSET UNITYSDK_OFFSET(0x941A060)
#define RPG_CLIENT_CONDITIONCHECKER_COLLECTREQUIREDMISSION_OFFSET UNITYSDK_OFFSET(0x94198D0)
#define RPG_CLIENT_CONDITIONCHECKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9419FE0)
#define RPG_CLIENT_CONDITIONCHECKER_DOASYNCCHECK_OFFSET UNITYSDK_OFFSET(0x9419190)
#define RPG_CLIENT_CONDITIONCHECKER_DOCHECKIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x941A180)
#define RPG_CLIENT_CONDITIONCHECKER_DOCHECKWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x941A1D0)
#define RPG_CLIENT_CONDITIONCHECKER_DOSYNCCHECK_OFFSET UNITYSDK_OFFSET(0x9418E40)
#define RPG_CLIENT_CONDITIONCHECKER_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x9418B80)
#define RPG_CLIENT_CONDITIONCHECKER_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0x9418CE0)
#define RPG_CLIENT_CONDITIONCHECKER_GETCHECKITEMLIST_OFFSET UNITYSDK_OFFSET(0x9419D40)
#define RPG_CLIENT_CONDITIONCHECKER_GET_ISTICKABLE_OFFSET UNITYSDK_OFFSET(0x9418A30)
#define RPG_CLIENT_CONDITIONCHECKER_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9418FA0)
#define RPG_CLIENT_CONDITIONCHECKER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9419CE0)
#define RPG_CLIENT_CONDITIONCHECKER_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x94193A0)
#define RPG_CLIENT_CONDITIONCHECKER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9419D80)
#define RPG_CLIENT_CONDITIONCHECKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x941A2F0)
#define RPG_CLIENT_CONDITIONCHECKER__CLEARITEMPREPAREPROMISE_OFFSET UNITYSDK_OFFSET(0x9419830)
#define RPG_CLIENT_CONDITIONCHECKER__COLLECTITEMPREPAREPROMISE_OFFSET UNITYSDK_OFFSET(0x94195A0)
#define RPG_CLIENT_CONDITIONCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x9419FA0)
#define RPG_CLIENT_CONDITIONCHECKER___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x941A330)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionChecker_TypeDefinitionIndex = 48515;

	class ConditionChecker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>** StaticGet__s_ItemPreparePromises()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(ConditionChecker_TypeDefinitionIndex)->GetStaticField(0x41720);
		}
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_491*>* _CheckItemList; // 0x10

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

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_FILLNOTIFYTYPESTO_OFFSET))(this, buffer);
		}

		::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_FILLRSPCMDIDSTO_OFFSET))(this, buffer);
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

		::System::Void CollectRequiredMission(::System::Collections::Generic::HashSet_1<::System::UInt32>*& mainMissionIDs, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& subMissionIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_COLLECTREQUIREDMISSION_OFFSET))(this, mainMissionIDs, subMissionIDs);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_ISEMPTY_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_491*>* GetCheckItemList()
		{
			return ((::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_491*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_GETCHECKITEMLIST_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddCheckItem(::RPG::GameCore::ConditionType conditionType, ::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_OFFSET))(this, conditionType, param);
		}

		::System::Void AddCheckItem_1(::Class_0_16E4307DCC419505_491* checkItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_491*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_1_OFFSET))(this, checkItem);
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
