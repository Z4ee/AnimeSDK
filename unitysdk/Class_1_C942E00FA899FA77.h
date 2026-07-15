#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_0_16E4307DCC419505_615;
class Class_0_16E4307DCC419505_616;
class Class_0_16E4307DCC419505_87;
class Class_1_630CB84C93B59414;
class Class_1_C6B3B57B6E91674E;
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

#define CLASS_1_C942E00FA899FA77_DOFAILED_OFFSET UNITYSDK_OFFSET(0x15DEC980)
#define CLASS_1_C942E00FA899FA77_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x15DEC3C0)
#define CLASS_1_C942E00FA899FA77_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15DEB250)
#define CLASS_1_C942E00FA899FA77_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x15DEAC40)
#define CLASS_1_C942E00FA899FA77_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x15DEACF0)
#define CLASS_1_C942E00FA899FA77_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x15DEAD40)
#define CLASS_1_C942E00FA899FA77_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x15DEAD60)
#define CLASS_1_C942E00FA899FA77_GET_ID_OFFSET UNITYSDK_OFFSET(0x15DEACB0)
#define CLASS_1_C942E00FA899FA77_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x15DEADC0)
#define CLASS_1_C942E00FA899FA77_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x15DEADE0)
#define CLASS_1_C942E00FA899FA77_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x15DEAE40)
#define CLASS_1_C942E00FA899FA77_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x15DEAE00)
#define CLASS_1_C942E00FA899FA77_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x15DEAE20)
#define CLASS_1_C942E00FA899FA77_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x15DEAD80)
#define CLASS_1_C942E00FA899FA77_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x15DEADA0)
#define CLASS_1_C942E00FA899FA77_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x15DEACE0)
#define CLASS_1_C942E00FA899FA77_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x15DEAD20)
#define CLASS_1_C942E00FA899FA77_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x15DEAD00)
#define CLASS_1_C942E00FA899FA77_METHOD_1_292435743009A063_OFFSET UNITYSDK_OFFSET(0x15DEC860)
#define CLASS_1_C942E00FA899FA77_METHOD_1_3ED8334571FBD7F7_OFFSET UNITYSDK_OFFSET(0x15DECD20)
#define CLASS_1_C942E00FA899FA77_METHOD_1_6B4CC9FEC403294B_OFFSET UNITYSDK_OFFSET(0x15DECB20)
#define CLASS_1_C942E00FA899FA77_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x15DEACD0)
#define CLASS_1_C942E00FA899FA77_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x15DEC7F0)
#define CLASS_1_C942E00FA899FA77_METHOD_1_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0x15DEC530)
#define CLASS_1_C942E00FA899FA77_METHOD_1_DEB098A0DC45469E_OFFSET UNITYSDK_OFFSET(0x15DEB010)
#define CLASS_1_C942E00FA899FA77_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x15DEAD50)
#define CLASS_1_C942E00FA899FA77_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x15DEAD70)
#define CLASS_1_C942E00FA899FA77_SET_ID_OFFSET UNITYSDK_OFFSET(0x15DEACC0)
#define CLASS_1_C942E00FA899FA77_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x15DEADD0)
#define CLASS_1_C942E00FA899FA77_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x15DEADF0)
#define CLASS_1_C942E00FA899FA77_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x15DEAE50)
#define CLASS_1_C942E00FA899FA77_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x15DEAE10)
#define CLASS_1_C942E00FA899FA77_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x15DEAE30)
#define CLASS_1_C942E00FA899FA77_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x15DEAD90)
#define CLASS_1_C942E00FA899FA77_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x15DEADB0)
#define CLASS_1_C942E00FA899FA77_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x15DEAD30)
#define CLASS_1_C942E00FA899FA77_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x15DEAD10)
#define CLASS_1_C942E00FA899FA77_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x15DECCC0)
#define CLASS_1_C942E00FA899FA77__CTOR_OFFSET UNITYSDK_OFFSET(0x15DEAE60)

inline static constexpr unsigned int Class_1_C942E00FA899FA77_TypeDefinitionIndex = 56906;

class Class_1_C942E00FA899FA77 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_2_54CCD44980580DB7* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* _OnStarting_k__BackingField; // 0x28
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnItemFailed_k__BackingField; // 0x30
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x38
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* _OnSucceed_k__BackingField; // 0x40
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::Class_1_C942E00FA899FA77_Class_1_BF22BE5E9FE7CF7F*>* Field_1_8; // 0x50
	::Class_1_630CB84C93B59414* Field_1_9; // 0x58
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x60
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnFailed_k__BackingField; // 0x68
	::Class_1_C6B3B57B6E91674E* Field_1_12; // 0x70
	::RPG::Client::TextID Field_1_13; // 0x78
	::System::Int32 _FailureCount_k__BackingField; // 0x88
	::System::Int32 _SuccessCount_k__BackingField; // 0x8C
	::RPG::Client::NotifyType Field_1_16; // 0x90
	::RPG::Client::ProgressID _ID_k__BackingField; // 0x94
	::System::Boolean Field_1_18; // 0x98
	::System::Int32 Field_1_19; // 0x9C
	::RPG::Client::TextID Field_1_20; // 0xA0
	::System::Int64 Field_1_21; // 0xB0
	::RPG::Client::NotifyType Field_1_22; // 0xB8
	::System::Int32 _TotalCount_k__BackingField; // 0xBC
	::System::Int32 _FinishCount_k__BackingField; // 0xC0

	::System::Void _ctor(::RPG::Client::ProgressID a1, ::Class_1_C6B3B57B6E91674E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_C6B3B57B6E91674E*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77__CTOR_OFFSET))(this, a1, a2);
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

	::Class_1_C6B3B57B6E91674E* get_RootQueue()
	{
		return ((::Class_1_C6B3B57B6E91674E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ROOTQUEUE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_615* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_615*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ACTIONSYSTEM_OFFSET))(this);
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

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONFAILED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONFINISH_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONITEMSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONITEMSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_SET_ONITEMFAILED_OFFSET))(this, a1);
	}

	::Class_1_C942E00FA899FA77* Method_1_DEB098A0DC45469E(::Class_0_16E4307DCC419505_616* a1, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::Class_1_C942E00FA899FA77*(*)(::PVOID, ::Class_0_16E4307DCC419505_616*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_METHOD_1_DEB098A0DC45469E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Boolean Method_1_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_METHOD_1_D58849E1895DD394_OFFSET))(this);
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

	::System::Void Method_1_3ED8334571FBD7F7(::RPG::Client::VersionUpdateProgressInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VersionUpdateProgressInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C942E00FA899FA77_METHOD_1_3ED8334571FBD7F7_OFFSET))(this, a1);
	}
};
