#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_0_16E4307DCC419505_479;
class Class_0_16E4307DCC419505_480;
class Class_0_16E4307DCC419505_484;
class Class_1_B6A8A062463EFFDD;
class Class_1_C530CE1C0A4E2133;
class Class_2_2690241A4D35989E;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T1, typename T2> class ActionEvent_2; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class Delegate; }
namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define CLASS_1_18B0677ECDC1AEEB_DOFAILED_OFFSET UNITYSDK_OFFSET(0xA9D5490)
#define CLASS_1_18B0677ECDC1AEEB_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0xA9D5450)
#define CLASS_1_18B0677ECDC1AEEB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA9D5410)
#define CLASS_1_18B0677ECDC1AEEB_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xA9D51C0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xA9D5260)
#define CLASS_1_18B0677ECDC1AEEB_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xA9D5240)
#define CLASS_1_18B0677ECDC1AEEB_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xA9D5250)
#define CLASS_1_18B0677ECDC1AEEB_GET_ID_OFFSET UNITYSDK_OFFSET(0xA9D5210)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONDATAFAILED_OFFSET UNITYSDK_OFFSET(0xA9D5310)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONDATASTARTING_OFFSET UNITYSDK_OFFSET(0xA9D52D0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONDATASUCCEED_OFFSET UNITYSDK_OFFSET(0xA9D52F0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xA9D5330)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xA9D5350)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xA9D53B0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xA9D5370)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xA9D5390)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xA9D5290)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xA9D52B0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xA9D5270)
#define CLASS_1_18B0677ECDC1AEEB_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xA9D5230)
#define CLASS_1_18B0677ECDC1AEEB_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xA9D5220)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_14AF5D956E81774A_OFFSET UNITYSDK_OFFSET(0xA9D6A40)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA9D54E0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_2C61108A8DA0AD73_OFFSET UNITYSDK_OFFSET(0xA9D5860)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_39AB6BE86BE284EE_OFFSET UNITYSDK_OFFSET(0xA9D5C20)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_3B018C5CF15BCDF6_OFFSET UNITYSDK_OFFSET(0xA9D5DC0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_494D7FA4CA2316AD_OFFSET UNITYSDK_OFFSET(0xA9D5920)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_6287ACD5750B69E7_OFFSET UNITYSDK_OFFSET(0xA9D5BD0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_7E9C4D81D04C3024_OFFSET UNITYSDK_OFFSET(0xA9D6920)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0xA9D57D0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xA9D65F0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0xA9D59E0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_D0663CE240A6DAF4_OFFSET UNITYSDK_OFFSET(0xA9D58D0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_DCAED9AAC7431412_OFFSET UNITYSDK_OFFSET(0xA9D5CF0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_EB7112936E778817_OFFSET UNITYSDK_OFFSET(0xA9D5A60)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONDATAFAILED_OFFSET UNITYSDK_OFFSET(0xA9D5320)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONDATASTARTING_OFFSET UNITYSDK_OFFSET(0xA9D52E0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONDATASUCCEED_OFFSET UNITYSDK_OFFSET(0xA9D5300)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xA9D5340)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xA9D5360)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xA9D53C0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xA9D5380)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xA9D53A0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xA9D52A0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xA9D52C0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xA9D5280)
#define CLASS_1_18B0677ECDC1AEEB_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xA9D53D0)
#define CLASS_1_18B0677ECDC1AEEB__ADDERRORLOG_B__89_0_OFFSET UNITYSDK_OFFSET(0xA9D78A0)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_0_OFFSET UNITYSDK_OFFSET(0xA9D8800)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_1_OFFSET UNITYSDK_OFFSET(0xA9D8810)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_2_OFFSET UNITYSDK_OFFSET(0xA9D9440)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_3_OFFSET UNITYSDK_OFFSET(0xA9DA930)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_4_OFFSET UNITYSDK_OFFSET(0xA9DAC10)
#define CLASS_1_18B0677ECDC1AEEB__CTOR_OFFSET UNITYSDK_OFFSET(0xA9D5550)

inline static constexpr unsigned int Class_1_18B0677ECDC1AEEB_TypeDefinitionIndex = 48192;

class Class_1_18B0677ECDC1AEEB : public ::System::Object
{
public:
	::Class_1_B6A8A062463EFFDD* _RootQueue_k__BackingField; // 0x10
	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* _OnDataStarting_k__BackingField; // 0x18
	::System::String* Field_1_16; // 0x20
	::System::String* Field_1_18; // 0x28
	::Class_1_C530CE1C0A4E2133* Field_1_2; // 0x30
	::System::String* Field_1_19; // 0x38
	::Class_1_C530CE1C0A4E2133* Field_1_3; // 0x40
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x48
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x50
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnDataFailed_k__BackingField; // 0x58
	::Class_1_C530CE1C0A4E2133* Field_1_4; // 0x60
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* _OnSucceed_k__BackingField; // 0x68
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x70
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnItemFailed_k__BackingField; // 0x78
	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* _OnDataSucceed_k__BackingField; // 0x80
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* _OnStarting_k__BackingField; // 0x88
	::Class_1_C530CE1C0A4E2133* Field_1_5; // 0x90
	::Class_1_C530CE1C0A4E2133* Field_1_1; // 0x98
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnFailed_k__BackingField; // 0xA0
	::System::Int32 Field_1_17; // 0xA8

