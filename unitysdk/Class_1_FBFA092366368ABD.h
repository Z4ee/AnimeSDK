#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_0_16E4307DCC419505_580;
class Class_0_16E4307DCC419505_581;
class Class_0_16E4307DCC419505_585;
class Class_1_C530CE1C0A4E2133;
class Class_1_C6B3B57B6E91674E;
class Class_2_BF47C01E9CFEA39C;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T1, typename T2> class ActionEvent_2; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class Delegate; }
namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define CLASS_1_FBFA092366368ABD_DOFAILED_OFFSET UNITYSDK_OFFSET(0x135327D0)
#define CLASS_1_FBFA092366368ABD_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x13532790)
#define CLASS_1_FBFA092366368ABD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13532750)
#define CLASS_1_FBFA092366368ABD_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x13532500)
#define CLASS_1_FBFA092366368ABD_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x135325A0)
#define CLASS_1_FBFA092366368ABD_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x13532580)
#define CLASS_1_FBFA092366368ABD_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x13532590)
#define CLASS_1_FBFA092366368ABD_GET_ID_OFFSET UNITYSDK_OFFSET(0x13532550)
#define CLASS_1_FBFA092366368ABD_GET_ONDATAFAILED_OFFSET UNITYSDK_OFFSET(0x13532650)
#define CLASS_1_FBFA092366368ABD_GET_ONDATASTARTING_OFFSET UNITYSDK_OFFSET(0x13532610)
#define CLASS_1_FBFA092366368ABD_GET_ONDATASUCCEED_OFFSET UNITYSDK_OFFSET(0x13532630)
#define CLASS_1_FBFA092366368ABD_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x13532670)
#define CLASS_1_FBFA092366368ABD_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x13532690)
#define CLASS_1_FBFA092366368ABD_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x135326F0)
#define CLASS_1_FBFA092366368ABD_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x135326B0)
#define CLASS_1_FBFA092366368ABD_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x135326D0)
#define CLASS_1_FBFA092366368ABD_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x135325D0)
#define CLASS_1_FBFA092366368ABD_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x135325F0)
#define CLASS_1_FBFA092366368ABD_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x135325B0)
#define CLASS_1_FBFA092366368ABD_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x13532570)
#define CLASS_1_FBFA092366368ABD_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x13532560)
#define CLASS_1_FBFA092366368ABD_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x13533880)
#define CLASS_1_FBFA092366368ABD_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13532820)
#define CLASS_1_FBFA092366368ABD_METHOD_1_2C61108A8DA0AD73_OFFSET UNITYSDK_OFFSET(0x13532BA0)
#define CLASS_1_FBFA092366368ABD_METHOD_1_39AB6BE86BE284EE_OFFSET UNITYSDK_OFFSET(0x13532F60)
#define CLASS_1_FBFA092366368ABD_METHOD_1_422AB1A19F04E217_OFFSET UNITYSDK_OFFSET(0x13533C50)
#define CLASS_1_FBFA092366368ABD_METHOD_1_44D5E19630157ECE_OFFSET UNITYSDK_OFFSET(0x13533D50)
#define CLASS_1_FBFA092366368ABD_METHOD_1_47471DD3CB437601_OFFSET UNITYSDK_OFFSET(0x13532DA0)
#define CLASS_1_FBFA092366368ABD_METHOD_1_494D7FA4CA2316AD_OFFSET UNITYSDK_OFFSET(0x13532C60)
#define CLASS_1_FBFA092366368ABD_METHOD_1_6287ACD5750B69E7_OFFSET UNITYSDK_OFFSET(0x13532F10)
#define CLASS_1_FBFA092366368ABD_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x13532B10)
#define CLASS_1_FBFA092366368ABD_METHOD_1_BA0B557A599693AD_OFFSET UNITYSDK_OFFSET(0x13533030)
#define CLASS_1_FBFA092366368ABD_METHOD_1_BF2C9F6DD9492BE4_OFFSET UNITYSDK_OFFSET(0x13533100)
#define CLASS_1_FBFA092366368ABD_METHOD_1_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0x13532D20)
#define CLASS_1_FBFA092366368ABD_METHOD_1_D0663CE240A6DAF4_OFFSET UNITYSDK_OFFSET(0x13532C10)
#define CLASS_1_FBFA092366368ABD_SET_ONDATAFAILED_OFFSET UNITYSDK_OFFSET(0x13532660)
#define CLASS_1_FBFA092366368ABD_SET_ONDATASTARTING_OFFSET UNITYSDK_OFFSET(0x13532620)
#define CLASS_1_FBFA092366368ABD_SET_ONDATASUCCEED_OFFSET UNITYSDK_OFFSET(0x13532640)
#define CLASS_1_FBFA092366368ABD_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x13532680)
#define CLASS_1_FBFA092366368ABD_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x135326A0)
#define CLASS_1_FBFA092366368ABD_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x13532700)
#define CLASS_1_FBFA092366368ABD_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x135326C0)
#define CLASS_1_FBFA092366368ABD_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x135326E0)
#define CLASS_1_FBFA092366368ABD_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x135325E0)
#define CLASS_1_FBFA092366368ABD_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x13532600)
#define CLASS_1_FBFA092366368ABD_SET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x135325C0)
#define CLASS_1_FBFA092366368ABD_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x13532710)
#define CLASS_1_FBFA092366368ABD__ADDERRORLOG_B__89_0_OFFSET UNITYSDK_OFFSET(0x13534A20)
#define CLASS_1_FBFA092366368ABD__ADDPROGRESSLOG_B__90_0_OFFSET UNITYSDK_OFFSET(0x135357A0)
#define CLASS_1_FBFA092366368ABD__ADDPROGRESSLOG_B__90_1_OFFSET UNITYSDK_OFFSET(0x135357B0)
#define CLASS_1_FBFA092366368ABD__ADDPROGRESSLOG_B__90_2_OFFSET UNITYSDK_OFFSET(0x13536300)
#define CLASS_1_FBFA092366368ABD__ADDPROGRESSLOG_B__90_3_OFFSET UNITYSDK_OFFSET(0x13537770)
#define CLASS_1_FBFA092366368ABD__ADDPROGRESSLOG_B__90_4_OFFSET UNITYSDK_OFFSET(0x13537A50)
#define CLASS_1_FBFA092366368ABD__CTOR_OFFSET UNITYSDK_OFFSET(0x13532890)

