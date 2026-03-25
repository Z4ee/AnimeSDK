#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_0_16E4307DCC419505_479;
class Class_0_16E4307DCC419505_480;
class Class_0_16E4307DCC419505_69;
class Class_1_280047DF9F661B14;
class Class_1_8798F0B45D811416_Class_1_BF22BE5E9FE7CF7F;
class Class_1_B6A8A062463EFFDD;
class Class_2_2690241A4D35989E;
class Class_2_54CCD44980580DB7;
namespace RPG::Client { class VersionUpdateProgressInfo; }
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8798F0B45D811416_DOFAILED_OFFSET UNITYSDK_OFFSET(0x8C8B0C0)
#define CLASS_1_8798F0B45D811416_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x8C8AB20)
#define CLASS_1_8798F0B45D811416_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8C89EA0)
#define CLASS_1_8798F0B45D811416_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x8C89960)
#define CLASS_1_8798F0B45D811416_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x8C89A10)
#define CLASS_1_8798F0B45D811416_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x8C89A60)
#define CLASS_1_8798F0B45D811416_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x8C89A80)
#define CLASS_1_8798F0B45D811416_GET_ID_OFFSET UNITYSDK_OFFSET(0x8C899D0)
#define CLASS_1_8798F0B45D811416_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x8C89AE0)
#define CLASS_1_8798F0B45D811416_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x8C89B00)
#define CLASS_1_8798F0B45D811416_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x8C89B60)
#define CLASS_1_8798F0B45D811416_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x8C89B20)
#define CLASS_1_8798F0B45D811416_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x8C89B40)
#define CLASS_1_8798F0B45D811416_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x8C89AA0)
#define CLASS_1_8798F0B45D811416_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x8C89AC0)
#define CLASS_1_8798F0B45D811416_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x8C89A00)
#define CLASS_1_8798F0B45D811416_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x8C89A40)
#define CLASS_1_8798F0B45D811416_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x8C89A20)
#define CLASS_1_8798F0B45D811416_METHOD_1_3ED8334571FBD7F7_OFFSET UNITYSDK_OFFSET(0x8C8B470)
#define CLASS_1_8798F0B45D811416_METHOD_1_6B4CC9FEC403294B_OFFSET UNITYSDK_OFFSET(0x8C8B270)
#define CLASS_1_8798F0B45D811416_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x8C899F0)
#define CLASS_1_8798F0B45D811416_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x8C8AF30)
#define CLASS_1_8798F0B45D811416_METHOD_1_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0x8C8AC90)
#define CLASS_1_8798F0B45D811416_METHOD_1_DA9E3DBF4B5803A3_OFFSET UNITYSDK_OFFSET(0x8C89D30)
#define CLASS_1_8798F0B45D811416_METHOD_1_DE25B04543C947C4_OFFSET UNITYSDK_OFFSET(0x8C8AFA0)
#define CLASS_1_8798F0B45D811416_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x8C89A70)
#define CLASS_1_8798F0B45D811416_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x8C89A90)
#define CLASS_1_8798F0B45D811416_SET_ID_OFFSET UNITYSDK_OFFSET(0x8C899E0)
#define CLASS_1_8798F0B45D811416_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x8C89AF0)
#define CLASS_1_8798F0B45D811416_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x8C89B10)
#define CLASS_1_8798F0B45D811416_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x8C89B70)
#define CLASS_1_8798F0B45D811416_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x8C89B30)
#define CLASS_1_8798F0B45D811416_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x8C89B50)
#define CLASS_1_8798F0B45D811416_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x8C89AB0)
#define CLASS_1_8798F0B45D811416_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x8C89AD0)
#define CLASS_1_8798F0B45D811416_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x8C89A50)
#define CLASS_1_8798F0B45D811416_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x8C89A30)
#define CLASS_1_8798F0B45D811416_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x8C8B410)
#define CLASS_1_8798F0B45D811416__CTOR_OFFSET UNITYSDK_OFFSET(0x8C89B80)

inline static constexpr unsigned int Class_1_8798F0B45D811416_TypeDefinitionIndex = 48190;

class Class_1_8798F0B45D811416 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::Class_1_B6A8A062463EFFDD* Field_1_4; // 0x18
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x20
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* _OnSucceed_k__BackingField; // 0x28
	::Class_1_280047DF9F661B14* Field_1_2; // 0x30
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x38
	::Class_2_54CCD44980580DB7* Field_1_13; // 0x40
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::Class_1_8798F0B45D811416_Class_1_BF22BE5E9FE7CF7F*>* Field_1_0; // 0x50
	::System::String* Field_1_9; // 0x58
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* _OnStarting_k__BackingField; // 0x60
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnFailed_k__BackingField; // 0x68
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnItemFailed_k__BackingField; // 0x70
	::System::Int64 Field_1_3; // 0x78
	::RPG::Client::NotifyType Field_1_10; // 0x80
	::RPG::Client::ProgressID _ID_k__BackingField; // 0x84
	::RPG::Client::NotifyType Field_1_7; // 0x88
	::System::Int32 _FinishCount_k__BackingField; // 0x8C
	::RPG::Client::TextID Field_1_5; // 0x90
	::System::Int32 _TotalCount_k__BackingField; // 0xA0
	::System::Int32 _FailureCount_k__BackingField; // 0xA4
	::System::Boolean Field_1_11; // 0xA8
	::System::Int32 _SuccessCount_k__BackingField; // 0xAC
	::System::Int32 Field_1_12; // 0xB0
	::RPG::Client::TextID Field_1_8; // 0xB8

	::System::Void _ctor(::RPG::Client::ProgressID a1, ::Class_1_B6A8A062463EFFDD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_B6A8A062463EFFDD*))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::RPG::Client::ProgressID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_ID_OFFSET))(this, value);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::Class_1_B6A8A062463EFFDD* get_RootQueue()
	{
		return ((::Class_1_B6A8A062463EFFDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_ROOTQUEUE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_479* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_479*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_TOTALCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Void set_SuccessCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_SUCCESSCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Void set_FailureCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_FAILURECOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_FINISHCOUNT_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_ONSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_ONSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_ONFAILED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_ONFINISH_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_ONITEMSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_ONITEMSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_SET_ONITEMFAILED_OFFSET))(this, value);
	}

	::Class_1_8798F0B45D811416* Method_1_DA9E3DBF4B5803A3(::Class_0_16E4307DCC419505_480* a1, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::Class_1_8798F0B45D811416*(*)(::PVOID, ::Class_0_16E4307DCC419505_480*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_METHOD_1_DA9E3DBF4B5803A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Boolean Method_1_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_METHOD_1_D58849E1895DD394_OFFSET))(this);
	}

	::System::Void Method_1_DE25B04543C947C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_METHOD_1_DE25B04543C947C4_OFFSET))(this, a1);
	}

	::System::Void DoFailed(::Class_2_2690241A4D35989E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_DOFAILED_OFFSET))(this, a1);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_DOSUCCEED_OFFSET))(this);
	}

	::System::Void UpdateProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_UPDATEPROGRESS_OFFSET))(this);
	}

	::System::Void Method_1_6B4CC9FEC403294B(::RPG::Client::NotifyType a1, ::System::String* a2, ::RPG::Client::TextID a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_METHOD_1_6B4CC9FEC403294B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3ED8334571FBD7F7(::RPG::Client::VersionUpdateProgressInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VersionUpdateProgressInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8798F0B45D811416_METHOD_1_3ED8334571FBD7F7_OFFSET))(this, a1);
	}
};