	::System::Void _ctor(::Class_1_B6A8A062463EFFDD* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6A8A062463EFFDD*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ID_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_FINISHCOUNT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_479* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_479*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::Class_1_B6A8A062463EFFDD* get_RootQueue()
	{
		return ((::Class_1_B6A8A062463EFFDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ROOTQUEUE_OFFSET))(this);
	}

	::System::Void set_RootQueue(::Class_1_B6A8A062463EFFDD* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6A8A062463EFFDD*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ROOTQUEUE_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* get_OnDataStarting()
	{
		return ((::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONDATASTARTING_OFFSET))(this);
	}

	::System::Void set_OnDataStarting(::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONDATASTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* get_OnDataSucceed()
	{
		return ((::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONDATASUCCEED_OFFSET))(this);
	}

	::System::Void set_OnDataSucceed(::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONDATASUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnDataFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONDATAFAILED_OFFSET))(this);
	}

	::System::Void set_OnDataFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONDATAFAILED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONFAILED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONFINISH_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONITEMFAILED_OFFSET))(this, value);
	}

	::System::Void UpdateProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_UPDATEPROGRESS_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_EXECUTE_OFFSET))(this);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_DOSUCCEED_OFFSET))(this);
	}

	::System::Void DoFailed(::Class_2_2690241A4D35989E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_DOFAILED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::String* Method_1_2C61108A8DA0AD73(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_2C61108A8DA0AD73_OFFSET))(this, a1);
	}

	::System::IDisposable* Method_1_D0663CE240A6DAF4(::Class_1_C530CE1C0A4E2133* a1)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::Class_1_C530CE1C0A4E2133*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_D0663CE240A6DAF4_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerable* Method_1_494D7FA4CA2316AD(::Class_1_C530CE1C0A4E2133* a1)
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID, ::Class_1_C530CE1C0A4E2133*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_494D7FA4CA2316AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C6E14CE377D03CE0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_C6E14CE377D03CE0_OFFSET))(this, a1);
	}

	::System::String* Method_1_EB7112936E778817(::Class_0_16E4307DCC419505_478* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_EB7112936E778817_OFFSET))(this, a1);
	}

	::System::IDisposable* Method_1_6287ACD5750B69E7(::System::Delegate* a1, ::Class_0_16E4307DCC419505_484* a2)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::System::Delegate*, ::Class_0_16E4307DCC419505_484*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_6287ACD5750B69E7_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerable* Method_1_39AB6BE86BE284EE(::System::Delegate* a1, ::Class_0_16E4307DCC419505_484* a2)
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::Delegate*, ::Class_0_16E4307DCC419505_484*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_39AB6BE86BE284EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCAED9AAC7431412(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_DCAED9AAC7431412_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B018C5CF15BCDF6(::Class_2_2690241A4D35989E* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_3B018C5CF15BCDF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_7E9C4D81D04C3024()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_7E9C4D81D04C3024_OFFSET))(this);
	}

	::System::Void Method_1_14AF5D956E81774A(::Class_0_16E4307DCC419505_480* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_480*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_14AF5D956E81774A_OFFSET))(this, a1);
	}

	::System::Void _AddErrorLog_b__89_0(::Class_2_2690241A4D35989E* ax)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDERRORLOG_B__89_0_OFFSET))(this, ax);
	}

	::System::Void _AddProgressLog_b__90_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_0_OFFSET))(this);
	}

	::System::Void _AddProgressLog_b__90_1(::Class_0_16E4307DCC419505_478* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_1_OFFSET))(this, progress);
	}

	::System::Void _AddProgressLog_b__90_2(::Class_0_16E4307DCC419505_478* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_2_OFFSET))(this, progress);
	}

	::System::Void _AddProgressLog_b__90_3(::Class_0_16E4307DCC419505_478* progress, ::Class_0_16E4307DCC419505_480* data, ::System::Object* item, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_3_OFFSET))(this, progress, data, item, code);
	}

	::System::Void _AddProgressLog_b__90_4(::Class_0_16E4307DCC419505_478* progress, ::Class_0_16E4307DCC419505_480* data)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_4_OFFSET))(this, progress, data);
	}
};
