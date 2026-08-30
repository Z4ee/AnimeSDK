#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_651;
class Class_0_16E4307DCC419505_652;
class Class_0_16E4307DCC419505_87;
class Class_1_630CB84C93B59414;
class Class_1_8CA784D26D9A6CF7;
class Class_1_C942E00FA899FA77_Class_1_BF22BE5E9FE7CF7F;
class Class_2_54CCD44980580DB7;
class Class_2_BF47C01E9CFEA39C;
namespace RPG::Client { class VersionUpdateProgressInfo; }
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C942E00FA899FA77_DOFAILED_OFFSET UNITYSDK_OFFSET(0x12E96850)
#define CLASS_1_C942E00FA899FA77_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x12E962C0)
#define CLASS_1_C942E00FA899FA77_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12E95150)
#define CLASS_1_C942E00FA899FA77_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x12E94B40)
#define CLASS_1_C942E00FA899FA77_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x12E94BF0)
#define CLASS_1_C942E00FA899FA77_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x12E94C40)
#define CLASS_1_C942E00FA899FA77_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x12E94C60)
#define CLASS_1_C942E00FA899FA77_GET_ID_OFFSET UNITYSDK_OFFSET(0x12E94BB0)
#define CLASS_1_C942E00FA899FA77_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x12E94CC0)
#define CLASS_1_C942E00FA899FA77_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x12E94CE0)
#define CLASS_1_C942E00FA899FA77_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x12E94D40)
#define CLASS_1_C942E00FA899FA77_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x12E94D00)
#define CLASS_1_C942E00FA899FA77_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x12E94D20)
#define CLASS_1_C942E00FA899FA77_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x12E94C80)
#define CLASS_1_C942E00FA899FA77_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x12E94CA0)
#define CLASS_1_C942E00FA899FA77_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x12E94BE0)
#define CLASS_1_C942E00FA899FA77_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x12E94C20)
#define CLASS_1_C942E00FA899FA77_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x12E94C00)
#define CLASS_1_C942E00FA899FA77_METHOD_1_292435743009A063_OFFSET UNITYSDK_OFFSET(0x12E96730)
#define CLASS_1_C942E00FA899FA77_METHOD_1_2C5F9CB6FEFD362C_OFFSET UNITYSDK_OFFSET(0x12E96BF0)
#define CLASS_1_C942E00FA899FA77_METHOD_1_6B4CC9FEC403294B_OFFSET UNITYSDK_OFFSET(0x12E969F0)
#define CLASS_1_C942E00FA899FA77_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x12E94BD0)
#define CLASS_1_C942E00FA899FA77_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x12E96430)
#define CLASS_1_C942E00FA899FA77_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x12E966C0)
#define CLASS_1_C942E00FA899FA77_METHOD_1_DEB098A0DC45469E_OFFSET UNITYSDK_OFFSET(0x12E94F10)
#define CLASS_1_C942E00FA899FA77_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x12E94C50)
#define CLASS_1_C942E00FA899FA77_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x12E94C70)
#define CLASS_1_C942E00FA899FA77_SET_ID_OFFSET UNITYSDK_OFFSET(0x12E94BC0)
#define CLASS_1_C942E00FA899FA77_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x12E94CD0)
#define CLASS_1_C942E00FA899FA77_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x12E94CF0)
#define CLASS_1_C942E00FA899FA77_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x12E94D50)
#define CLASS_1_C942E00FA899FA77_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x12E94D10)
#define CLASS_1_C942E00FA899FA77_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x12E94D30)
#define CLASS_1_C942E00FA899FA77_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x12E94C90)
#define CLASS_1_C942E00FA899FA77_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x12E94CB0)
#define CLASS_1_C942E00FA899FA77_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x12E94C30)
#define CLASS_1_C942E00FA899FA77_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x12E94C10)
#define CLASS_1_C942E00FA899FA77_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x12E96B90)
#define CLASS_1_C942E00FA899FA77__CTOR_OFFSET UNITYSDK_OFFSET(0x12E94D60)

