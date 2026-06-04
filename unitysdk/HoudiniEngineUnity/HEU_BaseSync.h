#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/HoudiniEngineUnity/HEU_GenerateOptions.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_GeneratedOutput; }
namespace HoudiniEngineUnity { class HEU_LoadBufferBase; }
namespace HoudiniEngineUnity { class HEU_LoadBufferInstancer; }
namespace HoudiniEngineUnity { class HEU_LoadBufferMesh; }
namespace HoudiniEngineUnity { class HEU_LoadBufferVolume; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_SyncedEventData; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_BASESYNC_ADDGENERATEDOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x17EB1020)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_APPLYATTRIBUTEMODIFIERSONGAMEOBJECTOUTPUT_OFFSET UNITYSDK_OFFSET(0x17EB1380)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_AWAKE_OFFSET UNITYSDK_OFFSET(0x17EADDF0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_BAKE_OFFSET UNITYSDK_OFFSET(0x17EAE630)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_CLEARLOG_OFFSET UNITYSDK_OFFSET(0x17EAE320)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_CREATENEWINSTANCEFROMOBJECT_OFFSET UNITYSDK_OFFSET(0x17EB33A0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_DELETESESSIONDATA_OFFSET UNITYSDK_OFFSET(0x17EA5E40)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_DESTROYGENERATEDDATA_OFFSET UNITYSDK_OFFSET(0x17EA6410)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_DESTROYOUTPUTS_OFFSET UNITYSDK_OFFSET(0x17EADE80)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_ERROR_OFFSET UNITYSDK_OFFSET(0x17EAE430)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEALLINSTANCERS_OFFSET UNITYSDK_OFFSET(0x17EB0D60)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x17EAEDB0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCER_OFFSET UNITYSDK_OFFSET(0x17EB1DD0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCESFROMASSETPATHS_OFFSET UNITYSDK_OFFSET(0x17EB2940)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCESFROMNODEIDS_OFFSET UNITYSDK_OFFSET(0x17EB2160)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0x17EAEED0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEOBJECTS_OFFSET UNITYSDK_OFFSET(0x17EAED50)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATETERRAIN_OFFSET UNITYSDK_OFFSET(0x17EAF5E0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GETHOUDINISESSION_OFFSET UNITYSDK_OFFSET(0x17EAE0A0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GETOUTPUTCACHEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17EB0FC0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GETPARENTNODEID_OFFSET UNITYSDK_OFFSET(0x17EADE10)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GET_ONSYNCED_OFFSET UNITYSDK_OFFSET(0x17EB4DA0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17EA5FF0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_ISLOADED_OFFSET UNITYSDK_OFFSET(0x17EAE450)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_LOG_OFFSET UNITYSDK_OFFSET(0x17EAE210)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17EADE00)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_ONLOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0x17EA61E0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x17EB0E00)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_RESET_OFFSET UNITYSDK_OFFSET(0x17EAEC80)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_RESYNC_OFFSET UNITYSDK_OFFSET(0x17EAE5F0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_SETOUTPUTCACHEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17EB4D80)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_SETOUTPUTVISIBLITY_OFFSET UNITYSDK_OFFSET(0x17EB13D0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_SETUPLOADTASK_OFFSET UNITYSDK_OFFSET(0x17EAE470)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_SET_ONSYNCED_OFFSET UNITYSDK_OFFSET(0x17EB4DB0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_STARTSYNC_OFFSET UNITYSDK_OFFSET(0x17EA6420)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_STOPSYNC_OFFSET UNITYSDK_OFFSET(0x17EAE480)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x17EB4D90)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_UNLOAD_OFFSET UNITYSDK_OFFSET(0x17EAEB00)
#define HOUDINIENGINEUNITY_HEU_BASESYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA6720)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_BaseSync_TypeDefinitionIndex = 37631;

	class HEU_BaseSync : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 _cookNodeID; // 0x18
		::System::Int64 _sessionID; // 0x20
		::System::String* _nodeName; // 0x28
		::System::Boolean _initialized; // 0x30
		::System::Boolean _syncing; // 0x31
		::System::Boolean _deleteParent; // 0x32
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* _generatedOutputs; // 0x38
		::System::String* _outputCacheDirectory; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* _outputCacheFilePaths; // 0x48
		::HoudiniEngineUnity::HEU_GenerateOptions _generateOptions; // 0x50
		::System::Text::StringBuilder* _log; // 0x58
		::System::Text::StringBuilder* _error; // 0x60
		::System::Boolean _sessionSyncAutoCook; // 0x68
		::System::Action_1<::HoudiniEngineUnity::HEU_SyncedEventData*>* _onSynced; // 0x70
		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* _loadTask; // 0x78
		::System::Int32 _totalCookCount; // 0x80
		::System::Boolean _firstSyncComplete; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_ONDESTROY_OFFSET))(this);
		}

		::System::Void DeleteSessionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_DELETESESSIONDATA_OFFSET))(this);
		}

		::System::Void DestroyGeneratedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_DESTROYGENERATEDDATA_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_INITIALIZE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_SessionBase* GetHoudiniSession(::System::Boolean a1)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GETHOUDINISESSION_OFFSET))(this, a1);
		}

		::System::Int32 GetParentNodeID(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GETPARENTNODEID_OFFSET))(this, a1);
		}

		::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_LOG_OFFSET))(this, a1);
		}

		::System::Void ClearLog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_CLEARLOG_OFFSET))(this);
		}

		::System::Void Error(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_ERROR_OFFSET))(this, a1);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_ISLOADED_OFFSET))(this);
		}

		::System::Void StartSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_STARTSYNC_OFFSET))(this);
		}

		::System::Void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_SETUPLOADTASK_OFFSET))(this, a1);
		}

		::System::Void StopSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_STOPSYNC_OFFSET))(this);
		}

		::System::Void Resync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_RESYNC_OFFSET))(this);
		}

		::System::Void Bake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_BAKE_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_UNLOAD_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_RESET_OFFSET))(this);
		}

		::System::Void OnLoadComplete(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_ONLOADCOMPLETE_OFFSET))(this, a1);
		}

		::System::Void GenerateObjects(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEOBJECTS_OFFSET))(this, a1);
		}

		::System::Void GenerateGeometry(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEGEOMETRY_OFFSET))(this, a1, a2);
		}

		::System::Void OnStopped(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_ONSTOPPED_OFFSET))(this, a1);
		}

		::System::Void GenerateTerrain(::System::Int32 a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATETERRAIN_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateMesh(::System::Int32 a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEMESH_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateAllInstancers(::System::Int32 a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>* a2, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEALLINSTANCERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GenerateInstancer(::System::Int32 a1, ::HoudiniEngineUnity::HEU_LoadBufferInstancer* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferBase*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferInstancer*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferBase*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GenerateInstancesFromNodeIDs(::System::Int32 a1, ::HoudiniEngineUnity::HEU_LoadBufferInstancer* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferBase*>* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferInstancer*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferBase*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCESFROMNODEIDS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GenerateInstancesFromAssetPaths(::HoudiniEngineUnity::HEU_LoadBufferInstancer* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_LoadBufferInstancer*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCESFROMASSETPATHS_OFFSET))(this, a1, a2);
		}

		::System::Void CreateNewInstanceFromObject(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::UnityEngine::Transform* a3, ::HoudiniEngineUnity::HAPI_Transform& a4, ::Il2CppArray<::System::String*>* a5, ::System::String* a6, ::UnityEngine::GameObject* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::Transform*, ::HoudiniEngineUnity::HAPI_Transform&, ::Il2CppArray<::System::String*>*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_CREATENEWINSTANCEFROMOBJECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void ApplyAttributeModifiersOnGameObjectOutput(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::GameObject*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_APPLYATTRIBUTEMODIFIERSONGAMEOBJECTOUTPUT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DestroyOutputs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_DESTROYOUTPUTS_OFFSET))(this);
		}

		::System::Void SetOutputVisiblity(::HoudiniEngineUnity::HEU_LoadBufferBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_LoadBufferBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_SETOUTPUTVISIBLITY_OFFSET))(this, a1);
		}

		::System::String* GetOutputCacheDirectory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GETOUTPUTCACHEDIRECTORY_OFFSET))(this);
		}

		::System::Void SetOutputCacheDirectory(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_SETOUTPUTCACHEDIRECTORY_OFFSET))(this, a1);
		}

		::System::Void AddGeneratedOutputFilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_ADDGENERATEDOUTPUTFILEPATH_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_SYNCUPDATE_OFFSET))(this);
		}

		::System::Action_1<::HoudiniEngineUnity::HEU_SyncedEventData*>* get_OnSynced()
		{
			return ((::System::Action_1<::HoudiniEngineUnity::HEU_SyncedEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GET_ONSYNCED_OFFSET))(this);
		}

		::System::Void set_OnSynced(::System::Action_1<::HoudiniEngineUnity::HEU_SyncedEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::HoudiniEngineUnity::HEU_SyncedEventData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_SET_ONSYNCED_OFFSET))(this, a1);
		}
	};
}
