#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/StageEntry_StreamingSceneType.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_869;
namespace MoleMole { class MonoStageEnv; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntryMode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_STAGEENTRY_AFTERSCENELOADED2_OFFSET UNITYSDK_OFFSET(0x1BD758F0)
#define MOLEMOLE_CONFIG_STAGEENTRY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1BD74F20)
#define MOLEMOLE_CONFIG_STAGEENTRY_CALCSTREAMINGSCENENAME_OFFSET UNITYSDK_OFFSET(0x1BD762B0)
#define MOLEMOLE_CONFIG_STAGEENTRY_CALCSTREAMINGV2SCENENAME_OFFSET UNITYSDK_OFFSET(0x1BD765C0)
#define MOLEMOLE_CONFIG_STAGEENTRY_GETREALSCENENAMEFORLOADING_OFFSET UNITYSDK_OFFSET(0x1BD758A0)
#define MOLEMOLE_CONFIG_STAGEENTRY_GETSTAGELOCATIONNAME_OFFSET UNITYSDK_OFFSET(0x1BD75DA0)
#define MOLEMOLE_CONFIG_STAGEENTRY_GETSTREAMINGSCENENAME_OFFSET UNITYSDK_OFFSET(0x1BD76460)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1BD74EA0)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_ENVPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1BD74EF0)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_SCENEASYNCOPTION_OFFSET UNITYSDK_OFFSET(0x1BD74F00)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_SKIPLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1BD74D30)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGEAVATARCAMERAKEY_OFFSET UNITYSDK_OFFSET(0x1BD74ED0)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x1BD74EB0)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGESCENEPATH_OFFSET UNITYSDK_OFFSET(0x1BD74EC0)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGESCRIPTPATH_OFFSET UNITYSDK_OFFSET(0x1BD74EE0)
#define MOLEMOLE_CONFIG_STAGEENTRY_LOADPERPSTAGE_OFFSET UNITYSDK_OFFSET(0x1BD75360)
#define MOLEMOLE_CONFIG_STAGEENTRY_LOADSTAGEENV_OFFSET UNITYSDK_OFFSET(0x1BD75DF0)
#define MOLEMOLE_CONFIG_STAGEENTRY_MODIFYMEMORYSETTINGSAFTERSCENELOAD_OFFSET UNITYSDK_OFFSET(0x1BD76260)
#define MOLEMOLE_CONFIG_STAGEENTRY_SETSKIPLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1BD74E30)
#define MOLEMOLE_CONFIG_STAGEENTRY_UNLOADSTAGE_1_OFFSET UNITYSDK_OFFSET(0x1BD75130)
#define MOLEMOLE_CONFIG_STAGEENTRY_UNLOADSTAGE_OFFSET UNITYSDK_OFFSET(0x1BD74F70)
#define MOLEMOLE_CONFIG_STAGEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD766C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StageEntry_TypeDefinitionIndex = 66322;

	class StageEntry : public ::System::Object
	{
	public:
		::Foundation::AssetRequestHandle _sceneAsyncOption; // 0x10
		::System::String* stageAvatarCamerakey; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* highMemorySceneNames; // 0x38
		::MoleMole::Config::StageEntryMode* stageEntryMode; // 0x40
		::System::String* stageName; // 0x48
		::Il2CppArray<::System::String*>* stageScriptPath; // 0x50
		::Foundation::AssetRequestHandle _lastKeptScene; // 0x58
		::System::Boolean MarkDel; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_SkipLoadScene()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_GET_SKIPLOADSCENE_OFFSET))(this);
		}

		::System::Void SetSkipLoadScene(::Foundation::AssetRequestHandle lastKeptScene)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_SETSKIPLOADSCENE_OFFSET))(this, lastKeptScene);
		}

		::System::Object* get_CustomData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_GET_CUSTOMDATA_OFFSET))(this);
		}

		::System::String* get_StageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGENAME_OFFSET))(this);
		}

		::System::String* get_StageScenePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGESCENEPATH_OFFSET))(this);
		}

		::System::String* get_StageAvatarCameraKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGEAVATARCAMERAKEY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_StageScriptPath()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGESCRIPTPATH_OFFSET))(this);
		}

		::System::String* get_EnvPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_GET_ENVPREFABPATH_OFFSET))(this);
		}

		::Foundation::AssetRequestHandle get_SceneAsyncOption()
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_GET_SCENEASYNCOPTION_OFFSET))(this);
		}

		static ::MoleMole::Config::StageEntry* Allocate(::Class_2_208CC9941471731A_869* configTemplateExt)
		{
			return ((::MoleMole::Config::StageEntry*(*)(::Class_2_208CC9941471731A_869*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_ALLOCATE_OFFSET))(configTemplateExt);
		}

		::System::Void UnloadStage(::System::Boolean isSameScenePath, ::MoleMole::Battle::Entity* stageEntity, ::System::Action* unloadCompleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_UNLOADSTAGE_OFFSET))(this, isSameScenePath, stageEntity, unloadCompleted);
		}

		::System::Void LoadPerpStage(::System::Action_1<::UnityEngine::GameObject*>* onLoadDone, ::System::UInt32 stageEntityID, ::MoleMole::Config::TimePeriodType time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*, ::System::UInt32, ::MoleMole::Config::TimePeriodType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_LOADPERPSTAGE_OFFSET))(this, onLoadDone, stageEntityID, time);
		}

		::System::String* GetStageLocationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_GETSTAGELOCATIONNAME_OFFSET))(this);
		}

		::MoleMole::MonoStageEnv* LoadStageEnv()
		{
			return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_LOADSTAGEENV_OFFSET))(this);
		}

		::System::Void AfterSceneLoaded2(::System::Action_1<::UnityEngine::GameObject*>* onLoadDone, ::System::String* realSceneName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_AFTERSCENELOADED2_OFFSET))(this, onLoadDone, realSceneName);
		}

		::System::Void ModifyMemorySettingsAfterSceneLoad(::System::String* realSceneName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_MODIFYMEMORYSETTINGSAFTERSCENELOAD_OFFSET))(this, realSceneName);
		}

		static ::System::String* CalcStreamingSceneName(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_CALCSTREAMINGSCENENAME_OFFSET))(path);
		}

		static ::System::String* GetRealSceneNameForLoading(::System::String* oldPath, ::MoleMole::Config::StageEntry_StreamingSceneType& stype)
		{
			return ((::System::String*(*)(::System::String*, ::MoleMole::Config::StageEntry_StreamingSceneType&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_GETREALSCENENAMEFORLOADING_OFFSET))(oldPath, stype);
		}

		static ::System::String* CalcStreamingV2SceneName(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_CALCSTREAMINGV2SCENENAME_OFFSET))(path);
		}

		static ::System::String* GetStreamingSceneName(::System::String* path, ::MoleMole::Config::StageEntry_StreamingSceneType& stype)
		{
			return ((::System::String*(*)(::System::String*, ::MoleMole::Config::StageEntry_StreamingSceneType&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_GETSTREAMINGSCENENAME_OFFSET))(path, stype);
		}

		::System::Void UnloadStage_1(::System::Action* unloadCompleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_UNLOADSTAGE_1_OFFSET))(this, unloadCompleted);
		}
	};
}
