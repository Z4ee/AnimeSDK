#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/FailedType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_0_16E4307DCC419505_479;
class Class_0_16E4307DCC419505_480;
class Class_1_280047DF9F661B14;
class Class_1_B6A8A062463EFFDD;
class Class_2_2690241A4D35989E;
class Class_2_74B3C7F8777664B7;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3EA71EBCB5A3B1BA_DOFAILED_OFFSET UNITYSDK_OFFSET(0x8D59C30)
#define CLASS_1_3EA71EBCB5A3B1BA_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x8D59AC0)
#define CLASS_1_3EA71EBCB5A3B1BA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8D596F0)
#define CLASS_1_3EA71EBCB5A3B1BA_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x8D58A20)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x8D58AC0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x8D58B10)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x8D58B30)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8D58A90)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x8D58B90)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x8D58BB0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x8D58C10)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x8D58BD0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x8D58BF0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x8D58B50)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x8D58B70)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x8D58AB0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x8D58AF0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x8D58AD0)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_444BCE9903C89D4B_OFFSET UNITYSDK_OFFSET(0x8D58E10)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_49DEAC2611FF8B94_OFFSET UNITYSDK_OFFSET(0x8D59260)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_64A6F0B2956D08FB_OFFSET UNITYSDK_OFFSET(0x8D59F50)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_896860CB81DA7980_OFFSET UNITYSDK_OFFSET(0x8D59E20)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_C6B5CF0B6FDA31AF_OFFSET UNITYSDK_OFFSET(0x8D596A0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x8D58B20)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x8D58B40)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ID_OFFSET UNITYSDK_OFFSET(0x8D58AA0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x8D58BA0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x8D58BC0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x8D58C20)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x8D58BE0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x8D58C00)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x8D58B60)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x8D58B80)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x8D58B00)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x8D58AE0)
#define CLASS_1_3EA71EBCB5A3B1BA_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x8D59DC0)
#define CLASS_1_3EA71EBCB5A3B1BA__CTOR_OFFSET UNITYSDK_OFFSET(0x8D58C30)

inline static constexpr unsigned int Class_1_3EA71EBCB5A3B1BA_TypeDefinitionIndex = 48189;

class Class_1_3EA71EBCB5A3B1BA : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_19; // 0x10
	::System::String* Field_1_9; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x20
	::System::String* Field_1_12; // 0x28
	::Class_1_B6A8A062463EFFDD* Field_1_4; // 0x30
	::System::String* Field_1_13; // 0x38
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x40
	::Class_2_74B3C7F8777664B7* Field_1_14; // 0x48
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x50
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x58
	::System::String* Field_1_6; // 0x60
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* _OnSucceed_k__BackingField; // 0x68
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnItemFailed_k__BackingField; // 0x70
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnFailed_k__BackingField; // 0x78
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* _OnStarting_k__BackingField; // 0x80
	::Class_1_280047DF9F661B14* Field_1_2; // 0x88
	::RPG::Client::TextID Field_1_8; // 0x90
	::RPG::Client::TextID Field_1_5; // 0xA0
	::System::Int32 _FailureCount_k__BackingField; // 0xB0
	::RPG::Client::NotifyType Field_1_10; // 0xB4
	::RPG::Client::FailedType Field_1_11; // 0xB8
	::System::Int32 _FinishCount_k__BackingField; // 0xBC
	::RPG::Client::ProgressID _ID_k__BackingField; // 0xC0
	::System::Int32 _TotalCount_k__BackingField; // 0xC4
	::System::Int32 _SuccessCount_k__BackingField; // 0xC8
	::RPG::Client::NotifyType Field_1_7; // 0xCC
	::System::Int32 Field_1_3; // 0xD0

	::System::Void _ctor(::RPG::Client::ProgressID a1, ::Class_1_B6A8A062463EFFDD* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_B6A8A062463EFFDD*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::RPG::Client::ProgressID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ID_OFFSET))(this, value);
	}

	::Class_1_B6A8A062463EFFDD* get_RootQueue()
	{
		return ((::Class_1_B6A8A062463EFFDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ROOTQUEUE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_479* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_479*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_TOTALCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Void set_SuccessCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_SUCCESSCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Void set_FailureCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_FAILURECOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_FINISHCOUNT_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONFAILED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONFINISH_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMFAILED_OFFSET))(this, value);
	}

	::Class_1_3EA71EBCB5A3B1BA* Method_1_444BCE9903C89D4B(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::IList_1<::System::String*>* a3)
	{
		return ((::Class_1_3EA71EBCB5A3B1BA*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_444BCE9903C89D4B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_49DEAC2611FF8B94(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::IList_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_49DEAC2611FF8B94_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_3EA71EBCB5A3B1BA* Method_1_C6B5CF0B6FDA31AF(::System::Action_1<::System::String*>* a1)
	{
		return ((::Class_1_3EA71EBCB5A3B1BA*(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_C6B5CF0B6FDA31AF_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_EXECUTE_OFFSET))(this);
	}

	::System::Void UpdateProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_UPDATEPROGRESS_OFFSET))(this);
	}

	::System::Void Method_1_896860CB81DA7980(::RPG::Client::NotifyType a1, ::System::String* a2, ::RPG::Client::TextID a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_896860CB81DA7980_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_64A6F0B2956D08FB(::Class_0_16E4307DCC419505_480* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_480*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_64A6F0B2956D08FB_OFFSET))(this, a1, a2);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_DOSUCCEED_OFFSET))(this);
	}

	::System::Void DoFailed(::Class_2_2690241A4D35989E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_DOFAILED_OFFSET))(this, a1);
	}
};
