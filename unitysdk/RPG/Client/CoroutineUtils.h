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

#define RPG_CLIENT_COROUTINEUTILS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E58C990)
#define RPG_CLIENT_COROUTINEUTILS_GET_ISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1E58CC60)
#define RPG_CLIENT_COROUTINEUTILS_GET_MAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1E58CC40)
#define RPG_CLIENT_COROUTINEUTILS_INIT_OFFSET UNITYSDK_OFFSET(0x1E58CAC0)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERFRAMESPROMISE_OFFSET UNITYSDK_OFFSET(0x1E58DDE0)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERFRAMES_OFFSET UNITYSDK_OFFSET(0x1E58DBF0)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERSECONDSPROMISE_OFFSET UNITYSDK_OFFSET(0x1E58DEB0)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERSECONDS_OFFSET UNITYSDK_OFFSET(0x1E58DCE0)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x1E58DB10)
#define RPG_CLIENT_COROUTINEUTILS_INVOKENEXTFRAME_OFFSET UNITYSDK_OFFSET(0x1E58DA30)
#define RPG_CLIENT_COROUTINEUTILS_INVOKEUNTIL_OFFSET UNITYSDK_OFFSET(0x1E58D940)
#define RPG_CLIENT_COROUTINEUTILS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E58D840)
#define RPG_CLIENT_COROUTINEUTILS_SET_MAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1E58CC50)
#define RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINEMT_1_OFFSET UNITYSDK_OFFSET(0x1E58D030)
#define RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINEMT_OFFSET UNITYSDK_OFFSET(0x1E58CD00)
#define RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E58CF90)
#define RPG_CLIENT_COROUTINEUTILS_STARTINCTRLCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E58D2F0)
#define RPG_CLIENT_COROUTINEUTILS_STARTPENDINGCOROUTINES_OFFSET UNITYSDK_OFFSET(0x1E58C6A0)
#define RPG_CLIENT_COROUTINEUTILS_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E58D390)
#define RPG_CLIENT_COROUTINEUTILS_STOPINCTRLCOROUTINES_OFFSET UNITYSDK_OFFSET(0x1E58D440)
#define RPG_CLIENT_COROUTINEUTILS__ADDINCTRLCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E58D050)
#define RPG_CLIENT_COROUTINEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58E140)
#define RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERFRAMESCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E58DCB0)
#define RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERFRAMESPROMISE_OFFSET UNITYSDK_OFFSET(0x1E58DFF0)
#define RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERSECONDSCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E58DDA0)
#define RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERSECONDSPROMISE_OFFSET UNITYSDK_OFFSET(0x1E58E050)
#define RPG_CLIENT_COROUTINEUTILS__INVOKECOROUTINEUNTIL_OFFSET UNITYSDK_OFFSET(0x1E58DA00)
#define RPG_CLIENT_COROUTINEUTILS__INVOKECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E58D900)
#define RPG_CLIENT_COROUTINEUTILS__INVOKEENDOFFRAMECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E58DBC0)
#define RPG_CLIENT_COROUTINEUTILS__INVOKENEXTFRAMECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E58DAE0)
#define RPG_CLIENT_COROUTINEUTILS__WAITINCTRLCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E58E100)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils_TypeDefinitionIndex = 34559;

	class CoroutineUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::CoroutineBehaviour** StaticGet__Behaviour()
		{
			return (::RPG::Client::CoroutineBehaviour**)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0x5E3E0);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::CoroutineUtils_InControlCoroutineGroup*>** StaticGet__FreeInCtrlCoroutineGroups()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::CoroutineUtils_InControlCoroutineGroup*>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0x5E3E8);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::CoroutineUtils_InControlCoroutineGroup*>** StaticGet__InCtrlCoroutineGroups()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::CoroutineUtils_InControlCoroutineGroup*>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0x5E3F0);
		}
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*>>** StaticGet__PendingCoroutines()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*>>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0x5E3F8);
		}
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*>>** StaticGet__PendingCoroutines2()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*>>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0x5E400);
		}
		static ::System::Int32* StaticGet__MainThreadID_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoroutineUtils_TypeDefinitionIndex)->GetStaticField(0x13470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void Init(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INIT_OFFSET))(a1);
		}

		static ::System::Int32 get_MainThreadID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_GET_MAINTHREADID_OFFSET))();
		}

		static ::System::Void set_MainThreadID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_SET_MAINTHREADID_OFFSET))(a1);
		}

		static ::System::Boolean get_IsMainThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_GET_ISMAINTHREAD_OFFSET))();
		}

		static ::System::Void Destroy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_DESTROY_OFFSET))();
		}

		static ::System::Void StartCoroutineMT(::System::Collections::IEnumerator* a1, ::RPG::Client::ICoroutineGroupController* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINEMT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void StartCoroutineMT_1(::RPG::Client::ICoroutineGroupController* a1, ::System::Collections::IEnumerator* a2)
		{
			return ((::System::Void(*)(::RPG::Client::ICoroutineGroupController*, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINEMT_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* a1, ::RPG::Client::ICoroutineGroupController* a2)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Collections::IEnumerator*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STARTCOROUTINE_OFFSET))(a1, a2);
		}

		static ::System::Void StartInCtrlCoroutine(::RPG::Client::ICoroutineGroupController* a1, ::System::Collections::IEnumerator* a2)
		{
			return ((::System::Void(*)(::RPG::Client::ICoroutineGroupController*, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STARTINCTRLCOROUTINE_OFFSET))(a1, a2);
		}

		static ::System::Void StopCoroutine(::UnityEngine::Coroutine* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STOPCOROUTINE_OFFSET))(a1);
		}

		static ::System::Void StopInCtrlCoroutines(::RPG::Client::ICoroutineGroupController* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STOPINCTRLCOROUTINES_OFFSET))(a1);
		}

		static ::System::Void StartPendingCoroutines()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_STARTPENDINGCOROUTINES_OFFSET))();
		}

		static ::UnityEngine::Coroutine* Invoke(::System::Single a1, ::System::Action* a2, ::RPG::Client::ICoroutineGroupController* a3)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Single, ::System::Action*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Coroutine* InvokeUntil(::System::Action* a1, ::System::Func_1<::System::Boolean>* a2, ::RPG::Client::ICoroutineGroupController* a3)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Action*, ::System::Func_1<::System::Boolean>*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEUNTIL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Coroutine* InvokeNextFrame(::System::Action* a1, ::RPG::Client::ICoroutineGroupController* a2)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Action*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKENEXTFRAME_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Coroutine* InvokeEndOfFrame(::System::Action* a1, ::RPG::Client::ICoroutineGroupController* a2)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Action*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEENDOFFRAME_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Coroutine* InvokeAfterFrames(::System::Int32 a1, ::System::Action* a2, ::RPG::Client::ICoroutineGroupController* a3)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Int32, ::System::Action*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERFRAMES_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Coroutine* InvokeAfterSeconds(::System::Single a1, ::System::Action* a2, ::RPG::Client::ICoroutineGroupController* a3)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Single, ::System::Action*, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERSECONDS_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::Promises::IPromise* InvokeAfterFramesPromise(::System::Int32 a1, ::RPG::Client::ICoroutineGroupController* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Int32, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERFRAMESPROMISE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Promises::IPromise* InvokeAfterSecondsPromise(::System::Single a1, ::RPG::Client::ICoroutineGroupController* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Single, ::RPG::Client::ICoroutineGroupController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INVOKEAFTERSECONDSPROMISE_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* _InvokeCoroutine(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKECOROUTINE_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* _InvokeCoroutineUntil(::System::Action* a1, ::System::Func_1<::System::Boolean>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKECOROUTINEUNTIL_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* _InvokeNextFrameCoroutine(::System::Action* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKENEXTFRAMECOROUTINE_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _InvokeEndOfFrameCoroutine(::System::Action* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKEENDOFFRAMECOROUTINE_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _InvokeAfterFramesCoroutine(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERFRAMESCOROUTINE_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* _InvokeAfterSecondsCoroutine(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERSECONDSCOROUTINE_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* _InvokeAfterFramesPromise(::System::Int32 a1, ::System::Action* a2, ::System::Action_1<::System::Exception*>* a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERFRAMESPROMISE_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::IEnumerator* _InvokeAfterSecondsPromise(::System::Single a1, ::System::Action* a2, ::System::Action_1<::System::Exception*>* a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__INVOKEAFTERSECONDSPROMISE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddInCtrlCoroutine(::RPG::Client::ICoroutineGroupController* a1, ::UnityEngine::Coroutine* a2)
		{
			return ((::System::Void(*)(::RPG::Client::ICoroutineGroupController*, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__ADDINCTRLCOROUTINE_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* _WaitInCtrlCoroutine(::RPG::Client::ICoroutineGroupController* a1, ::UnityEngine::Coroutine* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::Client::ICoroutineGroupController*, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS__WAITINCTRLCOROUTINE_OFFSET))(a1, a2);
		}
	};
}
