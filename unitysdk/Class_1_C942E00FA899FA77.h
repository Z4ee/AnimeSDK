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

#define CLASS_1_C942E00FA899FA77_DOFAILED_OFFSET UNITYSDK_OFFSET(0x18835140)
#define CLASS_1_C942E00FA899FA77_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x18834BB0)
#define CLASS_1_C942E00FA899FA77_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18833A50)
#define CLASS_1_C942E00FA899FA77_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x18833440)
#define CLASS_1_C942E00FA899FA77_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x188334F0)
#define CLASS_1_C942E00FA899FA77_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x18833540)
#define CLASS_1_C942E00FA899FA77_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x18833560)
#define CLASS_1_C942E00FA899FA77_GET_ID_OFFSET UNITYSDK_OFFSET(0x188334B0)
#define CLASS_1_C942E00FA899FA77_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x188335C0)
#define CLASS_1_C942E00FA899FA77_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x188335E0)
#define CLASS_1_C942E00FA899FA77_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x18833640)
#define CLASS_1_C942E00FA899FA77_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x18833600)
#define CLASS_1_C942E00FA899FA77_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x18833620)
#define CLASS_1_C942E00FA899FA77_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x18833580)
#define CLASS_1_C942E00FA899FA77_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x188335A0)
#define CLASS_1_C942E00FA899FA77_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x188334E0)
#define CLASS_1_C942E00FA899FA77_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x18833520)
#define CLASS_1_C942E00FA899FA77_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x18833500)
#define CLASS_1_C942E00FA899FA77_METHOD_1_292435743009A063_OFFSET UNITYSDK_OFFSET(0x18835020)
#define CLASS_1_C942E00FA899FA77_METHOD_1_2C5F9CB6FEFD362C_OFFSET UNITYSDK_OFFSET(0x188354F0)
#define CLASS_1_C942E00FA899FA77_METHOD_1_6B4CC9FEC403294B_OFFSET UNITYSDK_OFFSET(0x188352F0)
#define CLASS_1_C942E00FA899FA77_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x188334D0)
#define CLASS_1_C942E00FA899FA77_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x18834D20)
#define CLASS_1_C942E00FA899FA77_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x18834FB0)
#define CLASS_1_C942E00FA899FA77_METHOD_1_DEB098A0DC45469E_OFFSET UNITYSDK_OFFSET(0x18833810)
#define CLASS_1_C942E00FA899FA77_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x18833550)
#define CLASS_1_C942E00FA899FA77_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x18833570)
#define CLASS_1_C942E00FA899FA77_SET_ID_OFFSET UNITYSDK_OFFSET(0x188334C0)
#define CLASS_1_C942E00FA899FA77_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x188335D0)
#define CLASS_1_C942E00FA899FA77_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x188335F0)
#define CLASS_1_C942E00FA899FA77_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x18833650)
#define CLASS_1_C942E00FA899FA77_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x18833610)
#define CLASS_1_C942E00FA899FA77_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x18833630)
#define CLASS_1_C942E00FA899FA77_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x18833590)
#define CLASS_1_C942E00FA899FA77_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x188335B0)
#define CLASS_1_C942E00FA899FA77_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x18833530)
#define CLASS_1_C942E00FA899FA77_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x18833510)
#define CLASS_1_C942E00FA899FA77_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x18835490)
#define CLASS_1_C942E00FA899FA77__CTOR_OFFSET UNITYSDK_OFFSET(0x18833660)

inline static constexpr unsigned int Class_1_C942E00FA899FA77_TypeDefinitionIndex = 59694;

class Class_1_C942E00FA899FA77 : public ::System::Object
{
public:
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnItemFailed_k__BackingField; // 0x10
	::Class_1_630CB84C93B59414* MIPPNCGOJNM; // 0x18
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* _OnSucceed_k__BackingField; // 0x20
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x28
	::System::String* MNFCECOFEHK; // 0x30
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x38
	::Class_2_54CCD44980580DB7* HLPMFMHBAMP; // 0x40
	::System::String* EMKBAECEJEP; // 0x48
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnFailed_k__BackingField; // 0x50
	::Class_1_8CA784D26D9A6CF7* FEICCPBBIHG; // 0x58
	::System::Collections::Generic::List_1<::Class_1_C942E00FA899FA77_Class_1_BF22BE5E9FE7CF7F*>* AALBFNGDCGI; // 0x60
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_650*>* _OnStarting_k__BackingField; // 0x68
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x70
	::System::Int64 AMGIJIELHFI; // 0x78
	::System::Int32 _SuccessCount_k__BackingField; // 0x80
	::RPG::Client::TextID EMPDPJLAHHG; // 0x88
	::RPG::Client::TextID OFFMEOODAED; // 0x98
	::System::Int32 _FailureCount_k__BackingField; // 0xA8
	::System::Int32 _TotalCount_k__BackingField; // 0xAC
	::System::Int32 IKMIGDGILIB; // 0xB0
	::RPG::Client::NotifyType BBMGOLIHLMD; // 0xB4
	::RPG::Client::ProgressID _ID_k__BackingField; // 0xB8
	::RPG::Client::NotifyType DFIHEOOHNPO; // 0xBC
	::System::Int32 _FinishCount_k__BackingField; // 0xC0
	::System::Boolean EFLEIEELLLI; // 0xC4
	::System::Boolean LDGJHAPDMLM; // 0xC5

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
