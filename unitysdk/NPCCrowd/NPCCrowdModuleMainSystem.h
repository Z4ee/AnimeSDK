#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleMainSystem_EModulePreloadPhase.h"

namespace NPCCrowd { class NPCCrowdModuleManagerBase; }
namespace NPCCrowd { class NPCCrowdModuleSubSystemBase; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1070C670)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_DISABLEMODULE_OFFSET UNITYSDK_OFFSET(0x1070C930)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLEMODULE_OFFSET UNITYSDK_OFFSET(0x1070C8B0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1070F180)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_END_OFFSET UNITYSDK_OFFSET(0x1070C9E0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GETISPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x1070B650)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_BISLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0x10709D20)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_ENABLEASYNCFLUSHGPUREADBACKBONEDATA_OFFSET UNITYSDK_OFFSET(0x10709C60)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0x106EDEB0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1070E330)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LOADALLCONFIGDATAASYNC_OFFSET UNITYSDK_OFFSET(0x1070AA80)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1070EDF0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x1070CF70)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKPAUSE_OFFSET UNITYSDK_OFFSET(0x1070ED50)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKRESUME_OFFSET UNITYSDK_OFFSET(0x1070EDA0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHEDCHECK_OFFSET UNITYSDK_OFFSET(0x1070B4B0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x1070B870)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x1070D210)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1070E9E0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x1070DD90)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x1070AB10)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1070A990)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETSTREAMINGABILITYTICKENABLE_OFFSET UNITYSDK_OFFSET(0x1070C5F0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETTICKPAUSESTATE_OFFSET UNITYSDK_OFFSET(0x1070C0D0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SET_ENABLEASYNCFLUSHGPUREADBACKBONEDATA_OFFSET UNITYSDK_OFFSET(0x10709CC0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_START_OFFSET UNITYSDK_OFFSET(0x1070BAF0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1070D830)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1070F200)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10709D80)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1070F220)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1070F2B0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1070F340)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1070F3D0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_START_OFFSET UNITYSDK_OFFSET(0x1070F460)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1070F4F0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem_TypeDefinitionIndex = 42353;

	class NPCCrowdModuleMainSystem : public ::Class_2_40CD888D5D4FCB5B
	{
	public:
		static ::System::Action** StaticGet_loadAssetsFinishedAction()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0x322B0);
		}
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_waitedAssetsRequest()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0x322B8);
		}
		static ::NPCCrowd::NPCCrowdModuleMainSystem** StaticGet__self()
		{
			return (::NPCCrowd::NPCCrowdModuleMainSystem**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0x322C0);
		}
		static ::NPCCrowd::NPCCrowdModuleMainSystem_EModulePreloadPhase* StaticGet_preloadPhase()
		{
			return (::NPCCrowd::NPCCrowdModuleMainSystem_EModulePreloadPhase*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xC020);
		}
		static ::System::Boolean* StaticGet_PauseNpcCrowdFlag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xC024);
		}
		static ::System::Boolean* StaticGet__EnableAsyncFlushGPUReadBackBoneData_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xC025);
		}
		static ::System::Boolean* StaticGet_DisableSubsystemInStreamingGame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xC026);
		}
		static ::System::Boolean* StaticGet_enableSkipTickWhenNoNPC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xC027);
		}
		static ::System::Boolean* StaticGet_EnableLODSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xC028);
		}
		::NPCCrowd::NPCCrowdModuleSubSystemBase* gpTaskContainerSubSystem; // 0x20
		::NPCCrowd::NPCCrowdModuleSubSystemBase* lodSubSystem; // 0x28
		::NPCCrowd::NPCCrowdModuleSubSystemBase* avatarSubSystem; // 0x30
		::NPCCrowd::NPCCrowdModuleManagerBase* avatarMeshManager; // 0x38
		::NPCCrowd::NPCCrowdModuleManagerBase* frameKeyManager; // 0x40
		::NPCCrowd::NPCCrowdModuleManagerBase* abilityManager; // 0x48
		::NPCCrowd::NPCCrowdModuleManagerBase* accessoryAnimatorManager; // 0x50
		::NPCCrowd::NPCCrowdModuleSubSystemBase* physicsSubSystem; // 0x58
		::NPCCrowd::NPCCrowdModuleManagerBase* distanceManager; // 0x60
		::NPCCrowd::NPCCrowdModuleManagerBase* wpPathFinderManager; // 0x68
		::NPCCrowd::NPCCrowdModuleManagerBase* crowdAnimationManager; // 0x70
		::NPCCrowd::NPCCrowdModuleManagerBase* actionManager; // 0x78
		::NPCCrowd::NPCCrowdModuleManagerBase* montageManager; // 0x80
		::NPCCrowd::NPCCrowdModuleManagerBase* pathGraphManager; // 0x88
		::NPCCrowd::NPCCrowdModuleManagerBase* avatarDitherManager; // 0x90
		::NPCCrowd::NPCCrowdModuleManagerBase* physicsManager; // 0x98
		::NPCCrowd::NPCCrowdModuleManagerBase* interactTargetManager; // 0xA0
		::NPCCrowd::NPCCrowdModuleManagerBase* cityPopulationManager; // 0xA8
		::NPCCrowd::NPCCrowdModuleManagerBase* emotionManager; // 0xB0
		::NPCCrowd::NPCCrowdModuleSubSystemBase* abilityFlushSubSystem; // 0xB8
		::NPCCrowd::NPCCrowdModuleManagerBase* timelineManager; // 0xC0
		::NPCCrowd::NPCCrowdModuleManagerBase* customIldeManager; // 0xC8
		::NPCCrowd::NPCCrowdModuleManagerBase* lodManager; // 0xD0
		::NPCCrowd::NPCCrowdModuleManagerBase* accessoryManager; // 0xD8
		::NPCCrowd::NPCCrowdModuleSubSystemBase* animationSubSystem; // 0xE0
		::NPCCrowd::NPCCrowdModuleSubSystemBase* debuggerAvatarSubSystem; // 0xE8
		::System::Collections::Generic::List_1<::NPCCrowd::NPCCrowdModuleManagerBase*>* allManager; // 0xF0
		::NPCCrowd::NPCCrowdModuleManagerBase* crowdAvatarManager; // 0xF8
		::NPCCrowd::NPCCrowdModuleManagerBase* reactionManager; // 0x100
		::Nap::NapECS::EcsWorld* ecsWorld; // 0x108
		::NPCCrowd::NPCCrowdModuleManagerBase* spawnManager; // 0x110
		::NPCCrowd::NPCCrowdModuleManagerBase* unionAnimatorManager; // 0x118
		::NPCCrowd::NPCCrowdModuleManagerBase* performanceManager; // 0x120
		::NPCCrowd::NPCCrowdModuleSubSystemBase* externalObstacleSyncSubSystem; // 0x128
		::NPCCrowd::NPCCrowdModuleManagerBase* cpuAnimatorManager; // 0x130
		::NPCCrowd::NPCCrowdModuleManagerBase* debuggerManager; // 0x138
		::NPCCrowd::NPCCrowdModuleManagerBase* accessoryMeshManager; // 0x140
		::System::Collections::Generic::List_1<::NPCCrowd::NPCCrowdModuleSubSystemBase*>* allSubSystem; // 0x148
		::NPCCrowd::NPCCrowdModuleManagerBase* stateTreeManager; // 0x150
		::Nap::NapECS::EcsFilter* npcFilter; // 0x158
		::NPCCrowd::NPCCrowdModuleSubSystemBase* stateTreeContextSubSystem; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_EnableAsyncFlushGPUReadBackBoneData()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_ENABLEASYNCFLUSHGPUREADBACKBONEDATA_OFFSET))();
		}

		static ::System::Void set_EnableAsyncFlushGPUReadBackBoneData(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SET_ENABLEASYNCFLUSHGPUREADBACKBONEDATA_OFFSET))(value);
		}

		static ::System::Boolean get_bIsLoadedAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_BISLOADEDASSETS_OFFSET))();
		}

		static ::NPCCrowd::NPCCrowdModuleMainSystem* Get()
		{
			return ((::NPCCrowd::NPCCrowdModuleMainSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_OFFSET))();
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}

		static ::System::Collections::IEnumerator* LoadAllConfigDataAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LOADALLCONFIGDATAASYNC_OFFSET))(progressSpan, moveOneStepCallback);
		}

		static ::System::Void PreloadAssets(::System::Action* onLoadFinished)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_PRELOADASSETS_OFFSET))(onLoadFinished);
		}

		static ::System::Void OnPreloadFinishedCheck(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle arq)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHEDCHECK_OFFSET))(asset, arq);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_START_OFFSET))(this);
		}

		::System::Void SetTickPauseState(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETTICKPAUSESTATE_OFFSET))(this, pause);
		}

		static ::System::Void SetStreamingAbilityTickEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETSTREAMINGABILITYTICKENABLE_OFFSET))(enable);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void EnableModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLEMODULE_OFFSET))();
		}

		::System::Void DisableModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_DISABLEMODULE_OFFSET))(this);
		}

		::System::Void OnEarlyUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONEARLYUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void PostUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnNPCCrowdTickPause(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKPAUSE_OFFSET))(this, args);
		}

		::System::Void OnNPCCrowdTickResume(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKRESUME_OFFSET))(this, args);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_END_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONDESTROY_OFFSET))(this);
		}

		static ::System::Boolean GetIsPreloadFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GETISPRELOADFINISHED_OFFSET))();
		}

		::System::Void EnableSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLESYSTEM_OFFSET))(this);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_START_OFFSET))(this);
		}

		::System::Void __base_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_UPDATE_OFFSET))(this);
		}
	};
}
