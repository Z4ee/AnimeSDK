#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/StageEntry_StreamingSceneType.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_239;
namespace MoleMole { class MonoStageEnv; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntryMode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_STAGEENTRY_AFTERSCENELOADED2_OFFSET UNITYSDK_OFFSET(0x157D2B70)
#define MOLEMOLE_CONFIG_STAGEENTRY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x157D21A0)
#define MOLEMOLE_CONFIG_STAGEENTRY_CALCSTREAMINGSCENENAME_OFFSET UNITYSDK_OFFSET(0x157D3520)
#define MOLEMOLE_CONFIG_STAGEENTRY_CALCSTREAMINGV2SCENENAME_OFFSET UNITYSDK_OFFSET(0x157D3830)
#define MOLEMOLE_CONFIG_STAGEENTRY_GETREALSCENENAMEFORLOADING_OFFSET UNITYSDK_OFFSET(0x157D2B20)
#define MOLEMOLE_CONFIG_STAGEENTRY_GETSTAGELOCATIONNAME_OFFSET UNITYSDK_OFFSET(0x157D3010)
#define MOLEMOLE_CONFIG_STAGEENTRY_GETSTREAMINGSCENENAME_OFFSET UNITYSDK_OFFSET(0x157D36D0)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x157D2120)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_ENVPREFABPATH_OFFSET UNITYSDK_OFFSET(0x157D2170)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_SCENEASYNCOPTION_OFFSET UNITYSDK_OFFSET(0x157D2180)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_SKIPLOADSCENE_OFFSET UNITYSDK_OFFSET(0x157D1FB0)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGEAVATARCAMERAKEY_OFFSET UNITYSDK_OFFSET(0x157D2150)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x157D2130)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGESCENEPATH_OFFSET UNITYSDK_OFFSET(0x157D2140)
#define MOLEMOLE_CONFIG_STAGEENTRY_GET_STAGESCRIPTPATH_OFFSET UNITYSDK_OFFSET(0x157D2160)
#define MOLEMOLE_CONFIG_STAGEENTRY_LOADPERPSTAGE_OFFSET UNITYSDK_OFFSET(0x157D25E0)
#define MOLEMOLE_CONFIG_STAGEENTRY_LOADSTAGEENV_OFFSET UNITYSDK_OFFSET(0x157D3060)
#define MOLEMOLE_CONFIG_STAGEENTRY_MODIFYMEMORYSETTINGSAFTERSCENELOAD_OFFSET UNITYSDK_OFFSET(0x157D34D0)
#define MOLEMOLE_CONFIG_STAGEENTRY_SETSKIPLOADSCENE_OFFSET UNITYSDK_OFFSET(0x157D20B0)
#define MOLEMOLE_CONFIG_STAGEENTRY_UNLOADSTAGE_1_OFFSET UNITYSDK_OFFSET(0x157D23B0)
#define MOLEMOLE_CONFIG_STAGEENTRY_UNLOADSTAGE_OFFSET UNITYSDK_OFFSET(0x157D21F0)
#define MOLEMOLE_CONFIG_STAGEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x157D3930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StageEntry_TypeDefinitionIndex = 87182;

	class StageEntry : public ::System::Object
	{
	public:
		::System::String* stageAvatarCamerakey; // 0x10
		::MoleMole::Config::StageEntryMode* stageEntryMode; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* highMemorySceneNames; // 0x20
		::Il2CppArray<::System::String*>* stageScriptPath; // 0x28
		::Foundation::AssetRequestHandle _sceneAsyncOption; // 0x30
		::Foundation::AssetRequestHandle _lastKeptScene; // 0x50
		::System::String* stageName; // 0x70
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

		static ::MoleMole::Config::StageEntry* Allocate(::Class_2_208CC9941471731A_239* configTemplateExt)
		{
			return ((::MoleMole::Config::StageEntry*(*)(::Class_2_208CC9941471731A_239*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY_ALLOCATE_OFFSET))(configTemplateExt);
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