inline static constexpr unsigned int Class_1_FBFA092366368ABD_TypeDefinitionIndex = 55671;

class Class_1_FBFA092366368ABD : public ::System::Object
{
public:
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnDataFailed_k__BackingField; // 0x10
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnFailed_k__BackingField; // 0x28
	::Class_1_C6B3B57B6E91674E* _RootQueue_k__BackingField; // 0x30
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x38
	::Class_1_C530CE1C0A4E2133* Field_1_6; // 0x40
	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*>* _OnDataStarting_k__BackingField; // 0x48
	::System::String* Field_1_8; // 0x50
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnItemFailed_k__BackingField; // 0x58
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* _OnSucceed_k__BackingField; // 0x60
	::Class_1_C530CE1C0A4E2133* Field_1_11; // 0x68
	::Class_1_C530CE1C0A4E2133* Field_1_12; // 0x70
	::Class_1_C530CE1C0A4E2133* Field_1_13; // 0x78
	::System::String* Field_1_14; // 0x80
	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*>* _OnDataSucceed_k__BackingField; // 0x88
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* _OnStarting_k__BackingField; // 0x90
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x98
	::Class_1_C530CE1C0A4E2133* Field_1_18; // 0xA0
	::System::Int32 Field_1_19; // 0xA8

	::System::Void _ctor(::Class_1_C6B3B57B6E91674E* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6B3B57B6E91674E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ID_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_FINISHCOUNT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_580* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_580*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::Class_1_C6B3B57B6E91674E* get_RootQueue()
	{
		return ((::Class_1_C6B3B57B6E91674E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ROOTQUEUE_OFFSET))(this);
	}

	::System::Void set_RootQueue(::Class_1_C6B3B57B6E91674E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6B3B57B6E91674E*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_SET_ROOTQUEUE_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_SET_ONSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_579*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_SET_ONSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*>* get_OnDataStarting()
	{
		return ((::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ONDATASTARTING_OFFSET))(this);
	}

	::System::Void set_OnDataStarting(::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_SET_ONDATASTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*>* get_OnDataSucceed()
	{
		return ((::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ONDATASUCCEED_OFFSET))(this);
	}

	::System::Void set_OnDataSucceed(::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_SET_ONDATASUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnDataFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ONDATAFAILED_OFFSET))(this);
	}

	::System::Void set_OnDataFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_SET_ONDATAFAILED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_SET_ONFAILED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_SET_ONFINISH_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_SET_ONITEMSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_SET_ONITEMSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_SET_ONITEMFAILED_OFFSET))(this, a1);
	}

	::System::Void UpdateProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_UPDATEPROGRESS_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_EXECUTE_OFFSET))(this);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_DOSUCCEED_OFFSET))(this);
	}

	::System::Void DoFailed(::Class_2_BF47C01E9CFEA39C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_DOFAILED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::String* Method_1_2C61108A8DA0AD73(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_2C61108A8DA0AD73_OFFSET))(this, a1);
	}

	::System::IDisposable* Method_1_D0663CE240A6DAF4(::Class_1_C530CE1C0A4E2133* a1)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::Class_1_C530CE1C0A4E2133*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_D0663CE240A6DAF4_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerable* Method_1_494D7FA4CA2316AD(::Class_1_C530CE1C0A4E2133* a1)
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID, ::Class_1_C530CE1C0A4E2133*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_494D7FA4CA2316AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C6E14CE377D03CE0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_C6E14CE377D03CE0_OFFSET))(this, a1);
	}

	::System::String* Method_1_47471DD3CB437601(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_47471DD3CB437601_OFFSET))(this, a1);
	}

	::System::IDisposable* Method_1_6287ACD5750B69E7(::System::Delegate* a1, ::Class_0_16E4307DCC419505_585* a2)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::System::Delegate*, ::Class_0_16E4307DCC419505_585*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_6287ACD5750B69E7_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerable* Method_1_39AB6BE86BE284EE(::System::Delegate* a1, ::Class_0_16E4307DCC419505_585* a2)
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::Delegate*, ::Class_0_16E4307DCC419505_585*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_39AB6BE86BE284EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA0B557A599693AD(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_BA0B557A599693AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF2C9F6DD9492BE4(::Class_2_BF47C01E9CFEA39C* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_BF2C9F6DD9492BE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_1_422AB1A19F04E217()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_422AB1A19F04E217_OFFSET))(this);
	}

	::System::Void Method_1_44D5E19630157ECE(::Class_0_16E4307DCC419505_581* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_581*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD_METHOD_1_44D5E19630157ECE_OFFSET))(this, a1);
	}

	::System::Void _AddErrorLog_b__89_0(::Class_2_BF47C01E9CFEA39C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD__ADDERRORLOG_B__89_0_OFFSET))(this, a1);
	}

	::System::Void _AddProgressLog_b__90_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD__ADDPROGRESSLOG_B__90_0_OFFSET))(this);
	}

	::System::Void _AddProgressLog_b__90_1(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD__ADDPROGRESSLOG_B__90_1_OFFSET))(this, a1);
	}

	::System::Void _AddProgressLog_b__90_2(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD__ADDPROGRESSLOG_B__90_2_OFFSET))(this, a1);
	}

	::System::Void _AddProgressLog_b__90_3(::Class_0_16E4307DCC419505_579* a1, ::Class_0_16E4307DCC419505_581* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD__ADDPROGRESSLOG_B__90_3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _AddProgressLog_b__90_4(::Class_0_16E4307DCC419505_579* a1, ::Class_0_16E4307DCC419505_581* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD__ADDPROGRESSLOG_B__90_4_OFFSET))(this, a1, a2);
	}
};
