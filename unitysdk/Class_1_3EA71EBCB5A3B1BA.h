#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/FailedType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_0_16E4307DCC419505_580;
class Class_0_16E4307DCC419505_581;
class Class_1_275454CE65A12492;
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

#define CLASS_1_3EA71EBCB5A3B1BA_DOFAILED_OFFSET UNITYSDK_OFFSET(0xAA5A770)
#define CLASS_1_3EA71EBCB5A3B1BA_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0xAA5A600)
#define CLASS_1_3EA71EBCB5A3B1BA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xAA5A230)
#define CLASS_1_3EA71EBCB5A3B1BA_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xAA594E0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xAA59580)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xAA595D0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xAA595F0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ID_OFFSET UNITYSDK_OFFSET(0xAA59550)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xAA59650)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xAA59670)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xAA596D0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xAA59690)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xAA596B0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xAA59610)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xAA59630)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xAA59570)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xAA595B0)
#define CLASS_1_3EA71EBCB5A3B1BA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xAA59590)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_6A64AE68CEC23B8B_OFFSET UNITYSDK_OFFSET(0xAA59D20)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_896860CB81DA7980_OFFSET UNITYSDK_OFFSET(0xAA5A960)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_C6B5CF0B6FDA31AF_OFFSET UNITYSDK_OFFSET(0xAA5A1E0)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_C8A4E3689200F6D8_OFFSET UNITYSDK_OFFSET(0xAA5AA90)
#define CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_D03DCDF705211594_OFFSET UNITYSDK_OFFSET(0xAA598D0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xAA595E0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xAA59600)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ID_OFFSET UNITYSDK_OFFSET(0xAA59560)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xAA59660)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xAA59680)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xAA596E0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xAA596A0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xAA596C0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xAA59620)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xAA59640)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xAA595C0)
#define CLASS_1_3EA71EBCB5A3B1BA_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xAA595A0)
#define CLASS_1_3EA71EBCB5A3B1BA_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xAA5A900)
#define CLASS_1_3EA71EBCB5A3B1BA__CTOR_OFFSET UNITYSDK_OFFSET(0xAA596F0)

inline static constexpr unsigned int Class_1_3EA71EBCB5A3B1BA_TypeDefinitionIndex = 55668;

class Class_1_3EA71EBCB5A3B1BA : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnItemFailed_k__BackingField; // 0x20
	::System::Action_1<::System::String*>* Field_1_3; // 0x28
	::Class_1_275454CE65A12492* Field_1_4; // 0x30
	::Class_2_570AC78C01FF8379* Field_1_5; // 0x38
	::Class_1_C6B3B57B6E91674E* Field_1_6; // 0x40
	::System::String* Field_1_7; // 0x48
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x58
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x60
	::System::String* Field_1_11; // 0x68
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* _OnSucceed_k__BackingField; // 0x70
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x78
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnFailed_k__BackingField; // 0x80
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* _OnStarting_k__BackingField; // 0x88
	::RPG::Client::NotifyType Field_1_16; // 0x90
	::System::Int32 _FailureCount_k__BackingField; // 0x94
	::RPG::Client::TextID Field_1_18; // 0x98
	::RPG::Client::FailedType Field_1_19; // 0xA8
	::System::Int32 _FinishCount_k__BackingField; // 0xAC
	::RPG::Client::ProgressID _ID_k__BackingField; // 0xB0
	::System::Int32 Field_1_22; // 0xB4
	::RPG::Client::TextID Field_1_23; // 0xB8
	::System::Int32 _TotalCount_k__BackingField; // 0xC8
	::RPG::Client::NotifyType Field_1_25; // 0xCC
	::System::Int32 _SuccessCount_k__BackingField; // 0xD0

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

	::Class_0_16E4307DCC419505_580* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_580*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ACTIONSYSTEM_OFFSET))(this);
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

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONFAILED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONFINISH_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_SET_ONITEMFAILED_OFFSET))(this, a1);
	}

	::Class_1_3EA71EBCB5A3B1BA* Method_1_D03DCDF705211594(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::IList_1<::System::String*>* a3)
	{
		return ((::Class_1_3EA71EBCB5A3B1BA*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_D03DCDF705211594_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6A64AE68CEC23B8B(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::IList_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_6A64AE68CEC23B8B_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_1_C8A4E3689200F6D8(::Class_0_16E4307DCC419505_581* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_581*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3EA71EBCB5A3B1BA_METHOD_1_C8A4E3689200F6D8_OFFSET))(this, a1, a2);
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
