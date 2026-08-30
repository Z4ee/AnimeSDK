#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_651;
class Class_0_16E4307DCC419505_652;
class Class_1_630CB84C93B59414;
class Class_1_8CA784D26D9A6CF7;
class Class_2_54CCD44980580DB7;
class Class_2_BF47C01E9CFEA39C;
class Class_3_3B91E9B720B814BB;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_45DC68B964F2CEB3_DOFAILED_OFFSET UNITYSDK_OFFSET(0xBF71C50)
#define CLASS_1_45DC68B964F2CEB3_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0xBF71940)
#define CLASS_1_45DC68B964F2CEB3_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBF70FE0)
#define CLASS_1_45DC68B964F2CEB3_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBF70A60)
#define CLASS_1_45DC68B964F2CEB3_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xBF70B60)
#define CLASS_1_45DC68B964F2CEB3_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0xBF70B00)
#define CLASS_1_45DC68B964F2CEB3_GET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0xBF70B20)
#define CLASS_1_45DC68B964F2CEB3_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xBF70BB0)
#define CLASS_1_45DC68B964F2CEB3_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0xBF70B40)
#define CLASS_1_45DC68B964F2CEB3_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xBF70BD0)
#define CLASS_1_45DC68B964F2CEB3_GET_ID_OFFSET UNITYSDK_OFFSET(0xBF70AD0)
#define CLASS_1_45DC68B964F2CEB3_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xBF70C30)
#define CLASS_1_45DC68B964F2CEB3_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBF70C50)
#define CLASS_1_45DC68B964F2CEB3_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xBF70CB0)
#define CLASS_1_45DC68B964F2CEB3_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xBF70C70)
#define CLASS_1_45DC68B964F2CEB3_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xBF70C90)
#define CLASS_1_45DC68B964F2CEB3_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xBF70BF0)
#define CLASS_1_45DC68B964F2CEB3_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xBF70C10)
#define CLASS_1_45DC68B964F2CEB3_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xBF70AF0)
#define CLASS_1_45DC68B964F2CEB3_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xBF70B90)
#define CLASS_1_45DC68B964F2CEB3_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xBF70B70)
#define CLASS_1_45DC68B964F2CEB3_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0xBF71DD0)
#define CLASS_1_45DC68B964F2CEB3_SET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0xBF70B10)
#define CLASS_1_45DC68B964F2CEB3_SET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0xBF70B30)
#define CLASS_1_45DC68B964F2CEB3_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xBF70BC0)
#define CLASS_1_45DC68B964F2CEB3_SET_FILESIZE_OFFSET UNITYSDK_OFFSET(0xBF70B50)
#define CLASS_1_45DC68B964F2CEB3_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xBF70BE0)
#define CLASS_1_45DC68B964F2CEB3_SET_ID_OFFSET UNITYSDK_OFFSET(0xBF70AE0)
#define CLASS_1_45DC68B964F2CEB3_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xBF70C40)
#define CLASS_1_45DC68B964F2CEB3_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBF70C60)
#define CLASS_1_45DC68B964F2CEB3_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xBF70CC0)
#define CLASS_1_45DC68B964F2CEB3_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xBF70C80)
#define CLASS_1_45DC68B964F2CEB3_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xBF70CA0)
#define CLASS_1_45DC68B964F2CEB3_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xBF70C00)
#define CLASS_1_45DC68B964F2CEB3_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xBF70C20)
#define CLASS_1_45DC68B964F2CEB3_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xBF70BA0)
#define CLASS_1_45DC68B964F2CEB3_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xBF70B80)
#define CLASS_1_45DC68B964F2CEB3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBF71E80)
#define CLASS_1_45DC68B964F2CEB3_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xBF71E40)
#define CLASS_1_45DC68B964F2CEB3__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBF70E60)
#define CLASS_1_45DC68B964F2CEB3__CTOR_OFFSET UNITYSDK_OFFSET(0xBF70CD0)

inline static constexpr unsigned int Class_1_45DC68B964F2CEB3_TypeDefinitionIndex = 59705;

class Class_1_45DC68B964F2CEB3 : public ::System::Object
{
public:
	::Class_1_630CB84C93B59414* MIPPNCGOJNM; // 0x10
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* _OnStarting_k__BackingField; // 0x18
	::Class_3_3B91E9B720B814BB* NMONANBKHDM; // 0x20
	::System::String* _AssetName_k__BackingField; // 0x28
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* _OnSucceed_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_652* APPIHABBCGK; // 0x38
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x40
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnItemFailed_k__BackingField; // 0x48
	::Class_2_54CCD44980580DB7* HLPMFMHBAMP; // 0x50
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnFailed_k__BackingField; // 0x58
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x60
	::System::Func_2<::Class_1_630CB84C93B59414*, ::RPG::Client::ExeCode>* AHPAGHBCLIL; // 0x68
	::Class_1_8CA784D26D9A6CF7* FEICCPBBIHG; // 0x70
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x78
	::RPG::Client::ByteHash16 _ContentHash_k__BackingField; // 0x80
	::System::Int32 _TotalCount_k__BackingField; // 0x90
	::System::Int64 _FileSize_k__BackingField; // 0x98
	::System::Int32 _FailureCount_k__BackingField; // 0xA0
	::System::Int32 _SuccessCount_k__BackingField; // 0xA4
	::RPG::Client::ProgressID _ID_k__BackingField; // 0xA8
	::System::Int32 _FinishCount_k__BackingField; // 0xAC

	::System::Void _ctor(::RPG::Client::ProgressID a1, ::Class_1_8CA784D26D9A6CF7* a2, ::Class_0_16E4307DCC419505_652* a3, ::System::String* a4, ::RPG::Client::ByteHash16 a5, ::System::Int64 a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_8CA784D26D9A6CF7*, ::Class_0_16E4307DCC419505_652*, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_1(::RPG::Client::ProgressID a1, ::Class_1_8CA784D26D9A6CF7* a2, ::Class_0_16E4307DCC419505_652* a3, ::Class_3_3B91E9B720B814BB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_8CA784D26D9A6CF7*, ::Class_0_16E4307DCC419505_652*, ::Class_3_3B91E9B720B814BB*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::RPG::Client::ProgressID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ID_OFFSET))(this, a1);
	}

	::Class_1_8CA784D26D9A6CF7* get_RootQueue()
	{
		return ((::Class_1_8CA784D26D9A6CF7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ROOTQUEUE_OFFSET))(this);
	}

	::System::String* get_AssetName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ASSETNAME_OFFSET))(this);
	}

	::System::Void set_AssetName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ASSETNAME_OFFSET))(this, a1);
	}

	::RPG::Client::ByteHash16 get_ContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_CONTENTHASH_OFFSET))(this);
	}

	::System::Void set_ContentHash(::RPG::Client::ByteHash16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_CONTENTHASH_OFFSET))(this, a1);
	}

	::System::Int64 get_FileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_FILESIZE_OFFSET))(this);
	}

	::System::Void set_FileSize(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_FILESIZE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_651* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_651*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_TOTALCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Void set_SuccessCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_SUCCESSCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Void set_FailureCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_FAILURECOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_FINISHCOUNT_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONFAILED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONFINISH_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONITEMSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONITEMSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONITEMFAILED_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Void UpdateProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_UPDATEPROGRESS_OFFSET))(this);
	}

	::System::Void DoFailed(::Class_2_BF47C01E9CFEA39C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_DOFAILED_OFFSET))(this, a1);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_DOSUCCEED_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_TOSTRING_OFFSET))(this);
	}
};
