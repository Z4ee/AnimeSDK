#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineManager_ProcessIndex.h"
#include "unitysdk/Foundation/Coroutine/DebugInfoType.h"
#include "unitysdk/Foundation/Coroutine/Segment.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Threading { class Thread; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class CustomYieldInstruction; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class WWW; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER_ADDTAG_OFFSET UNITYSDK_OFFSET(0x17FE6440)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_ADD_ONPREEXECUTE_OFFSET UNITYSDK_OFFSET(0x17FDEBA0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x17FDF060)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLYONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x17FF1970)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLYONINSTANCE_OFFSET UNITYSDK_OFFSET(0x17FF1400)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLY_1_OFFSET UNITYSDK_OFFSET(0x17FF1590)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLY_OFFSET UNITYSDK_OFFSET(0x17FF1270)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYEDONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x17FEF930)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYEDONINSTANCE_OFFSET UNITYSDK_OFFSET(0x17FEE9B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_1_OFFSET UNITYSDK_OFFSET(0x17FEED60)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_2_OFFSET UNITYSDK_OFFSET(0x17FEF0F0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_3_OFFSET UNITYSDK_OFFSET(0x17FEF590)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_OFFSET UNITYSDK_OFFSET(0x17FEE580)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x17FF0E40)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYONINSTANCE_OFFSET UNITYSDK_OFFSET(0x17FF0620)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYUNTIL_OFFSET UNITYSDK_OFFSET(0x17FF1FE0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLY_1_OFFSET UNITYSDK_OFFSET(0x17FF0A30)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLY_OFFSET UNITYSDK_OFFSET(0x17FF0170)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CLOSEWAITINGPROCESS_OFFSET UNITYSDK_OFFSET(0x17FE2B00)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXEXTRACT_OFFSET UNITYSDK_OFFSET(0x17FE7620)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXISNULL_OFFSET UNITYSDK_OFFSET(0x17FE29D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXPEEK_OFFSET UNITYSDK_OFFSET(0x17FEB970)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXREPLACE_OFFSET UNITYSDK_OFFSET(0x17FEBF20)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CREATENEWHANDLE_OFFSET UNITYSDK_OFFSET(0x17FEC640)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYIMMEDIATE_1_OFFSET UNITYSDK_OFFSET(0x17FF2C60)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x17FF2C20)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYOBJECT_1_OFFSET UNITYSDK_OFFSET(0x17FF2BC0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x17FF2B80)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROY_1_OFFSET UNITYSDK_OFFSET(0x17FF29C0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x17FF2980)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_FINDOBJECTOFTYPE_OFFSET UNITYSDK_OFFSET(0x17FF2E10)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_FINDOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0x17FF2E50)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17FE1A70)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x17FE71F0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GETSEGMENTTIME_OFFSET UNITYSDK_OFFSET(0x17FEAC20)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x17FDEB30)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x17FDE570)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_LOCALTIME_OFFSET UNITYSDK_OFFSET(0x17FDE500)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_MAINTHREAD_OFFSET UNITYSDK_OFFSET(0x17FDED60)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_HANDLEISINWAITINGLIST_OFFSET UNITYSDK_OFFSET(0x17FED7E0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x17FE7320)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x17FE7930)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_OFFSET UNITYSDK_OFFSET(0x17FE6950)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_1_OFFSET UNITYSDK_OFFSET(0x17FE6F10)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_2_OFFSET UNITYSDK_OFFSET(0x17FE7750)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_OFFSET UNITYSDK_OFFSET(0x17FE6640)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17FE2220)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_LOCKCOROUTINE_OFFSET UNITYSDK_OFFSET(0x17FEDF50)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_NULLIFY_1_OFFSET UNITYSDK_OFFSET(0x17FE7D40)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_NULLIFY_OFFSET UNITYSDK_OFFSET(0x17FEB3A0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17FDF6D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x17FE8450)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x17FE96D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_OFFSET UNITYSDK_OFFSET(0x17FE8050)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_1_OFFSET UNITYSDK_OFFSET(0x17FE8300)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_2_OFFSET UNITYSDK_OFFSET(0x17FE94F0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_OFFSET UNITYSDK_OFFSET(0x17FE7E80)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PRINT_OFFSET UNITYSDK_OFFSET(0x17FF2E90)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVETAG_OFFSET UNITYSDK_OFFSET(0x17FE2CF0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVEUNUSED_OFFSET UNITYSDK_OFFSET(0x17FE0830)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVE_ONPREEXECUTE_OFFSET UNITYSDK_OFFSET(0x17FDEC80)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESETTIMECOUNTONINSTANCE_OFFSET UNITYSDK_OFFSET(0x17FE6EB0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x17FEA200)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x17FEA630)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_OFFSET UNITYSDK_OFFSET(0x17FE9A50)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_1_OFFSET UNITYSDK_OFFSET(0x17FEA0B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_2_OFFSET UNITYSDK_OFFSET(0x17FEA450)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_OFFSET UNITYSDK_OFFSET(0x17FE9880)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17FE31B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x17FE59C0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x17FE5C40)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_3_OFFSET UNITYSDK_OFFSET(0x17FE5EE0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_OFFSET UNITYSDK_OFFSET(0x17FE5930)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x17FE4D10)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_2_OFFSET UNITYSDK_OFFSET(0x17FE5030)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_3_OFFSET UNITYSDK_OFFSET(0x17FE5310)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_4_OFFSET UNITYSDK_OFFSET(0x17FE5610)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_OFFSET UNITYSDK_OFFSET(0x17FE2EE0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_SETPAUSE_OFFSET UNITYSDK_OFFSET(0x17FE8510)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x17FDF000)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_SET_MAINTHREAD_OFFSET UNITYSDK_OFFSET(0x17FDEDC0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x17FF2700)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_AUTO_OFFSET UNITYSDK_OFFSET(0x17FF2750)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x17FF26B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_STOPALLCOROUTINES_OFFSET UNITYSDK_OFFSET(0x17FF2940)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x17FF27A0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_UNLOCKCOROUTINE_OFFSET UNITYSDK_OFFSET(0x17FEE390)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_UPDATETIMEVALUES_OFFSET UNITYSDK_OFFSET(0x17FE06B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17FDF830)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITFORSECONDSONINSTANCE_OFFSET UNITYSDK_OFFSET(0x17FEC8B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITFORSECONDS_OFFSET UNITYSDK_OFFSET(0x17FEC360)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONEWRAPPER_OFFSET UNITYSDK_OFFSET(0x17FED1A0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_1_OFFSET UNITYSDK_OFFSET(0x17FECB30)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_2_OFFSET UNITYSDK_OFFSET(0x17FED900)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_3_OFFSET UNITYSDK_OFFSET(0x17FEDC00)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_4_OFFSET UNITYSDK_OFFSET(0x17FEDDA0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_OFFSET UNITYSDK_OFFSET(0x17FEC920)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__CALLCONTINUOUSLYUNTIL_OFFSET UNITYSDK_OFFSET(0x17FF2390)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__CALLCONTINUOUSLY_OFFSET UNITYSDK_OFFSET(0x17FF0550)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FF32B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF2ED0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__DELAYEDCALL_1_OFFSET UNITYSDK_OFFSET(0x17FEF4F0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__DELAYEDCALL_OFFSET UNITYSDK_OFFSET(0x17FEE900)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__INJECTDELAY_OFFSET UNITYSDK_OFFSET(0x17FEBC70)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_1_OFFSET UNITYSDK_OFFSET(0x17FEDB70)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_2_OFFSET UNITYSDK_OFFSET(0x17FEDD10)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_3_OFFSET UNITYSDK_OFFSET(0x17FEDEC0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_OFFSET UNITYSDK_OFFSET(0x17FED110)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager_TypeDefinitionIndex = 7840;

	class CoroutineManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action** StaticGet_OnPostExecute()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x6840);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Byte, ::Foundation::Coroutine::CoroutineManager*>** StaticGet_ActiveInstances()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Byte, ::Foundation::Coroutine::CoroutineManager*>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x6848);
		}
		static ::System::Func_3<::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::CoroutineHandle, ::System::Collections::Generic::IEnumerator_1<::System::Single>*>** StaticGet_ReplacementFunction()
		{
			return (::System::Func_3<::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::CoroutineHandle, ::System::Collections::Generic::IEnumerator_1<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x6850);
		}
		static ::Foundation::Coroutine::CoroutineManager** StaticGet__instance()
		{
			return (::Foundation::Coroutine::CoroutineManager**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x6858);
		}
		static ::System::Action** StaticGet_OnPreExecute()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x6860);
		}
		static ::System::Threading::Thread** StaticGet__MainThread_k__BackingField()
		{
			return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x6868);
		}
		static ::System::Boolean* StaticGet__tmpBool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x35A0);
		}
		static ::Foundation::Coroutine::CoroutineHandle* StaticGet__tmpHandle()
		{
			return (::Foundation::Coroutine::CoroutineHandle*)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x35A4);
		}
		static ::System::Single* StaticGet_WaitForOneFrame()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x35A8);
		}
		// static const ::System::UInt16 FramesUntilMaintenance = 0x40; // 0x0
		// static const ::System::Int32 ProcessArrayChunkSize = 0x40; // 0x0
		// static const ::System::Int32 InitialBufferSizeLarge = 0x100; // 0x0
		// static const ::System::Int32 InitialBufferSizeMedium = 0x40; // 0x0
		// static const ::System::Int32 InitialBufferSizeSmall = 0x8; // 0x0
		::System::Single TimeBetweenSlowUpdateCalls; // 0x18
		::Foundation::Coroutine::DebugInfoType ProfilerDebugAmount; // 0x1C
		::System::Int32 UpdateCoroutines; // 0x20
		::System::Int32 FixedUpdateCoroutines; // 0x24
		::System::Int32 LateUpdateCoroutines; // 0x28
		::System::Int32 SlowUpdateCoroutines; // 0x2C
		::System::Single localTime; // 0x30
		::System::Single deltaTime; // 0x34
		::System::Int32 _currentUpdateFrame; // 0x38
		::System::Int32 _currentLateUpdateFrame; // 0x3C
		::System::Int32 _currentFixedUpdateFrame; // 0x40
		::System::Int32 _currentSlowUpdateFrame; // 0x44
		::System::Int32 _nextUpdateProcessSlot; // 0x48
		::System::Int32 _nextLateUpdateProcessSlot; // 0x4C
		::System::Int32 _nextFixedUpdateProcessSlot; // 0x50
		::System::Int32 _nextSlowUpdateProcessSlot; // 0x54
		::System::Int32 _lastUpdateProcessSlot; // 0x58
		::System::Int32 _lastLateUpdateProcessSlot; // 0x5C
		::System::Int32 _lastFixedUpdateProcessSlot; // 0x60
		::System::Int32 _lastSlowUpdateProcessSlot; // 0x64
		::System::Single _lastUpdateTime; // 0x68
		::System::Single _lastLateUpdateTime; // 0x6C
		::System::Single _lastFixedUpdateTime; // 0x70
		::System::Single _lastSlowUpdateTime; // 0x74
		::System::Single _lastSlowUpdateDeltaTime; // 0x78
		::System::UInt16 _framesSinceUpdate; // 0x7C
		::System::UInt16 _expansions; // 0x7E
		::System::Byte _instanceID; // 0x80
		::System::Collections::Generic::Dictionary_2<::Foundation::Coroutine::CoroutineHandle, ::System::Collections::Generic::HashSet_1<::Foundation::Coroutine::CoroutineHandle>*>* _waitingTriggers; // 0x88
		::System::Collections::Generic::Dictionary_2<::Foundation::Coroutine::CoroutineHandle, ::Foundation::Coroutine::CoroutineManager_ProcessIndex>* _handleToIndex; // 0x90
		::System::Collections::Generic::Dictionary_2<::Foundation::Coroutine::CoroutineManager_ProcessIndex, ::Foundation::Coroutine::CoroutineHandle>* _indexToHandle; // 0x98
		::System::Collections::Generic::Dictionary_2<::Foundation::Coroutine::CoroutineHandle, ::System::String*>* _processTags; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::Foundation::Coroutine::CoroutineHandle>*>* _taggedProcesses; // 0xA8
		::Il2CppArray<::System::Collections::Generic::IEnumerator_1<::System::Single>*>* UpdateProcesses; // 0xB0
		::Il2CppArray<::System::Collections::Generic::IEnumerator_1<::System::Single>*>* LateUpdateProcesses; // 0xB8
		::Il2CppArray<::System::Collections::Generic::IEnumerator_1<::System::Single>*>* FixedUpdateProcesses; // 0xC0
		::Il2CppArray<::System::Collections::Generic::IEnumerator_1<::System::Single>*>* SlowUpdateProcesses; // 0xC8
		::Il2CppArray<::System::Boolean>* UpdatePaused; // 0xD0
		::Il2CppArray<::System::Boolean>* LateUpdatePaused; // 0xD8
		::Il2CppArray<::System::Boolean>* FixedUpdatePaused; // 0xE0
		::Il2CppArray<::System::Boolean>* SlowUpdatePaused; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Single get_LocalTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_LOCALTIME_OFFSET))();
		}

		static ::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_DELTATIME_OFFSET))();
		}

		static ::System::Void add_OnPreExecute(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_ADD_ONPREEXECUTE_OFFSET))(value);
		}

		static ::System::Void remove_OnPreExecute(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVE_ONPREEXECUTE_OFFSET))(value);
		}

		static ::System::Threading::Thread* get_MainThread()
		{
			return ((::System::Threading::Thread*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_MAINTHREAD_OFFSET))();
		}

		static ::System::Void set_MainThread(::System::Threading::Thread* value)
		{
			return ((::System::Void(*)(::System::Threading::Thread*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_SET_MAINTHREAD_OFFSET))(value);
		}

		static ::Foundation::Coroutine::CoroutineManager* get_Instance()
		{
			return ((::Foundation::Coroutine::CoroutineManager*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::Foundation::Coroutine::CoroutineManager* value)
		{
			return ((::System::Void(*)(::Foundation::Coroutine::CoroutineManager*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void RemoveUnused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVEUNUSED_OFFSET))(this);
		}

		static ::Foundation::Coroutine::CoroutineHandle RunCoroutine(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_OFFSET))(coroutine);
		}

		static ::Foundation::Coroutine::CoroutineHandle RunCoroutine_1(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::CoroutineHandle handle, ::Foundation::Coroutine::Segment timing)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::CoroutineHandle, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_1_OFFSET))(coroutine, handle, timing);
		}

		static ::Foundation::Coroutine::CoroutineHandle RunCoroutine_2(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::System::String* tag)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_2_OFFSET))(coroutine, tag);
		}

		static ::Foundation::Coroutine::CoroutineHandle RunCoroutine_3(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::Segment timing)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_3_OFFSET))(coroutine, timing);
		}

		static ::Foundation::Coroutine::CoroutineHandle RunCoroutine_4(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::Segment timing, ::System::String* tag)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::Segment, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_4_OFFSET))(coroutine, timing, tag);
		}

		::Foundation::Coroutine::CoroutineHandle RunCoroutineOnInstance(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_OFFSET))(this, coroutine);
		}

		::Foundation::Coroutine::CoroutineHandle RunCoroutineOnInstance_1(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::System::String* tag)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_1_OFFSET))(this, coroutine, tag);
		}

		::Foundation::Coroutine::CoroutineHandle RunCoroutineOnInstance_2(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::Segment timing)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_2_OFFSET))(this, coroutine, timing);
		}

		::Foundation::Coroutine::CoroutineHandle RunCoroutineOnInstance_3(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::Segment timing, ::System::String* tag)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::Segment, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_3_OFFSET))(this, coroutine, timing, tag);
		}

		::Foundation::Coroutine::CoroutineHandle RunCoroutineInternal(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::Segment timing, ::System::String* tag, ::Foundation::Coroutine::CoroutineHandle handle, ::System::Boolean prewarm)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::Segment, ::System::String*, ::Foundation::Coroutine::CoroutineHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEINTERNAL_OFFSET))(this, coroutine, timing, tag, handle, prewarm);
		}

		static ::System::Int32 KillCoroutines()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_OFFSET))();
		}

		::System::Int32 KillCoroutinesOnInstance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_OFFSET))(this);
		}

		static ::System::Int32 KillCoroutines_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_1_OFFSET))(handle);
		}

		::System::Int32 KillCoroutinesOnInstance_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_1_OFFSET))(this, handle);
		}

		static ::System::Int32 KillCoroutines_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_2_OFFSET))(tag);
		}

		::System::Int32 KillCoroutinesOnInstance_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_2_OFFSET))(this, tag);
		}

		static ::System::Int32 PauseCoroutines()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_OFFSET))();
		}

		::System::Int32 PauseCoroutinesOnInstance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_OFFSET))(this);
		}

		static ::System::Int32 PauseCoroutines_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_1_OFFSET))(handle);
		}

		::System::Int32 PauseCoroutinesOnInstance_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_1_OFFSET))(this, handle);
		}

		static ::System::Int32 PauseCoroutines_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_2_OFFSET))(tag);
		}

		::System::Int32 PauseCoroutinesOnInstance_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_2_OFFSET))(this, tag);
		}

		static ::System::Int32 ResumeCoroutines()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_OFFSET))();
		}

		::System::Int32 ResumeCoroutinesOnInstance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_OFFSET))(this);
		}

		static ::System::Int32 ResumeCoroutines_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_1_OFFSET))(handle);
		}

		::System::Int32 ResumeCoroutinesOnInstance_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_1_OFFSET))(this, handle);
		}

		static ::System::Int32 ResumeCoroutines_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_2_OFFSET))(tag);
		}

		::System::Int32 ResumeCoroutinesOnInstance_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_2_OFFSET))(this, tag);
		}

		::System::Boolean UpdateTimeValues(::Foundation::Coroutine::Segment segment)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_UPDATETIMEVALUES_OFFSET))(this, segment);
		}

		::System::Single GetSegmentTime(::Foundation::Coroutine::Segment segment)
		{
			return ((::System::Single(*)(::PVOID, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GETSEGMENTTIME_OFFSET))(this, segment);
		}

		::System::Void ResetTimeCountOnInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESETTIMECOUNTONINSTANCE_OFFSET))(this);
		}

		static ::Foundation::Coroutine::CoroutineManager* GetInstance(::System::Byte ID)
		{
			return ((::Foundation::Coroutine::CoroutineManager*(*)(::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GETINSTANCE_OFFSET))(ID);
		}

		::System::Void AddTag(::System::String* tag, ::Foundation::Coroutine::CoroutineHandle coindex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_ADDTAG_OFFSET))(this, tag, coindex);
		}

		::System::Void RemoveTag(::Foundation::Coroutine::CoroutineHandle coindex)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVETAG_OFFSET))(this, coindex);
		}

		::System::Boolean Nullify(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_NULLIFY_OFFSET))(this, handle);
		}

		::System::Boolean Nullify_1(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_NULLIFY_1_OFFSET))(this, coindex);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* CoindexExtract(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXEXTRACT_OFFSET))(this, coindex);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* CoindexPeek(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXPEEK_OFFSET))(this, coindex);
		}

		::System::Boolean CoindexIsNull(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXISNULL_OFFSET))(this, coindex);
		}

		::System::Boolean SetPause(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex, ::System::Boolean newPausedState)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_SETPAUSE_OFFSET))(this, coindex, newPausedState);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* _InjectDelay(::System::Collections::Generic::IEnumerator_1<::System::Single>* proc, ::System::Single delayTime)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__INJECTDELAY_OFFSET))(proc, delayTime);
		}

		::System::Void CoindexReplace(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex, ::System::Collections::Generic::IEnumerator_1<::System::Single>* replacement)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXREPLACE_OFFSET))(this, coindex, replacement);
		}

		static ::System::Single WaitForSeconds(::System::Single waitTime, ::System::Single ratio)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITFORSECONDS_OFFSET))(waitTime, ratio);
		}

		static ::Foundation::Coroutine::CoroutineHandle CreateNewHandle()
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CREATENEWHANDLE_OFFSET))();
		}

		::System::Single WaitForSecondsOnInstance(::System::Single waitTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITFORSECONDSONINSTANCE_OFFSET))(this, waitTime);
		}

		static ::System::Single WaitUntilDone(::Foundation::Coroutine::CoroutineHandle otherCoroutine)
		{
			return ((::System::Single(*)(::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_OFFSET))(otherCoroutine);
		}

		static ::System::Single WaitUntilDone_1(::Foundation::Coroutine::CoroutineHandle otherCoroutine, ::System::Boolean warnOnIssue)
		{
			return ((::System::Single(*)(::Foundation::Coroutine::CoroutineHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_1_OFFSET))(otherCoroutine, warnOnIssue);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitUntilDoneWrapper(::System::Collections::Generic::IEnumerator_1<::System::Single>* coptr, ::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONEWRAPPER_OFFSET))(this, coptr, handle);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _StartWhenDone(::Foundation::Coroutine::CoroutineHandle handle, ::System::Collections::Generic::IEnumerator_1<::System::Single>* proc)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_OFFSET))(this, handle, proc);
		}

		::System::Void CloseWaitingProcess(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CLOSEWAITINGPROCESS_OFFSET))(this, handle);
		}

		::System::Boolean HandleIsInWaitingList(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_HANDLEISINWAITINGLIST_OFFSET))(this, handle);
		}

		static ::System::Single WaitUntilDone_2(::UnityEngine::WWW* wwwObject)
		{
			return ((::System::Single(*)(::UnityEngine::WWW*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_2_OFFSET))(wwwObject);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* _StartWhenDone_1(::UnityEngine::WWW* www, ::System::Collections::Generic::IEnumerator_1<::System::Single>* pausedProc)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::UnityEngine::WWW*, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_1_OFFSET))(www, pausedProc);
		}

		static ::System::Single WaitUntilDone_3(::UnityEngine::AsyncOperation* operation)
		{
			return ((::System::Single(*)(::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_3_OFFSET))(operation);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* _StartWhenDone_2(::UnityEngine::AsyncOperation* operation, ::System::Collections::Generic::IEnumerator_1<::System::Single>* pausedProc)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::UnityEngine::AsyncOperation*, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_2_OFFSET))(operation, pausedProc);
		}

		static ::System::Single WaitUntilDone_4(::UnityEngine::CustomYieldInstruction* operation)
		{
			return ((::System::Single(*)(::UnityEngine::CustomYieldInstruction*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_4_OFFSET))(operation);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* _StartWhenDone_3(::UnityEngine::CustomYieldInstruction* operation, ::System::Collections::Generic::IEnumerator_1<::System::Single>* pausedProc)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::UnityEngine::CustomYieldInstruction*, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_3_OFFSET))(operation, pausedProc);
		}

		::System::Boolean LockCoroutine(::Foundation::Coroutine::CoroutineHandle coroutine, ::Foundation::Coroutine::CoroutineHandle key)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_LOCKCOROUTINE_OFFSET))(this, coroutine, key);
		}

		::System::Boolean UnlockCoroutine(::Foundation::Coroutine::CoroutineHandle coroutine, ::Foundation::Coroutine::CoroutineHandle key)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_UNLOCKCOROUTINE_OFFSET))(this, coroutine, key);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallDelayed(::System::Single delay, ::System::Action* action)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_OFFSET))(delay, action);
		}

		::Foundation::Coroutine::CoroutineHandle CallDelayedOnInstance(::System::Single delay, ::System::Action* action)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYEDONINSTANCE_OFFSET))(this, delay, action);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallDelayed_1(::System::Single delay, ::System::Action* action, ::UnityEngine::GameObject* cancelWith)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_1_OFFSET))(delay, action, cancelWith);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallDelayed_2(::System::Single delay, ::Foundation::Coroutine::CoroutineHandle handle, ::System::Action* action, ::Foundation::Coroutine::Segment timing)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::Foundation::Coroutine::CoroutineHandle, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_2_OFFSET))(delay, handle, action, timing);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallDelayed_3(::System::Single delay, ::System::Action* action, ::Foundation::Coroutine::Segment timing)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_3_OFFSET))(delay, action, timing);
		}

		::Foundation::Coroutine::CoroutineHandle CallDelayedOnInstance_1(::System::Single delay, ::System::Action* action, ::UnityEngine::GameObject* cancelWith)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYEDONINSTANCE_1_OFFSET))(this, delay, action, cancelWith);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _DelayedCall(::System::Single delay, ::System::Action* action, ::UnityEngine::GameObject* cancelWith)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Action*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__DELAYEDCALL_OFFSET))(this, delay, action, cancelWith);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _DelayedCall_1(::System::Single delay, ::System::Action* action)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__DELAYEDCALL_1_OFFSET))(this, delay, action);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallPeriodically(::System::Single timeframe, ::System::Single period, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLY_OFFSET))(timeframe, period, action, onDone);
		}

		::Foundation::Coroutine::CoroutineHandle CallPeriodicallyOnInstance(::System::Single timeframe, ::System::Single period, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYONINSTANCE_OFFSET))(this, timeframe, period, action, onDone);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallPeriodically_1(::System::Single timeframe, ::System::Single period, ::System::Action* action, ::Foundation::Coroutine::Segment timing, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLY_1_OFFSET))(timeframe, period, action, timing, onDone);
		}

		::Foundation::Coroutine::CoroutineHandle CallPeriodicallyOnInstance_1(::System::Single timeframe, ::System::Single period, ::System::Action* action, ::Foundation::Coroutine::Segment timing, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYONINSTANCE_1_OFFSET))(this, timeframe, period, action, timing, onDone);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallContinuously(::System::Single timeframe, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLY_OFFSET))(timeframe, action, onDone);
		}

		::Foundation::Coroutine::CoroutineHandle CallContinuouslyOnInstance(::System::Single timeframe, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLYONINSTANCE_OFFSET))(this, timeframe, action, onDone);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallContinuously_1(::System::Single timeframe, ::System::Action* action, ::Foundation::Coroutine::Segment timing, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLY_1_OFFSET))(timeframe, action, timing, onDone);
		}

		::Foundation::Coroutine::CoroutineHandle CallContinuouslyOnInstance_1(::System::Single timeframe, ::System::Action* action, ::Foundation::Coroutine::Segment timing, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLYONINSTANCE_1_OFFSET))(this, timeframe, action, timing, onDone);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _CallContinuously(::System::Single timeframe, ::System::Single period, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__CALLCONTINUOUSLY_OFFSET))(this, timeframe, period, action, onDone);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallPeriodicallyUntil(::System::Single period, ::System::Func_1<::System::Boolean>* predicate, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Func_1<::System::Boolean>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYUNTIL_OFFSET))(period, predicate, action, onDone);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _CallContinuouslyUntil(::System::Single period, ::System::Func_1<::System::Boolean>* predicate, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Func_1<::System::Boolean>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__CALLCONTINUOUSLYUNTIL_OFFSET))(this, period, predicate, action, onDone);
		}

		::UnityEngine::Coroutine* StartCoroutine(::System::String* methodName, ::System::Object* value)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_OFFSET))(this, methodName, value);
		}

		::UnityEngine::Coroutine* StartCoroutine_1(::System::String* methodName)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_1_OFFSET))(this, methodName);
		}

		::UnityEngine::Coroutine* StartCoroutine_Auto(::System::Collections::IEnumerator* routine)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_AUTO_OFFSET))(this, routine);
		}

		::System::Void StopCoroutine(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_STOPCOROUTINE_OFFSET))(this, methodName);
		}

		::System::Void StopAllCoroutines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_STOPALLCOROUTINES_OFFSET))(this);
		}

		static ::System::Void Destroy(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROY_OFFSET))(obj);
		}

		static ::System::Void Destroy_1(::UnityEngine::Object* obj, ::System::Single f)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROY_1_OFFSET))(obj, f);
		}

		static ::System::Void DestroyObject(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYOBJECT_OFFSET))(obj);
		}

		static ::System::Void DestroyObject_1(::UnityEngine::Object* obj, ::System::Single f)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYOBJECT_1_OFFSET))(obj, f);
		}

		static ::System::Void DestroyImmediate(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYIMMEDIATE_OFFSET))(obj);
		}

		static ::System::Void DestroyImmediate_1(::UnityEngine::Object* obj, ::System::Boolean b)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYIMMEDIATE_1_OFFSET))(obj, b);
		}

		static ::UnityEngine::Object* FindObjectOfType(::System::Type* t)
		{
			return ((::UnityEngine::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_FINDOBJECTOFTYPE_OFFSET))(t);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsOfType(::System::Type* t)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_FINDOBJECTSOFTYPE_OFFSET))(t);
		}

		static ::System::Void print(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PRINT_OFFSET))(message);
		}
	};
}
