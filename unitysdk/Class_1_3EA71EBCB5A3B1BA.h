#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/FailedType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_0_16E4307DCC419505_615;
class Class_0_16E4307DCC419505_616;
class Class_1_630CB84C93B59414;
class Class_1_C6B3B57B6E91674E;
class Class_2_570AC78C01FF8379;
class Class_2_BF47C01E9CFEA39C;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3EA71EBCB5A3B1BA_DOFAILED_OFFSET UNITYSDK_OFFSET(0x1659E660)
#define CLASS_1_3EA71EBCB5A3B1BA_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x1659E4E0)
#define CLASS_1_3EA71EBCB5A3B1BA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1659E100)
#define CLASS_1_3EA71EBCB5A3B1BA_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1659D0B0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x1659D150)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x1659D1A0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1659D1C0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1659D120)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x1659D220)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1659D240)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x1659D2A0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x1659D260)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x1659D280)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x1659D1E0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x1659D200)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x1659D140)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1659D180)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1659D160)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_444BCE9903C89D4B_OFFSET UNITYSDK_OFFSET(0x1659D4A0)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_896860CB81DA7980_OFFSET UNITYSDK_OFFSET(0x1659E860)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_AF9860E3D88BA32A_OFFSET UNITYSDK_OFFSET(0x1659DA70)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_C6B5CF0B6FDA31AF_OFFSET UNITYSDK_OFFSET(0x1659E0B0)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_C8A4E3689200F6D8_OFFSET UNITYSDK_OFFSET(0x1659E990)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x1659D1B0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1659D1D0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1659D130)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x1659D230)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1659D250)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x1659D2B0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x1659D270)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x1659D290)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x1659D1F0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x1659D210)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1659D190)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1659D170)
#define CLASS_1_3EA71EBCB5A3B1BA_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1659E800)
#define CLASS_1_3EA71EBCB5A3B1BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1659D2C0)

inline static constexpr unsigned int Class_1_3EA71EBCB5A3B1BA_TypeDefinitionIndex = 56905;

class Class_1_3EA71EBCB5A3B1BA : public ::System::Object
{
public:
	::Class_1_C6B3B57B6E91674E* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x20
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnItemFailed_k__BackingField; // 0x28
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnFailed_k__BackingField; // 0x30
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x38
	::System::Action_1<::System::String*>* Field_1_6; // 0x40
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* _OnSucceed_k__BackingField; // 0x48
	::System::String* Field_1_8; // 0x50
	::System::String* Field_1_9; // 0x58
	::System::String* Field_1_10; // 0x60
	::Class_1_630CB84C93B59414* Field_1_11; // 0x68
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* _OnStarting_k__BackingField; // 0x70
	::System::String* Field_1_13; // 0x78
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x80
	::Class_2_570AC78C01FF8379* Field_1_15; // 0x88
	::System::Int32 _FinishCount_k__BackingField; // 0x90
	::RPG::Client::FailedType Field_1_17; // 0x94
	::RPG::Client::NotifyType Field_1_18; // 0x98
	::RPG::Client::TextID Field_1_19; // 0xA0
	::RPG::Client::TextID Field_1_20; // 0xB0
	::System::Int32 Field_1_21; // 0xC0
	::RPG::Client::ProgressID _ID_k__BackingField; // 0xC4
	::RPG::Client::NotifyType Field_1_23; // 0xC8
	::System::Int32 _TotalCount_k__BackingField; // 0xCC
	::System::Int32 _SuccessCount_k__BackingField; // 0xD0
	::System::Int32 _FailureCount_k__BackingField; // 0xD4

	::System::Void _ctor(::RPG::Client::ProgressID a1, ::Class_1_C6B3B57B6E91674E* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_C6B3B57B6E91674E*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::RPG::Client::ProgressID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ID_OFFSET))(this, a1);
	}

	::Class_1_C6B3B57B6E91674E* get_RootQueue()
	{
		return ((::Class_1_C6B3B57B6E91674E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ROOTQUEUE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_615* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_615*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_TOTALCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Void set_SuccessCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_SUCCESSCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Void set_FailureCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_FAILURECOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_FINISHCOUNT_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONFAILED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONFINISH_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMFAILED_OFFSET))(this, a1);
	}

	::Class_1_3EA71EBCB5A3B1BA* Method_1_444BCE9903C89D4B(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::IList_1<::System::String*>* a3)
	{
		return ((::Class_1_3EA71EBCB5A3B1BA*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_444BCE9903C89D4B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AF9860E3D88BA32A(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::IList_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_AF9860E3D88BA32A_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_1_C8A4E3689200F6D8(::Class_0_16E4307DCC419505_616* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_616*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_C8A4E3689200F6D8_OFFSET))(this, a1, a2);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_DOSUCCEED_OFFSET))(this);
	}

	::System::Void DoFailed(::Class_2_BF47C01E9CFEA39C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_DOFAILED_OFFSET))(this, a1);
	}
};
