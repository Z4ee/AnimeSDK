#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/FailedType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_741;
class Class_0_16E4307DCC419505_742;
class Class_0_16E4307DCC419505_743;
class Class_1_630CB84C93B59414;
class Class_1_D7FE7C0ADCE6BFB9;
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

#define CLASS_1_3EA71EBCB5A3B1BA_DOFAILED_OFFSET UNITYSDK_OFFSET(0xBC89B60)
#define CLASS_1_3EA71EBCB5A3B1BA_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0xBC899F0)
#define CLASS_1_3EA71EBCB5A3B1BA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBC89620)
#define CLASS_1_3EA71EBCB5A3B1BA_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBC885D0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xBC88670)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xBC886C0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886E0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ID_OFFSET UNITYSDK_OFFSET(0xBC88640)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xBC88740)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBC88760)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xBC887C0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xBC88780)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xBC887A0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xBC88700)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xBC88720)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xBC88660)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886A0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88680)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_444BCE9903C89D4B_OFFSET UNITYSDK_OFFSET(0xBC889C0)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_896860CB81DA7980_OFFSET UNITYSDK_OFFSET(0xBC89D50)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_AF9860E3D88BA32A_OFFSET UNITYSDK_OFFSET(0xBC88F90)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_C6B5CF0B6FDA31AF_OFFSET UNITYSDK_OFFSET(0xBC895D0)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_C8A4E3689200F6D8_OFFSET UNITYSDK_OFFSET(0xBC89E80)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xBC886D0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886F0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ID_OFFSET UNITYSDK_OFFSET(0xBC88650)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xBC88750)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBC88770)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xBC887D0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xBC88790)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xBC887B0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xBC88710)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xBC88730)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886B0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88690)
#define CLASS_1_3EA71EBCB5A3B1BA_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xBC89CF0)
#define CLASS_1_3EA71EBCB5A3B1BA__CTOR_OFFSET UNITYSDK_OFFSET(0xBC887E0)

inline static constexpr unsigned int Class_1_3EA71EBCB5A3B1BA_TypeDefinitionIndex = 59548;

class Class_1_3EA71EBCB5A3B1BA : public ::System::Object
{
public:
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnFailed_k__BackingField; // 0x10
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnItemFailed_k__BackingField; // 0x18
	::System::Action_1<::System::String*>* MIBHJHBOPNM; // 0x20
	::System::String* HLINKIGMFMH; // 0x28
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* GCIKKMGIPIO; // 0x38
	::System::String* EMKBAECEJEP; // 0x40
	::System::String* MNFCECOFEHK; // 0x48
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_741*>* _OnStarting_k__BackingField; // 0x50
	::Class_1_D7FE7C0ADCE6BFB9* FEICCPBBIHG; // 0x58
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_741*>* _OnSucceed_k__BackingField; // 0x60
	::Class_2_570AC78C01FF8379* HLPMFMHBAMP; // 0x68
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x70
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x78
	::System::String* JOBNMJHAJIF; // 0x80
	::Class_1_630CB84C93B59414* MIPPNCGOJNM; // 0x88
	::RPG::Client::TextID EMPDPJLAHHG; // 0x90
	::System::Int32 _FailureCount_k__BackingField; // 0xA0
	::System::Int32 _SuccessCount_k__BackingField; // 0xA4
	::RPG::Client::NotifyType BBMGOLIHLMD; // 0xA8
	::System::Int32 ECNABJDGLFH; // 0xAC
	::RPG::Client::FailedType OAMKPPGDDIM; // 0xB0
	::RPG::Client::ProgressID _ID_k__BackingField; // 0xB4
	::System::Int32 _TotalCount_k__BackingField; // 0xB8
	::RPG::Client::TextID OFFMEOODAED; // 0xC0
	::RPG::Client::NotifyType DFIHEOOHNPO; // 0xD0
	::System::Int32 _FinishCount_k__BackingField; // 0xD4

	::System::Void _ctor(::RPG::Client::ProgressID a1, ::Class_1_D7FE7C0ADCE6BFB9* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_D7FE7C0ADCE6BFB9*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA__CTOR_OFFSET))(this, a1, a2, a3, a4);
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

	::Class_1_D7FE7C0ADCE6BFB9* get_RootQueue()
	{
		return ((::Class_1_D7FE7C0ADCE6BFB9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ROOTQUEUE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_742* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_742*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ACTIONSYSTEM_OFFSET))(this);
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

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_741*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_741*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_741*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_741*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_741*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_741*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_741*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_741*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONFAILED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONFINISH_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSUCCEED_OFFSET))(this, a1);
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

	::System::Void Method_1_C8A4E3689200F6D8(::Class_0_16E4307DCC419505_743* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_743*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_C8A4E3689200F6D8_OFFSET))(this, a1, a2);
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
