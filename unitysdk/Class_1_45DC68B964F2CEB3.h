#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_0_16E4307DCC419505_558;
class Class_0_16E4307DCC419505_559;
class Class_1_280047DF9F661B14;
class Class_1_8C3AC9786B6764EF;
class Class_2_2690241A4D35989E;
class Class_2_54CCD44980580DB7;
class Class_3_3B91E9B720B814BB;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_45DC68B964F2CEB3_DOFAILED_OFFSET UNITYSDK_OFFSET(0x99F11B0)
#define CLASS_1_45DC68B964F2CEB3_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x99F0EA0)
#define CLASS_1_45DC68B964F2CEB3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x99F0740)
#define CLASS_1_45DC68B964F2CEB3_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x99F01C0)
#define CLASS_1_45DC68B964F2CEB3_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x99F02C0)
#define CLASS_1_45DC68B964F2CEB3_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x99F0260)
#define CLASS_1_45DC68B964F2CEB3_GET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0x99F0280)
#define CLASS_1_45DC68B964F2CEB3_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x99F0310)
#define CLASS_1_45DC68B964F2CEB3_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x99F02A0)
#define CLASS_1_45DC68B964F2CEB3_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x99F0330)
#define CLASS_1_45DC68B964F2CEB3_GET_ID_OFFSET UNITYSDK_OFFSET(0x99F0230)
#define CLASS_1_45DC68B964F2CEB3_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x99F0390)
#define CLASS_1_45DC68B964F2CEB3_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x99F03B0)
#define CLASS_1_45DC68B964F2CEB3_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x99F0410)
#define CLASS_1_45DC68B964F2CEB3_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x99F03D0)
#define CLASS_1_45DC68B964F2CEB3_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x99F03F0)
#define CLASS_1_45DC68B964F2CEB3_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x99F0350)
#define CLASS_1_45DC68B964F2CEB3_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x99F0370)
#define CLASS_1_45DC68B964F2CEB3_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x99F0250)
#define CLASS_1_45DC68B964F2CEB3_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x99F02F0)
#define CLASS_1_45DC68B964F2CEB3_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x99F02D0)
#define CLASS_1_45DC68B964F2CEB3_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x99F1330)
#define CLASS_1_45DC68B964F2CEB3_SET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x99F0270)
#define CLASS_1_45DC68B964F2CEB3_SET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0x99F0290)
#define CLASS_1_45DC68B964F2CEB3_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x99F0320)
#define CLASS_1_45DC68B964F2CEB3_SET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x99F02B0)
#define CLASS_1_45DC68B964F2CEB3_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x99F0340)
#define CLASS_1_45DC68B964F2CEB3_SET_ID_OFFSET UNITYSDK_OFFSET(0x99F0240)
#define CLASS_1_45DC68B964F2CEB3_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x99F03A0)
#define CLASS_1_45DC68B964F2CEB3_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x99F03C0)
#define CLASS_1_45DC68B964F2CEB3_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x99F0420)
#define CLASS_1_45DC68B964F2CEB3_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x99F03E0)
#define CLASS_1_45DC68B964F2CEB3_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x99F0400)
#define CLASS_1_45DC68B964F2CEB3_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x99F0360)
#define CLASS_1_45DC68B964F2CEB3_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x99F0380)
#define CLASS_1_45DC68B964F2CEB3_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x99F0300)
#define CLASS_1_45DC68B964F2CEB3_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x99F02E0)
#define CLASS_1_45DC68B964F2CEB3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99F13E0)
#define CLASS_1_45DC68B964F2CEB3_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x99F13A0)
#define CLASS_1_45DC68B964F2CEB3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x99F05C0)
#define CLASS_1_45DC68B964F2CEB3__CTOR_OFFSET UNITYSDK_OFFSET(0x99F0430)
#define CLASS_1_45DC68B964F2CEB3___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99F1450)

inline static constexpr unsigned int Class_1_45DC68B964F2CEB3_TypeDefinitionIndex = 54946;

class Class_1_45DC68B964F2CEB3 : public ::System::Object
{
public:
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* _OnSucceed_k__BackingField; // 0x10
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x18
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnItemFailed_k__BackingField; // 0x20
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x28
	::System::String* _AssetName_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_559* Field_1_2; // 0x38
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x40
	::Class_1_8C3AC9786B6764EF* Field_1_3; // 0x48
	::Class_3_3B91E9B720B814BB* Field_1_5; // 0x50
	::Class_1_280047DF9F661B14* Field_1_1; // 0x58
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnFailed_k__BackingField; // 0x60
	::System::Func_2<::Class_1_280047DF9F661B14*, ::RPG::Client::ExeCode>* Field_1_4; // 0x68
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* _OnStarting_k__BackingField; // 0x70
	::Class_2_54CCD44980580DB7* Field_1_9; // 0x78
	::RPG::Client::ByteHash16 _ContentHash_k__BackingField; // 0x80
	::System::Int32 _FailureCount_k__BackingField; // 0x90
	::System::Int32 _TotalCount_k__BackingField; // 0x94
	::System::Int32 _SuccessCount_k__BackingField; // 0x98
	::System::Int64 _FileSize_k__BackingField; // 0xA0
	::RPG::Client::ProgressID _ID_k__BackingField; // 0xA8
	::System::Int32 _FinishCount_k__BackingField; // 0xAC

	::System::Void _ctor(::RPG::Client::ProgressID a1, ::Class_1_8C3AC9786B6764EF* a2, ::Class_0_16E4307DCC419505_559* a3, ::System::String* a4, ::RPG::Client::ByteHash16 a5, ::System::Int64 a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_8C3AC9786B6764EF*, ::Class_0_16E4307DCC419505_559*, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_1(::RPG::Client::ProgressID a1, ::Class_1_8C3AC9786B6764EF* a2, ::Class_0_16E4307DCC419505_559* a3, ::Class_3_3B91E9B720B814BB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_8C3AC9786B6764EF*, ::Class_0_16E4307DCC419505_559*, ::Class_3_3B91E9B720B814BB*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::RPG::Client::ProgressID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ID_OFFSET))(this, value);
	}

	::Class_1_8C3AC9786B6764EF* get_RootQueue()
	{
		return ((::Class_1_8C3AC9786B6764EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ROOTQUEUE_OFFSET))(this);
	}

	::System::String* get_AssetName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ASSETNAME_OFFSET))(this);
	}

	::System::Void set_AssetName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ASSETNAME_OFFSET))(this, value);
	}

	::RPG::Client::ByteHash16 get_ContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_CONTENTHASH_OFFSET))(this);
	}

	::System::Void set_ContentHash(::RPG::Client::ByteHash16 value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_CONTENTHASH_OFFSET))(this, value);
	}

	::System::Int64 get_FileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_FILESIZE_OFFSET))(this);
	}

	::System::Void set_FileSize(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_FILESIZE_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_558* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_558*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_TOTALCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Void set_SuccessCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_SUCCESSCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Void set_FailureCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_FAILURECOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_FINISHCOUNT_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONFAILED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONFINISH_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONITEMSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONITEMSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONITEMFAILED_OFFSET))(this, value);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void UpdateProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_UPDATEPROGRESS_OFFSET))(this);
	}

	::System::Void DoFailed(::Class_2_2690241A4D35989E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_DOFAILED_OFFSET))(this, a1);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_DOSUCCEED_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
