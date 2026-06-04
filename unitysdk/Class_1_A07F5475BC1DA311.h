#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_0_16E4307DCC419505_580;
class Class_0_16E4307DCC419505_581;
class Class_1_275454CE65A12492;
class Class_1_A07F5475BC1DA311_Class_1_AEAE8AF084ADE77B;
class Class_1_C6B3B57B6E91674E;
class Class_2_54CCD44980580DB7;
class Class_2_BF47C01E9CFEA39C;
class Class_3_3B91E9B720B814BB;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A07F5475BC1DA311_DOFAILED_OFFSET UNITYSDK_OFFSET(0x139504A0)
#define CLASS_1_A07F5475BC1DA311_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x139502C0)
#define CLASS_1_A07F5475BC1DA311_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1394FAF0)
#define CLASS_1_A07F5475BC1DA311_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1394F410)
#define CLASS_1_A07F5475BC1DA311_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x1394F4B0)
#define CLASS_1_A07F5475BC1DA311_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x1394F500)
#define CLASS_1_A07F5475BC1DA311_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1394F520)
#define CLASS_1_A07F5475BC1DA311_GET_ID_OFFSET UNITYSDK_OFFSET(0x1394F480)
#define CLASS_1_A07F5475BC1DA311_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x1394F580)
#define CLASS_1_A07F5475BC1DA311_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1394F5A0)
#define CLASS_1_A07F5475BC1DA311_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x1394F600)
#define CLASS_1_A07F5475BC1DA311_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x1394F5C0)
#define CLASS_1_A07F5475BC1DA311_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x1394F5E0)
#define CLASS_1_A07F5475BC1DA311_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x1394F540)
#define CLASS_1_A07F5475BC1DA311_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x1394F560)
#define CLASS_1_A07F5475BC1DA311_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x1394F4A0)
#define CLASS_1_A07F5475BC1DA311_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1394F4E0)
#define CLASS_1_A07F5475BC1DA311_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1394F4C0)
#define CLASS_1_A07F5475BC1DA311_METHOD_1_5496C6D6C29DCFBE_OFFSET UNITYSDK_OFFSET(0x13950650)
#define CLASS_1_A07F5475BC1DA311_METHOD_1_76BFA006229A4AAE_OFFSET UNITYSDK_OFFSET(0x1394F960)
#define CLASS_1_A07F5475BC1DA311_METHOD_1_BFED7D806019E6FB_OFFSET UNITYSDK_OFFSET(0x1394F7C0)
#define CLASS_1_A07F5475BC1DA311_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x13950430)
#define CLASS_1_A07F5475BC1DA311_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x1394F510)
#define CLASS_1_A07F5475BC1DA311_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1394F530)
#define CLASS_1_A07F5475BC1DA311_SET_ID_OFFSET UNITYSDK_OFFSET(0x1394F490)
#define CLASS_1_A07F5475BC1DA311_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x1394F590)
#define CLASS_1_A07F5475BC1DA311_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1394F5B0)
#define CLASS_1_A07F5475BC1DA311_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x1394F610)
#define CLASS_1_A07F5475BC1DA311_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x1394F5D0)
#define CLASS_1_A07F5475BC1DA311_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x1394F5F0)
#define CLASS_1_A07F5475BC1DA311_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x1394F550)
#define CLASS_1_A07F5475BC1DA311_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x1394F570)
#define CLASS_1_A07F5475BC1DA311_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1394F4F0)
#define CLASS_1_A07F5475BC1DA311_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1394F4D0)
#define CLASS_1_A07F5475BC1DA311_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x13950750)
#define CLASS_1_A07F5475BC1DA311__CTOR_OFFSET UNITYSDK_OFFSET(0x1394F620)

inline static constexpr unsigned int Class_1_A07F5475BC1DA311_TypeDefinitionIndex = 55664;

class Class_1_A07F5475BC1DA311 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_C6B3B57B6E91674E* Field_1_1; // 0x18
	::Class_1_275454CE65A12492* Field_1_2; // 0x20
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* _OnStarting_k__BackingField; // 0x28
	::System::String* Field_1_4; // 0x30
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnItemFailed_k__BackingField; // 0x38
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* _OnSucceed_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::Class_1_A07F5475BC1DA311_Class_1_AEAE8AF084ADE77B*>* Field_1_7; // 0x48
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnFailed_k__BackingField; // 0x50
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x58
	::Class_2_54CCD44980580DB7* Field_1_10; // 0x60
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x68
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x70
	::System::String* Field_1_13; // 0x78
	::System::Boolean Field_1_14; // 0x80
	::RPG::Client::NotifyType Field_1_15; // 0x84
	::System::Int64 Field_1_16; // 0x88
	::System::Int32 _TotalCount_k__BackingField; // 0x90
	::System::Int32 _FinishCount_k__BackingField; // 0x94
	::RPG::Client::NotifyType Field_1_19; // 0x98
	::System::Int32 _FailureCount_k__BackingField; // 0x9C
	::RPG::Client::ProgressID _ID_k__BackingField; // 0xA0
	::System::Int32 _SuccessCount_k__BackingField; // 0xA4
	::RPG::Client::TextID Field_1_23; // 0xA8
	::RPG::Client::TextID Field_1_24; // 0xB8

	::System::Void _ctor(::RPG::Client::ProgressID a1, ::Class_1_C6B3B57B6E91674E* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_C6B3B57B6E91674E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::RPG::Client::ProgressID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ID_OFFSET))(this, a1);
	}

	::Class_1_C6B3B57B6E91674E* get_RootQueue()
	{
		return ((::Class_1_C6B3B57B6E91674E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ROOTQUEUE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_580* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_580*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_TOTALCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Void set_SuccessCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_SUCCESSCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Void set_FailureCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_FAILURECOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_FINISHCOUNT_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONFAILED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONFINISH_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONITEMSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONITEMSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONITEMFAILED_OFFSET))(this, a1);
	}

	::Class_1_A07F5475BC1DA311* Method_1_BFED7D806019E6FB(::System::String* a1, ::Class_0_16E4307DCC419505_581* a2)
	{
		return ((::Class_1_A07F5475BC1DA311*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_581*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_METHOD_1_BFED7D806019E6FB_OFFSET))(this, a1, a2);
	}

	::Class_1_A07F5475BC1DA311* Method_1_76BFA006229A4AAE(::Class_3_3B91E9B720B814BB* a1, ::Class_0_16E4307DCC419505_581* a2)
	{
		return ((::Class_1_A07F5475BC1DA311*(*)(::PVOID, ::Class_3_3B91E9B720B814BB*, ::Class_0_16E4307DCC419505_581*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_METHOD_1_76BFA006229A4AAE_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Void DoFailed(::Class_2_BF47C01E9CFEA39C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_DOFAILED_OFFSET))(this, a1);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_DOSUCCEED_OFFSET))(this);
	}

	::System::Void UpdateProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_UPDATEPROGRESS_OFFSET))(this);
	}

	::System::Void Method_1_5496C6D6C29DCFBE(::RPG::Client::NotifyType a1, ::System::String* a2, ::RPG::Client::TextID a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_METHOD_1_5496C6D6C29DCFBE_OFFSET))(this, a1, a2, a3);
	}
};
