#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Promises/ProgressHandler.h"
#include "unitysdk/RPG/Client/Promises/PromiseState.h"
#include "unitysdk/RPG/Client/Promises/Promise_ResolveHandler.h"
#include "unitysdk/RPG/Client/Promises/RejectHandler.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class ExceptionEventArgs; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class IPromiseInfo; }
namespace RPG::Client::Promises { class IRejectable; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class EventHandler_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROMISES_PROMISE_ACTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CBE1040)
#define RPG_CLIENT_PROMISES_PROMISE_ADDPROGRESSHANDLER_OFFSET UNITYSDK_OFFSET(0x1CBE0430)
#define RPG_CLIENT_PROMISES_PROMISE_ADDREJECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1CBE0290)
#define RPG_CLIENT_PROMISES_PROMISE_ADDRESOLVEHANDLER_OFFSET UNITYSDK_OFFSET(0x1CBE0360)
#define RPG_CLIENT_PROMISES_PROMISE_ADD_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1CBDF900)
#define RPG_CLIENT_PROMISES_PROMISE_ALL_1_OFFSET UNITYSDK_OFFSET(0x1CBE2200)
#define RPG_CLIENT_PROMISES_PROMISE_ALL_OFFSET UNITYSDK_OFFSET(0x1CBE21D0)
#define RPG_CLIENT_PROMISES_PROMISE_CATCH_OFFSET UNITYSDK_OFFSET(0x1CBE0D40)
#define RPG_CLIENT_PROMISES_PROMISE_CLEARHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CBE0830)
#define RPG_CLIENT_PROMISES_PROMISE_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x1CBE2F50)
#define RPG_CLIENT_PROMISES_PROMISE_DONE_1_OFFSET UNITYSDK_OFFSET(0x1CBE0F30)
#define RPG_CLIENT_PROMISES_PROMISE_DONE_2_OFFSET UNITYSDK_OFFSET(0x1CBE0FC0)
#define RPG_CLIENT_PROMISES_PROMISE_DONE_OFFSET UNITYSDK_OFFSET(0x1CBE0C80)
#define RPG_CLIENT_PROMISES_PROMISE_FINALLY_OFFSET UNITYSDK_OFFSET(0x1CBE2BD0)
#define RPG_CLIENT_PROMISES_PROMISE_GETPENDINGPROMISES_OFFSET UNITYSDK_OFFSET(0x1CBDF9E0)
#define RPG_CLIENT_PROMISES_PROMISE_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1CBDFA40)
#define RPG_CLIENT_PROMISES_PROMISE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CBDFA10)
#define RPG_CLIENT_PROMISES_PROMISE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CBDFA20)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKEPROGRESSHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CBE0990)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKEPROGRESSHANDLER_OFFSET UNITYSDK_OFFSET(0x1CBE0720)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKEREJECTHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CBE0840)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKEREJECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1CBE0500)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKERESOLVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CBE08F0)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKERESOLVEHANDLER_OFFSET UNITYSDK_OFFSET(0x1CBE0610)
#define RPG_CLIENT_PROMISES_PROMISE_NEXTID_OFFSET UNITYSDK_OFFSET(0x1CBDFB40)
#define RPG_CLIENT_PROMISES_PROMISE_PROGRESSHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CBE1210)
#define RPG_CLIENT_PROMISES_PROMISE_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1CBE31D0)
#define RPG_CLIENT_PROMISES_PROMISE_PROPAGATEUNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1CBE32A0)
#define RPG_CLIENT_PROMISES_PROMISE_RACE_1_OFFSET UNITYSDK_OFFSET(0x1CBE2A50)
#define RPG_CLIENT_PROMISES_PROMISE_RACE_OFFSET UNITYSDK_OFFSET(0x1CBE2A20)
#define RPG_CLIENT_PROMISES_PROMISE_REJECTED_OFFSET UNITYSDK_OFFSET(0x1CBE2090)
#define RPG_CLIENT_PROMISES_PROMISE_REJECT_OFFSET UNITYSDK_OFFSET(0x1CBE00D0)
#define RPG_CLIENT_PROMISES_PROMISE_REMOVE_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1CBDF970)
#define RPG_CLIENT_PROMISES_PROMISE_REPORTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CBE0BA0)
#define RPG_CLIENT_PROMISES_PROMISE_RESOLVED_OFFSET UNITYSDK_OFFSET(0x1CBE2BA0)
#define RPG_CLIENT_PROMISES_PROMISE_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1CBE0A30)
#define RPG_CLIENT_PROMISES_PROMISE_SEQUENCE_1_OFFSET UNITYSDK_OFFSET(0x1CBE2440)
#define RPG_CLIENT_PROMISES_PROMISE_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1CBE2410)
#define RPG_CLIENT_PROMISES_PROMISE_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1CBDFA50)
#define RPG_CLIENT_PROMISES_PROMISE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1CBDFA30)
#define RPG_CLIENT_PROMISES_PROMISE_THENALL_OFFSET UNITYSDK_OFFSET(0x1CBE2110)
#define RPG_CLIENT_PROMISES_PROMISE_THENLUAACTION_OFFSET UNITYSDK_OFFSET(0x1CBE2060)
#define RPG_CLIENT_PROMISES_PROMISE_THENLUAFUNCIPROMISE_OFFSET UNITYSDK_OFFSET(0x1CBE19A0)
#define RPG_CLIENT_PROMISES_PROMISE_THENRACE_OFFSET UNITYSDK_OFFSET(0x1CBE2960)
#define RPG_CLIENT_PROMISES_PROMISE_THENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1CBE2350)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_1_OFFSET UNITYSDK_OFFSET(0x1CBE0FB0)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_2_OFFSET UNITYSDK_OFFSET(0x1CBE2070)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_3_OFFSET UNITYSDK_OFFSET(0x1CBE0D30)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_4_OFFSET UNITYSDK_OFFSET(0x1CBE12F0)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_5_OFFSET UNITYSDK_OFFSET(0x1CBE19B0)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_OFFSET UNITYSDK_OFFSET(0x1CBE12E0)
#define RPG_CLIENT_PROMISES_PROMISE_WITHNAME_OFFSET UNITYSDK_OFFSET(0x1CBE1020)
#define RPG_CLIENT_PROMISES_PROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBE33D0)
#define RPG_CLIENT_PROMISES_PROMISE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBDFB70)
#define RPG_CLIENT_PROMISES_PROMISE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CBE0240)
#define RPG_CLIENT_PROMISES_PROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDFA60)
#define RPG_CLIENT_PROMISES_PROMISE__DONE_B__41_0_OFFSET UNITYSDK_OFFSET(0x1CBE34F0)
#define RPG_CLIENT_PROMISES_PROMISE__DONE_B__42_0_OFFSET UNITYSDK_OFFSET(0x1CBE3530)
#define RPG_CLIENT_PROMISES_PROMISE__DONE_B__43_0_OFFSET UNITYSDK_OFFSET(0x1CBE3570)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_TypeDefinitionIndex = 9913;

	class Promise : public ::System::Object
	{
	public:
		static ::RPG::Client::Promises::IPromise** StaticGet_resolvedPromise()
		{
			return (::RPG::Client::Promises::IPromise**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x6B0);
		}
		static ::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>** StaticGet_unhandlerException()
		{
			return (::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x6B8);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::Promises::IPromiseInfo*>** StaticGet_PendingPromises()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::Promises::IPromiseInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x6C0);
		}
		static ::System::Boolean* StaticGet_EnablePromiseTracking()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x4A0);
		}
		static ::System::Int32* StaticGet_nextPromiseId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x4A4);
		}
		::System::String* _Name_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::Promises::RejectHandler>* rejectHandlers; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Promises::Promise_ResolveHandler>* resolveHandlers; // 0x20
		::System::Exception* rejectionException; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::Promises::ProgressHandler>* progressHandlers; // 0x30
		::RPG::Client::Promises::PromiseState _CurState_k__BackingField; // 0x38
		::System::Int32 id; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::RPG::Client::Promises::PromiseState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::PromiseState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__CCTOR_OFFSET))();
		}

		static ::System::Void add_UnhandledException(::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>* a1)
		{
			return ((::System::Void(*)(::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ADD_UNHANDLEDEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void remove_UnhandledException(::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>* a1)
		{
			return ((::System::Void(*)(::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_REMOVE_UNHANDLEDEXCEPTION_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromiseInfo*>* GetPendingPromises()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromiseInfo*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_GETPENDINGPROMISES_OFFSET))();
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_GET_ID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::PromiseState get_CurState()
		{
			return ((::RPG::Client::Promises::PromiseState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_GET_CURSTATE_OFFSET))(this);
		}

		::System::Void set_CurState(::RPG::Client::Promises::PromiseState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::PromiseState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_SET_CURSTATE_OFFSET))(this, a1);
		}

		static ::System::Int32 NextId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_NEXTID_OFFSET))();
		}

		::System::Void AddRejectHandler(::System::Action_1<::System::Exception*>* a1, ::RPG::Client::Promises::IRejectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::RPG::Client::Promises::IRejectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ADDREJECTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void AddResolveHandler(::System::Action* a1, ::RPG::Client::Promises::IRejectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::RPG::Client::Promises::IRejectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ADDRESOLVEHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void AddProgressHandler(::System::Action_1<::System::Single>* a1, ::RPG::Client::Promises::IRejectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::RPG::Client::Promises::IRejectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ADDPROGRESSHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void InvokeRejectHandler(::System::Action_1<::System::Exception*>* a1, ::RPG::Client::Promises::IRejectable* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::RPG::Client::Promises::IRejectable*, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKEREJECTHANDLER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InvokeResolveHandler(::System::Action* a1, ::RPG::Client::Promises::IRejectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::RPG::Client::Promises::IRejectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKERESOLVEHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void InvokeProgressHandler(::System::Action_1<::System::Single>* a1, ::RPG::Client::Promises::IRejectable* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::RPG::Client::Promises::IRejectable*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKEPROGRESSHANDLER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_CLEARHANDLERS_OFFSET))(this);
		}

		::System::Void InvokeRejectHandlers(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKEREJECTHANDLERS_OFFSET))(this, a1);
		}

		::System::Void InvokeResolveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKERESOLVEHANDLERS_OFFSET))(this);
		}

		::System::Void InvokeProgressHandlers(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKEPROGRESSHANDLERS_OFFSET))(this, a1);
		}

		::System::Void Reject(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_REJECT_OFFSET))(this, a1);
		}

		::System::Void Resolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_RESOLVE_OFFSET))(this);
		}

		::System::Void ReportProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_REPORTPROGRESS_OFFSET))(this, a1);
		}

		::System::Void Done(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_DONE_OFFSET))(this, a1, a2);
		}

		::System::Void Done_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_DONE_1_OFFSET))(this, a1);
		}

		::System::Void Done_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_DONE_2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* WithName(::System::String* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_WITHNAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* Catch(::System::Action_1<::System::Exception*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_CATCH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* Then(::System::Func_1<::RPG::Client::Promises::IPromise*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ThenLuaFuncIPromise(::System::Func_1<::RPG::Client::Promises::IPromise*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THENLUAFUNCIPROMISE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* Then_1(::System::Action* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ThenLuaAction(::System::Action* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THENLUAACTION_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* Then_2(::System::Func_1<::RPG::Client::Promises::IPromise*>* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_2_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* Then_3(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_3_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* Then_4(::System::Func_1<::RPG::Client::Promises::IPromise*>* a1, ::System::Action_1<::System::Exception*>* a2, ::System::Action_1<::System::Single>* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*, ::System::Action_1<::System::Exception*>*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_4_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* Then_5(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2, ::System::Action_1<::System::Single>* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ActionHandlers(::RPG::Client::Promises::IRejectable* a1, ::System::Action* a2, ::System::Action_1<::System::Exception*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::IRejectable*, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ACTIONHANDLERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ProgressHandlers(::RPG::Client::Promises::IRejectable* a1, ::System::Action_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::IRejectable*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_PROGRESSHANDLERS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* ThenAll(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THENALL_OFFSET))(this, a1);
		}

		static ::RPG::Client::Promises::IPromise* All(::Il2CppArray<::RPG::Client::Promises::IPromise*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Il2CppArray<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ALL_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* All_1(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ALL_1_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* ThenSequence(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THENSEQUENCE_OFFSET))(this, a1);
		}

		static ::RPG::Client::Promises::IPromise* Sequence(::Il2CppArray<::System::Func_1<::RPG::Client::Promises::IPromise*>*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Il2CppArray<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_SEQUENCE_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* Sequence_1(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_SEQUENCE_1_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* ThenRace(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THENRACE_OFFSET))(this, a1);
		}

		static ::RPG::Client::Promises::IPromise* Race(::Il2CppArray<::RPG::Client::Promises::IPromise*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Il2CppArray<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_RACE_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* Race_1(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_RACE_1_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* Resolved()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_RESOLVED_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* Rejected(::System::Exception* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_REJECTED_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* Finally(::System::Action* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_FINALLY_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ContinueWith(::System::Func_1<::RPG::Client::Promises::IPromise*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_CONTINUEWITH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* Progress(::System::Action_1<::System::Single>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_PROGRESS_OFFSET))(this, a1);
		}

		static ::System::Void PropagateUnhandledException(::System::Object* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_PROPAGATEUNHANDLEDEXCEPTION_OFFSET))(a1, a2);
		}

		::System::Void _Done_b__41_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__DONE_B__41_0_OFFSET))(this, a1);
		}

		::System::Void _Done_b__42_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__DONE_B__42_0_OFFSET))(this, a1);
		}

		::System::Void _Done_b__43_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__DONE_B__43_0_OFFSET))(this, a1);
		}
	};
}
