#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CoroutineBehaviour; }
namespace RPG::Client { class CoroutineUtils_InControlCoroutineGroup; }
namespace RPG::Client { class ICoroutineGroupController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_COROUTINEUTILS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1833D460)
#define RPG_CLIENT_COROUTINEUTILS_GET_ISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1833D720)
#define RPG_CLIENT_COROUTINEUTILS_GET_MAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1833D700)
#define RPG_CLIENT_COROUTINEUTILS_INIT_OFFSET UNITYSDK_OFFSET(0x1833D570)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERFRAMESPROMISE_OFFSET UNITYSDK_OFFSET(0x1833E6C0)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERFRAMES_OFFSET UNITYSDK_OFFSET(0x1833E4D0)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERSECONDSPROMISE_OFFSET UNITYSDK_OFFSET(0x1833E780)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERSECONDS_OFFSET UNITYSDK_OFFSET(0x1833E5C0)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x1833E3F0)
#define RPG_CLIENT_COROUTINEUTILS_INVOKENEXTFRAME_OFFSET UNITYSDK_OFFSET(0x1833E310)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEUNTIL_OFFSET UNITYSDK_OFFSET(0x1833E220)
#define RPG_CLIENT_COROUTINEUTILS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1833E120)
#define RPG_CLIENT_COROUTINEUTILS_SET_MAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1833D710)
#define RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINEMT_1_OFFSET UNITYSDK_OFFSET(0x1833DA90)
#define RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINEMT_OFFSET UNITYSDK_OFFSET(0x1833D7C0)
#define RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1833D9F0)
#define RPG_CLIENT_COROUTINEUTILS_STARTINCTRLCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1833DC80)
#define RPG_CLIENT_COROUTINEUTILS_STARTPENDINGCOROUTINES_OFFSET UNITYSDK_OFFSET(0x1833D1A0)
#define RPG_CLIENT_COROUTINEUTILS_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1833DD20)
#define RPG_CLIENT_COROUTINEUTILS_STOPINCTRLCOROUTINES_OFFSET UNITYSDK_OFFSET(0x1833DDB0)
#define RPG_CLIENT_COROUTINEUTILS__ADDINCTRLCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1833DAB0)
#define RPG_CLIENT_COROUTINEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1833E9F0)
#define RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERFRAMESCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1833E590)
#define RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERFRAMESPROMISE_OFFSET UNITYSDK_OFFSET(0x1833E8A0)
#define RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERSECONDSCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1833E680)
#define RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERSECONDSPROMISE_OFFSET UNITYSDK_OFFSET(0x1833E900)
#define RPG_CLIENT_COROUTINEUTILS__INVOKECOROUTINEUNTIL_OFFSET UNITYSDK_OFFSET(0x1833E2E0)
#define RPG_CLIENT_COROUTINEUTILS__INVOKECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1833E1E0)
#define RPG_CLIENT_COROUTINEUTILS__INVOKEENDOFFRAMECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1833E4A0)
#define RPG_CLIENT_COROUTINEUTILS__INVOKENEXTFRAMECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1833E3C0)
#define RPG_CLIENT_COROUTINEUTILS__WAITINCTRLCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1833E9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils_TypeDefinitionIndex = 9456;

	class CoroutineUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*>>** StaticGet__PendingCoroutines2()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*>>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0x25A80);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::CoroutineUtils_InControlCoroutineGroup*>** StaticGet__InCtrlCoroutineGroups()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::CoroutineUtils_InControlCoroutineGroup*>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0x25A88);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::CoroutineUtils_InControlCoroutineGroup*>** StaticGet__FreeInCtrlCoroutineGroups()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::CoroutineUtils_InControlCoroutineGroup*>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0x25A90);
		}
		static ::RPG::Client::CoroutineBehaviour** StaticGet__Behaviour()
		{
			return (::RPG::Client::CoroutineBehaviour**)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0x25A98);
		}
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*>>** StaticGet__PendingCoroutines()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*>>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0x25AA0);
		}
		static ::System::Int32* StaticGet__MainThreadID_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0xC2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void Init(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INIT_OFFSET))(go);
		}

		static ::System::Int32 get_MainThreadID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_GET_MAINTHREADID_OFFSET))();
		}

		static ::System::Void set_MainThreadID(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_SET_MAINTHREADID_OFFSET))(value);
		}

		static ::System::Boolean get_IsMainThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_GET_ISMAINTHREAD_OFFSET))();
		}

		static ::System::Void Destroy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_DESTROY_OFFSET))();
		}

		static ::System::Void StartCoroutineMT(::System::Collections::IEnumerator* routine, ::RPG::Client::ICoroutineGroupController* ctrl, ::System::Boolean forcePending)
		{
			return ((::System::Void(*)(::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINEMT_OFFSET))(routine, ctrl, forcePending);
		}

		static ::System::Void StartCoroutineMT_1(::RPG::Client::ICoroutineGroupController* ctrl, ::System::Collections::IEnumerator* routine)
		{
			return ((::System::Void(*)(::RPG::Client::ICoroutineGroupController*, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINEMT_1_OFFSET))(ctrl, routine);
		}

		static ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* routine, ::RPG::Client::ICoroutineGroupController* ctrl)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINE_OFFSET))(routine, ctrl);
		}

		static ::System::Void StartInCtrlCoroutine(::RPG::Client::ICoroutineGroupController* ctrl, ::System::Collections::IEnumerator* routine)
		{
			return ((::System::Void(*)(::RPG::Client::ICoroutineGroupController*, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STARTINCTRLCOROUTINE_OFFSET))(ctrl, routine);
		}

		static ::System::Void StopCoroutine(::UnityEngine::Coroutine* coroutine)
		{
			return ((::System::Void(*)(::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STOPCOROUTINE_OFFSET))(coroutine);
		}

		static ::System::Void StopInCtrlCoroutines(::RPG::Client::ICoroutineGroupController* ctrl)
		{
			return ((::System::Void(*)(::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STOPINCTRLCOROUTINES_OFFSET))(ctrl);
		}

		static ::System::Void StartPendingCoroutines()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STARTPENDINGCOROUTINES_OFFSET))();
		}

		static ::UnityEngine::Coroutine* Invoke(::System::Single duration, ::System::Action* callback, ::RPG::Client::ICoroutineGroupController* ctrl)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Single, ::System::Action*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKE_OFFSET))(duration, callback, ctrl);
		}

		static ::UnityEngine::Coroutine* InvokeUntil(::System::Action* callBack, ::System::Func_1<::System::Boolean>* condition, ::RPG::Client::ICoroutineGroupController* ctrl)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Action*, ::System::Func_1<::System::Boolean>*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEUNTIL_OFFSET))(callBack, condition, ctrl);
		}

		static ::UnityEngine::Coroutine* InvokeNextFrame(::System::Action* callback, ::RPG::Client::ICoroutineGroupController* ctrl)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Action*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKENEXTFRAME_OFFSET))(callback, ctrl);
		}

		static ::UnityEngine::Coroutine* InvokeEndOfFrame(::System::Action* callback, ::RPG::Client::ICoroutineGroupController* ctrl)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Action*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEENDOFFRAME_OFFSET))(callback, ctrl);
		}

		static ::UnityEngine::Coroutine* InvokeAfterFrames(::System::Int32 frames, ::System::Action* callback, ::RPG::Client::ICoroutineGroupController* ctrl)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Int32, ::System::Action*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERFRAMES_OFFSET))(frames, callback, ctrl);
		}

		static ::UnityEngine::Coroutine* InvokeAfterSeconds(::System::Single seconds, ::System::Action* callback, ::RPG::Client::ICoroutineGroupController* ctrl)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Single, ::System::Action*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERSECONDS_OFFSET))(seconds, callback, ctrl);
		}

		static ::RPG::Client::Promises::IPromise* InvokeAfterFramesPromise(::System::Int32 frames, ::RPG::Client::ICoroutineGroupController* ctrl)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Int32, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERFRAMESPROMISE_OFFSET))(frames, ctrl);
		}

		static ::RPG::Client::Promises::IPromise* InvokeAfterSecondsPromise(::System::Single seconds, ::RPG::Client::ICoroutineGroupController* ctrl)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Single, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERSECONDSPROMISE_OFFSET))(seconds, ctrl);
		}

		static ::System::Collections::IEnumerator* _InvokeCoroutine(::System::Single duration, ::System::Action* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKECOROUTINE_OFFSET))(duration, callback);
		}

		static ::System::Collections::IEnumerator* _InvokeCoroutineUntil(::System::Action* callBack, ::System::Func_1<::System::Boolean>* condition)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKECOROUTINEUNTIL_OFFSET))(callBack, condition);
		}

		static ::System::Collections::IEnumerator* _InvokeNextFrameCoroutine(::System::Action* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKENEXTFRAMECOROUTINE_OFFSET))(callback);
		}

		static ::System::Collections::IEnumerator* _InvokeEndOfFrameCoroutine(::System::Action* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKEENDOFFRAMECOROUTINE_OFFSET))(callback);
		}

		static ::System::Collections::IEnumerator* _InvokeAfterFramesCoroutine(::System::Int32 frames, ::System::Action* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERFRAMESCOROUTINE_OFFSET))(frames, callback);
		}

		static ::System::Collections::IEnumerator* _InvokeAfterSecondsCoroutine(::System::Single seconds, ::System::Action* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERSECONDSCOROUTINE_OFFSET))(seconds, callback);
		}

		static ::System::Collections::IEnumerator* _InvokeAfterFramesPromise(::System::Int32 frames, ::System::Action* resolve, ::System::Action_1<::System::Exception*>* execption)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERFRAMESPROMISE_OFFSET))(frames, resolve, execption);
		}

		static ::System::Collections::IEnumerator* _InvokeAfterSecondsPromise(::System::Single seconds, ::System::Action* resolve, ::System::Action_1<::System::Exception*>* execption)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERSECONDSPROMISE_OFFSET))(seconds, resolve, execption);
		}

		static ::System::Void _AddInCtrlCoroutine(::RPG::Client::ICoroutineGroupController* ctrl, ::UnityEngine::Coroutine* coroutine)
		{
			return ((::System::Void(*)(::RPG::Client::ICoroutineGroupController*, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__ADDINCTRLCOROUTINE_OFFSET))(ctrl, coroutine);
		}

		static ::System::Collections::IEnumerator* _WaitInCtrlCoroutine(::RPG::Client::ICoroutineGroupController* ctrl, ::UnityEngine::Coroutine* coroutine)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::Client::ICoroutineGroupController*, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__WAITINCTRLCOROUTINE_OFFSET))(ctrl, coroutine);
		}
	};
}