inline static constexpr unsigned int Class_1_C942E00FA899FA77_TypeDefinitionIndex = 59694;

class Class_1_C942E00FA899FA77 : public ::System::Object
{
public:
	::Class_1_630CB84C93B59414* MIPPNCGOJNM; // 0x10
	::System::String* EMKBAECEJEP; // 0x18
	::Class_1_8CA784D26D9A6CF7* FEICCPBBIHG; // 0x20
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnItemFailed_k__BackingField; // 0x28
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x30
	::System::String* MNFCECOFEHK; // 0x38
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* _OnSucceed_k__BackingField; // 0x40
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnFailed_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::Class_1_C942E00FA899FA77_Class_1_BF22BE5E9FE7CF7F*>* AALBFNGDCGI; // 0x50
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x58
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x60
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* _OnStarting_k__BackingField; // 0x68
	::Class_2_54CCD44980580DB7* HLPMFMHBAMP; // 0x70
	::RPG::Client::TextID EMPDPJLAHHG; // 0x78
	::System::Int64 AMGIJIELHFI; // 0x88
	::System::Boolean LDGJHAPDMLM; // 0x90
	::System::Boolean EFLEIEELLLI; // 0x91
	::System::Int32 IKMIGDGILIB; // 0x94
	::RPG::Client::NotifyType BBMGOLIHLMD; // 0x98
	::RPG::Client::NotifyType DFIHEOOHNPO; // 0x9C
	::RPG::Client::TextID OFFMEOODAED; // 0xA0
	::System::Int32 _FinishCount_k__BackingField; // 0xB0
	::System::Int32 _SuccessCount_k__BackingField; // 0xB4
	::System::Int32 _TotalCount_k__BackingField; // 0xB8
	::RPG::Client::ProgressID _ID_k__BackingField; // 0xBC
	::System::Int32 _FailureCount_k__BackingField; // 0xC0

	::System::Void _ctor(::RPG::Client::ProgressID a1, ::Class_1_8CA784D26D9A6CF7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_8CA784D26D9A6CF7*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::RPG::Client::ProgressID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ID_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::Class_1_8CA784D26D9A6CF7* get_RootQueue()
	{
		return ((::Class_1_8CA784D26D9A6CF7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ROOTQUEUE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_651* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_651*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_TOTALCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Void set_SuccessCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_SUCCESSCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Void set_FailureCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_FAILURECOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_FINISHCOUNT_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONFAILED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONFINISH_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONITEMSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONITEMSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONITEMFAILED_OFFSET))(this, a1);
	}

	::Class_1_C942E00FA899FA77* Method_1_DEB098A0DC45469E(::Class_0_16E4307DCC419505_652* a1, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::Class_1_C942E00FA899FA77*(*)(::PVOID, ::Class_0_16E4307DCC419505_652*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_METHOD_1_DEB098A0DC45469E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_METHOD_1_8F059A365E90744C_OFFSET))(this);
	}

	::System::Void Method_1_292435743009A063(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_METHOD_1_292435743009A063_OFFSET))(this, a1);
	}

	::System::Void DoFailed(::Class_2_BF47C01E9CFEA39C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_DOFAILED_OFFSET))(this, a1);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_DOSUCCEED_OFFSET))(this);
	}

	::System::Void UpdateProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_UPDATEPROGRESS_OFFSET))(this);
	}

	::System::Void Method_1_6B4CC9FEC403294B(::RPG::Client::NotifyType a1, ::System::String* a2, ::RPG::Client::TextID a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_METHOD_1_6B4CC9FEC403294B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2C5F9CB6FEFD362C(::RPG::Client::VersionUpdateProgressInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VersionUpdateProgressInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_METHOD_1_2C5F9CB6FEFD362C_OFFSET))(this, a1);
	}
};
