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

#define RPG_CLIENT_PROMISES_PROMISE_ACTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x180F3DB0)
#define RPG_CLIENT_PROMISES_PROMISE_ADDPROGRESSHANDLER_OFFSET UNITYSDK_OFFSET(0x180F31F0)
#define RPG_CLIENT_PROMISES_PROMISE_ADDREJECTHANDLER_OFFSET UNITYSDK_OFFSET(0x180F30D0)
#define RPG_CLIENT_PROMISES_PROMISE_ADDRESOLVEHANDLER_OFFSET UNITYSDK_OFFSET(0x180F3160)
#define RPG_CLIENT_PROMISES_PROMISE_ADD_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x180F28F0)
#define RPG_CLIENT_PROMISES_PROMISE_ALL_1_OFFSET UNITYSDK_OFFSET(0x180F47D0)
#define RPG_CLIENT_PROMISES_PROMISE_ALL_OFFSET UNITYSDK_OFFSET(0x180F47A0)
#define RPG_CLIENT_PROMISES_PROMISE_CATCH_OFFSET UNITYSDK_OFFSET(0x180F3B50)
#define RPG_CLIENT_PROMISES_PROMISE_CLEARHANDLERS_OFFSET UNITYSDK_OFFSET(0x180F35E0)
#define RPG_CLIENT_PROMISES_PROMISE_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x180F50E0)
#define RPG_CLIENT_PROMISES_PROMISE_DONE_1_OFFSET UNITYSDK_OFFSET(0x180F3CD0)
#define RPG_CLIENT_PROMISES_PROMISE_DONE_2_OFFSET UNITYSDK_OFFSET(0x180F3D40)
#define RPG_CLIENT_PROMISES_PROMISE_DONE_OFFSET UNITYSDK_OFFSET(0x180F3AC0)
#define RPG_CLIENT_PROMISES_PROMISE_FINALLY_OFFSET UNITYSDK_OFFSET(0x180F4E80)
#define RPG_CLIENT_PROMISES_PROMISE_GETPENDINGPROMISES_OFFSET UNITYSDK_OFFSET(0x180F2A10)
#define RPG_CLIENT_PROMISES_PROMISE_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x180F2A70)
#define RPG_CLIENT_PROMISES_PROMISE_GET_ID_OFFSET UNITYSDK_OFFSET(0x180F2A40)
#define RPG_CLIENT_PROMISES_PROMISE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x180F2A50)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKEPROGRESSHANDLERS_OFFSET UNITYSDK_OFFSET(0x180F3710)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKEPROGRESSHANDLER_OFFSET UNITYSDK_OFFSET(0x180F34C0)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKEREJECTHANDLERS_OFFSET UNITYSDK_OFFSET(0x180F35F0)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKEREJECTHANDLER_OFFSET UNITYSDK_OFFSET(0x180F3280)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKERESOLVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x180F3680)
#define RPG_CLIENT_PROMISES_PROMISE_INVOKERESOLVEHANDLER_OFFSET UNITYSDK_OFFSET(0x180F33A0)
#define RPG_CLIENT_PROMISES_PROMISE_NEXTID_OFFSET UNITYSDK_OFFSET(0x180F2B70)
#define RPG_CLIENT_PROMISES_PROMISE_PROGRESSHANDLERS_OFFSET UNITYSDK_OFFSET(0x180F3EF0)
#define RPG_CLIENT_PROMISES_PROMISE_PROGRESS_OFFSET UNITYSDK_OFFSET(0x180F5250)
#define RPG_CLIENT_PROMISES_PROMISE_PROPAGATEUNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x180F52E0)
#define RPG_CLIENT_PROMISES_PROMISE_RACE_1_OFFSET UNITYSDK_OFFSET(0x180F4D10)
#define RPG_CLIENT_PROMISES_PROMISE_RACE_OFFSET UNITYSDK_OFFSET(0x180F4CE0)
#define RPG_CLIENT_PROMISES_PROMISE_REJECTED_OFFSET UNITYSDK_OFFSET(0x180F4670)
#define RPG_CLIENT_PROMISES_PROMISE_REJECT_OFFSET UNITYSDK_OFFSET(0x180F2E80)
#define RPG_CLIENT_PROMISES_PROMISE_REMOVE_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x180F2980)
#define RPG_CLIENT_PROMISES_PROMISE_REPORTPROGRESS_OFFSET UNITYSDK_OFFSET(0x180F3970)
#define RPG_CLIENT_PROMISES_PROMISE_RESOLVED_OFFSET UNITYSDK_OFFSET(0x180F4E50)
#define RPG_CLIENT_PROMISES_PROMISE_RESOLVE_OFFSET UNITYSDK_OFFSET(0x180F3790)
#define RPG_CLIENT_PROMISES_PROMISE_SEQUENCE_1_OFFSET UNITYSDK_OFFSET(0x180F49F0)
#define RPG_CLIENT_PROMISES_PROMISE_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x180F49C0)
#define RPG_CLIENT_PROMISES_PROMISE_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x180F2A80)
#define RPG_CLIENT_PROMISES_PROMISE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x180F2A60)
#define RPG_CLIENT_PROMISES_PROMISE_THENALL_OFFSET UNITYSDK_OFFSET(0x180F46F0)
#define RPG_CLIENT_PROMISES_PROMISE_THENLUAACTION_OFFSET UNITYSDK_OFFSET(0x180F4640)
#define RPG_CLIENT_PROMISES_PROMISE_THENLUAFUNCIPROMISE_OFFSET UNITYSDK_OFFSET(0x180F42E0)
#define RPG_CLIENT_PROMISES_PROMISE_THENRACE_OFFSET UNITYSDK_OFFSET(0x180F4C30)
#define RPG_CLIENT_PROMISES_PROMISE_THENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x180F4910)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_1_OFFSET UNITYSDK_OFFSET(0x180F3D30)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_2_OFFSET UNITYSDK_OFFSET(0x180F4650)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_3_OFFSET UNITYSDK_OFFSET(0x180F3B40)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_4_OFFSET UNITYSDK_OFFSET(0x180F3F90)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_5_OFFSET UNITYSDK_OFFSET(0x180F42F0)
#define RPG_CLIENT_PROMISES_PROMISE_THEN_OFFSET UNITYSDK_OFFSET(0x180F3F80)
#define RPG_CLIENT_PROMISES_PROMISE_WITHNAME_OFFSET UNITYSDK_OFFSET(0x180F3D90)
#define RPG_CLIENT_PROMISES_PROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x180F5400)
#define RPG_CLIENT_PROMISES_PROMISE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180F2BA0)
#define RPG_CLIENT_PROMISES_PROMISE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x180F3080)
#define RPG_CLIENT_PROMISES_PROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x180F2A90)
#define RPG_CLIENT_PROMISES_PROMISE__DONE_B__41_0_OFFSET UNITYSDK_OFFSET(0x180F5520)
#define RPG_CLIENT_PROMISES_PROMISE__DONE_B__42_0_OFFSET UNITYSDK_OFFSET(0x180F5560)
#define RPG_CLIENT_PROMISES_PROMISE__DONE_B__43_0_OFFSET UNITYSDK_OFFSET(0x180F55A0)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_TypeDefinitionIndex = 8661;

	class Promise : public ::System::Object
	{
	public:
		static ::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>** StaticGet_unhandlerException()
		{
			return (::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x960);
		}
		static ::RPG::Client::Promises::IPromise** StaticGet_resolvedPromise()
		{
			return (::RPG::Client::Promises::IPromise**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x968);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::Promises::IPromiseInfo*>** StaticGet_PendingPromises()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::Promises::IPromiseInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x970);
		}
		static ::System::Int32* StaticGet_nextPromiseId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x4F0);
		}
		static ::System::Boolean* StaticGet_EnablePromiseTracking()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x4F4);
		}
		::System::String* _Name_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::Promises::ProgressHandler>* progressHandlers; // 0x18
		::System::Exception* rejectionException; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::Promises::RejectHandler>* rejectHandlers; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::Promises::Promise_ResolveHandler>* resolveHandlers; // 0x30
		::System::Int32 id; // 0x38
		::RPG::Client::Promises::PromiseState _CurState_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>* resolver)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__CTOR_1_OFFSET))(this, resolver);
		}

		::System::Void _ctor_2(::RPG::Client::Promises::PromiseState initialState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::PromiseState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__CTOR_2_OFFSET))(this, initialState);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__CCTOR_OFFSET))();
		}

		static ::System::Void add_UnhandledException(::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>* value)
		{
			return ((::System::Void(*)(::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ADD_UNHANDLEDEXCEPTION_OFFSET))(value);
		}

		static ::System::Void remove_UnhandledException(::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>* value)
		{
			return ((::System::Void(*)(::System::EventHandler_1<::RPG::Client::Promises::ExceptionEventArgs*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_REMOVE_UNHANDLEDEXCEPTION_OFFSET))(value);
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

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::Promises::PromiseState get_CurState()
		{
			return ((::RPG::Client::Promises::PromiseState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_GET_CURSTATE_OFFSET))(this);
		}

		::System::Void set_CurState(::RPG::Client::Promises::PromiseState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::PromiseState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_SET_CURSTATE_OFFSET))(this, value);
		}

		static ::System::Int32 NextId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_NEXTID_OFFSET))();
		}

		::System::Void AddRejectHandler(::System::Action_1<::System::Exception*>* onRejected, ::RPG::Client::Promises::IRejectable* rejectable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::RPG::Client::Promises::IRejectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ADDREJECTHANDLER_OFFSET))(this, onRejected, rejectable);
		}

		::System::Void AddResolveHandler(::System::Action* onResolved, ::RPG::Client::Promises::IRejectable* rejectable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::RPG::Client::Promises::IRejectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ADDRESOLVEHANDLER_OFFSET))(this, onResolved, rejectable);
		}

		::System::Void AddProgressHandler(::System::Action_1<::System::Single>* onProgress, ::RPG::Client::Promises::IRejectable* rejectable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::RPG::Client::Promises::IRejectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ADDPROGRESSHANDLER_OFFSET))(this, onProgress, rejectable);
		}

		::System::Void InvokeRejectHandler(::System::Action_1<::System::Exception*>* callback, ::RPG::Client::Promises::IRejectable* rejectable, ::System::Exception* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::RPG::Client::Promises::IRejectable*, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKEREJECTHANDLER_OFFSET))(this, callback, rejectable, value);
		}

		::System::Void InvokeResolveHandler(::System::Action* callback, ::RPG::Client::Promises::IRejectable* rejectable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::RPG::Client::Promises::IRejectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKERESOLVEHANDLER_OFFSET))(this, callback, rejectable);
		}

		::System::Void InvokeProgressHandler(::System::Action_1<::System::Single>* callback, ::RPG::Client::Promises::IRejectable* rejectable, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::RPG::Client::Promises::IRejectable*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKEPROGRESSHANDLER_OFFSET))(this, callback, rejectable, progress);
		}

		::System::Void ClearHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_CLEARHANDLERS_OFFSET))(this);
		}

		::System::Void InvokeRejectHandlers(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKEREJECTHANDLERS_OFFSET))(this, ex);
		}

		::System::Void InvokeResolveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKERESOLVEHANDLERS_OFFSET))(this);
		}

		::System::Void InvokeProgressHandlers(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_INVOKEPROGRESSHANDLERS_OFFSET))(this, progress);
		}

		::System::Void Reject(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_REJECT_OFFSET))(this, ex);
		}

		::System::Void Resolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_RESOLVE_OFFSET))(this);
		}

		::System::Void ReportProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_REPORTPROGRESS_OFFSET))(this, progress);
		}

		::System::Void Done(::System::Action* onResolved, ::System::Action_1<::System::Exception*>* onRejected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_DONE_OFFSET))(this, onResolved, onRejected);
		}

		::System::Void Done_1(::System::Action* onResolved)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_DONE_1_OFFSET))(this, onResolved);
		}

		::System::Void Done_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_DONE_2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* WithName(::System::String* name)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_WITHNAME_OFFSET))(this, name);
		}

		::RPG::Client::Promises::IPromise* Catch(::System::Action_1<::System::Exception*>* onRejected)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_CATCH_OFFSET))(this, onRejected);
		}

		::RPG::Client::Promises::IPromise* Then(::System::Func_1<::RPG::Client::Promises::IPromise*>* onResolved)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_OFFSET))(this, onResolved);
		}

		::RPG::Client::Promises::IPromise* ThenLuaFuncIPromise(::System::Func_1<::RPG::Client::Promises::IPromise*>* onResolved)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THENLUAFUNCIPROMISE_OFFSET))(this, onResolved);
		}

		::RPG::Client::Promises::IPromise* Then_1(::System::Action* onResolved)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_1_OFFSET))(this, onResolved);
		}

		::RPG::Client::Promises::IPromise* ThenLuaAction(::System::Action* onResolved)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THENLUAACTION_OFFSET))(this, onResolved);
		}

		::RPG::Client::Promises::IPromise* Then_2(::System::Func_1<::RPG::Client::Promises::IPromise*>* onResolved, ::System::Action_1<::System::Exception*>* onRejected)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_2_OFFSET))(this, onResolved, onRejected);
		}

		::RPG::Client::Promises::IPromise* Then_3(::System::Action* onResolved, ::System::Action_1<::System::Exception*>* onRejected)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_3_OFFSET))(this, onResolved, onRejected);
		}

		::RPG::Client::Promises::IPromise* Then_4(::System::Func_1<::RPG::Client::Promises::IPromise*>* onResolved, ::System::Action_1<::System::Exception*>* onRejected, ::System::Action_1<::System::Single>* onProgress)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*, ::System::Action_1<::System::Exception*>*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_4_OFFSET))(this, onResolved, onRejected, onProgress);
		}

		::RPG::Client::Promises::IPromise* Then_5(::System::Action* onResolved, ::System::Action_1<::System::Exception*>* onRejected, ::System::Action_1<::System::Single>* onProgress)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THEN_5_OFFSET))(this, onResolved, onRejected, onProgress);
		}

		::System::Void ActionHandlers(::RPG::Client::Promises::IRejectable* resultPromise, ::System::Action* resolveHandler, ::System::Action_1<::System::Exception*>* rejectHandler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::IRejectable*, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ACTIONHANDLERS_OFFSET))(this, resultPromise, resolveHandler, rejectHandler);
		}

		::System::Void ProgressHandlers(::RPG::Client::Promises::IRejectable* resultPromise, ::System::Action_1<::System::Single>* progressHandler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::IRejectable*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_PROGRESSHANDLERS_OFFSET))(this, resultPromise, progressHandler);
		}

		::RPG::Client::Promises::IPromise* ThenAll(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>* chain)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THENALL_OFFSET))(this, chain);
		}

		static ::RPG::Client::Promises::IPromise* All(::Il2CppArray<::RPG::Client::Promises::IPromise*>* promises)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Il2CppArray<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ALL_OFFSET))(promises);
		}

		static ::RPG::Client::Promises::IPromise* All_1(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* promises)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_ALL_1_OFFSET))(promises);
		}

		::RPG::Client::Promises::IPromise* ThenSequence(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*>* chain)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THENSEQUENCE_OFFSET))(this, chain);
		}

		static ::RPG::Client::Promises::IPromise* Sequence(::Il2CppArray<::System::Func_1<::RPG::Client::Promises::IPromise*>*>* fns)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Il2CppArray<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_SEQUENCE_OFFSET))(fns);
		}

		static ::RPG::Client::Promises::IPromise* Sequence_1(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>* fns)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_SEQUENCE_1_OFFSET))(fns);
		}

		::RPG::Client::Promises::IPromise* ThenRace(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>* chain)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_THENRACE_OFFSET))(this, chain);
		}

		static ::RPG::Client::Promises::IPromise* Race(::Il2CppArray<::RPG::Client::Promises::IPromise*>* promises)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Il2CppArray<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_RACE_OFFSET))(promises);
		}

		static ::RPG::Client::Promises::IPromise* Race_1(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* promises)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_RACE_1_OFFSET))(promises);
		}

		static ::RPG::Client::Promises::IPromise* Resolved()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_RESOLVED_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* Rejected(::System::Exception* ex)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_REJECTED_OFFSET))(ex);
		}

		::RPG::Client::Promises::IPromise* Finally(::System::Action* onComplete)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_FINALLY_OFFSET))(this, onComplete);
		}

		::RPG::Client::Promises::IPromise* ContinueWith(::System::Func_1<::RPG::Client::Promises::IPromise*>* onComplete)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_CONTINUEWITH_OFFSET))(this, onComplete);
		}

		::RPG::Client::Promises::IPromise* Progress(::System::Action_1<::System::Single>* onProgress)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_PROGRESS_OFFSET))(this, onProgress);
		}

		static ::System::Void PropagateUnhandledException(::System::Object* sender, ::System::Exception* ex)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE_PROPAGATEUNHANDLEDEXCEPTION_OFFSET))(sender, ex);
		}

		::System::Void _Done_b__41_0(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__DONE_B__41_0_OFFSET))(this, ex);
		}

		::System::Void _Done_b__42_0(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__DONE_B__42_0_OFFSET))(this, ex);
		}

		::System::Void _Done_b__43_0(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE__DONE_B__43_0_OFFSET))(this, ex);
		}
	};
}
