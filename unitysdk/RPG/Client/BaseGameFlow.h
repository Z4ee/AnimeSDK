#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameFlowState.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_628;
class Class_1_3B36CE63D36E9917;
class Class_1_4B24D105CCEA2C22;
class Class_1_55E0DCB5B100101B;
class Class_1_A052F48AC136DF88;
class Class_1_B823313B2CC4BC8E;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BASEGAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x9DD32E0)
#define RPG_CLIENT_BASEGAMEFLOW_CHECKCANGOTO_OFFSET UNITYSDK_OFFSET(0x9DD3A60)
#define RPG_CLIENT_BASEGAMEFLOW_DESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x9DD3C50)
#define RPG_CLIENT_BASEGAMEFLOW_ENTERFAILED_OFFSET UNITYSDK_OFFSET(0x9DD33C0)
#define RPG_CLIENT_BASEGAMEFLOW_ENTER_OFFSET UNITYSDK_OFFSET(0x9DD3320)
#define RPG_CLIENT_BASEGAMEFLOW_EXIT_OFFSET UNITYSDK_OFFSET(0x9DD3510)
#define RPG_CLIENT_BASEGAMEFLOW_GET_ISAUTOEXITONLASTDETACH_OFFSET UNITYSDK_OFFSET(0x9DD2FC0)
#define RPG_CLIENT_BASEGAMEFLOW_GET_ISNEEDAUTOEXIT_OFFSET UNITYSDK_OFFSET(0x9DD2FE0)
#define RPG_CLIENT_BASEGAMEFLOW_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9DD2FA0)
#define RPG_CLIENT_BASEGAMEFLOW_INIT_OFFSET UNITYSDK_OFFSET(0x9DD3280)
#define RPG_CLIENT_BASEGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x9DD3E50)
#define RPG_CLIENT_BASEGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x9DD3E10)
#define RPG_CLIENT_BASEGAMEFLOW_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0x9DD3B60)
#define RPG_CLIENT_BASEGAMEFLOW_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x9DD3BD0)
#define RPG_CLIENT_BASEGAMEFLOW_SET_ISAUTOEXITONLASTDETACH_OFFSET UNITYSDK_OFFSET(0x9DD2FD0)
#define RPG_CLIENT_BASEGAMEFLOW_SET_STATE_OFFSET UNITYSDK_OFFSET(0x9DD2FB0)
#define RPG_CLIENT_BASEGAMEFLOW__ATTACH_OFFSET UNITYSDK_OFFSET(0x9DD3FF0)
#define RPG_CLIENT_BASEGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD3070)
#define RPG_CLIENT_BASEGAMEFLOW__DESTROY_OFFSET UNITYSDK_OFFSET(0x9DD3480)
#define RPG_CLIENT_BASEGAMEFLOW__DETACHALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x9DD3680)
#define RPG_CLIENT_BASEGAMEFLOW__DETACHCONTEXT_OFFSET UNITYSDK_OFFSET(0x9DD3D30)
#define RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0x9DD3F10)
#define RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x9DD3F60)
#define RPG_CLIENT_BASEGAMEFLOW__ONENTERFAILED_OFFSET UNITYSDK_OFFSET(0x9DD3ED0)
#define RPG_CLIENT_BASEGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0x9DD3FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGameFlow_TypeDefinitionIndex = 59183;

	class BaseGameFlow : public ::System::Object
	{
	public:
		::Class_1_A052F48AC136DF88* ContextFactory; // 0x10
		::Class_1_4B24D105CCEA2C22* MessageRegistry; // 0x18
		::Class_1_55E0DCB5B100101B* ContextRegistry; // 0x20
		::Class_1_3B36CE63D36E9917* EventRegistry; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Parameters; // 0x30
		::RPG::Client::GameFlowState _State_k__BackingField; // 0x38
		::System::Boolean _IsAutoExitOnLastDetach_k__BackingField; // 0x3C

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__CTOR_OFFSET))(this, parameters);
		}

		::RPG::Client::GameFlowState get_State()
		{
			return ((::RPG::Client::GameFlowState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::GameFlowState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameFlowState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_SET_STATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsAutoExitOnLastDetach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_GET_ISAUTOEXITONLASTDETACH_OFFSET))(this);
		}

		::System::Void set_IsAutoExitOnLastDetach(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_SET_ISAUTOEXITONLASTDETACH_OFFSET))(this, value);
		}

		::System::Boolean get_IsNeedAutoExit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_GET_ISNEEDAUTOEXIT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_INIT_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Enter()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ENTER_OFFSET))(this);
		}

		::System::Void EnterFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ENTERFAILED_OFFSET))(this);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_EXIT_OFFSET))(this);
		}

		::System::Boolean CheckCanGoto(::Class_1_B823313B2CC4BC8E* gotoParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_CHECKCANGOTO_OFFSET))(this, gotoParams);
		}

		::System::Void ReceiveEvent(::Class_0_16E4307DCC419505_628* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_628*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_RECEIVEEVENT_OFFSET))(this, evt);
		}

		::System::Void SendMessage_(::System::Int32 message, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_SENDMESSAGE__OFFSET))(this, message, obj);
		}

		::System::Void DestroyContext(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_DESTROYCONTEXT_OFFSET))(this, context);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnEnterFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONENTERFAILED_OFFSET))(this);
		}

		::System::Void _OnContextAttached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTATTACHED_OFFSET))(this, context);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, context);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::System::Void _Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__DESTROY_OFFSET))(this);
		}

		::System::Void _Attach(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ATTACH_OFFSET))(this, context);
		}

		::System::Void _DetachAllContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__DETACHALLCONTEXTS_OFFSET))(this);
		}

		::System::Void _DetachContext(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__DETACHCONTEXT_OFFSET))(this, context);
		}
	};
}
