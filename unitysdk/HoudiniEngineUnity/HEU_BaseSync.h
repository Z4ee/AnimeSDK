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
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_BASESYNC_ADDGENERATEDOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x8413070)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_APPLYATTRIBUTEMODIFIERSONGAMEOBJECTOUTPUT_OFFSET UNITYSDK_OFFSET(0x84133D0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_AWAKE_OFFSET UNITYSDK_OFFSET(0x840FB40)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_BAKE_OFFSET UNITYSDK_OFFSET(0x8410410)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_CLEARLOG_OFFSET UNITYSDK_OFFSET(0x8410100)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_CREATENEWINSTANCEFROMOBJECT_OFFSET UNITYSDK_OFFSET(0x8416F80)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_DELETESESSIONDATA_OFFSET UNITYSDK_OFFSET(0x8407DF0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_DESTROYGENERATEDDATA_OFFSET UNITYSDK_OFFSET(0x8408860)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_DESTROYOUTPUTS_OFFSET UNITYSDK_OFFSET(0x840FBD0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_ERROR_OFFSET UNITYSDK_OFFSET(0x8410210)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEALLINSTANCERS_OFFSET UNITYSDK_OFFSET(0x8412D10)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x8410C60)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCER_OFFSET UNITYSDK_OFFSET(0x84150B0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCESFROMASSETPATHS_OFFSET UNITYSDK_OFFSET(0x8415F20)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCESFROMNODEIDS_OFFSET UNITYSDK_OFFSET(0x8415390)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0x8410D90)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEOBJECTS_OFFSET UNITYSDK_OFFSET(0x8410C00)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATETERRAIN_OFFSET UNITYSDK_OFFSET(0x8411280)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GETHOUDINISESSION_OFFSET UNITYSDK_OFFSET(0x840FE80)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GETOUTPUTCACHEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x8412F00)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_GETPARENTNODEID_OFFSET UNITYSDK_OFFSET(0x840FB60)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8407FA0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_ISLOADED_OFFSET UNITYSDK_OFFSET(0x8410230)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_LOG_OFFSET UNITYSDK_OFFSET(0x840FFF0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x840FB50)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_ONLOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0x8408160)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x8412DB0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_RESET_OFFSET UNITYSDK_OFFSET(0x8410B30)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_RESYNC_OFFSET UNITYSDK_OFFSET(0x84103D0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_SETOUTPUTCACHEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x8418720)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_SETOUTPUTVISIBLITY_OFFSET UNITYSDK_OFFSET(0x8413420)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_SETUPLOADTASK_OFFSET UNITYSDK_OFFSET(0x8410250)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_STARTSYNC_OFFSET UNITYSDK_OFFSET(0x8408870)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_STOPSYNC_OFFSET UNITYSDK_OFFSET(0x8410260)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x8418730)
#define HOUDINIENGINEUNITY_HEU_BASESYNC_UNLOAD_OFFSET UNITYSDK_OFFSET(0x84109B0)
#define HOUDINIENGINEUNITY_HEU_BASESYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x8408B70)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_BaseSync_TypeDefinitionIndex = 37778;

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
		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* _loadTask; // 0x70
		::System::Int32 _totalCookCount; // 0x78
		::System::Boolean _firstSyncComplete; // 0x7C

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

		::HoudiniEngineUnity::HEU_SessionBase* GetHoudiniSession(::System::Boolean bCreateIfNotFound)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GETHOUDINISESSION_OFFSET))(this, bCreateIfNotFound);
		}

		::System::Int32 GetParentNodeID(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Int32(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GETPARENTNODEID_OFFSET))(this, session);
		}

		::System::Void Log(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_LOG_OFFSET))(this, msg);
		}

		::System::Void ClearLog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_CLEARLOG_OFFSET))(this);
		}

		::System::Void Error(::System::String* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_ERROR_OFFSET))(this, error);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_ISLOADED_OFFSET))(this);
		}

		::System::Void StartSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_STARTSYNC_OFFSET))(this);
		}

		::System::Void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_SETUPLOADTASK_OFFSET))(this, session);
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

		::System::Void OnLoadComplete(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* loadData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_ONLOADCOMPLETE_OFFSET))(this, loadData);
		}

		::System::Void GenerateObjects(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* loadData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEOBJECTS_OFFSET))(this, loadData);
		}

		::System::Void GenerateGeometry(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* loadData, ::System::Int32 objIndex)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEGEOMETRY_OFFSET))(this, loadData, objIndex);
		}

		::System::Void OnStopped(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* loadData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_ONSTOPPED_OFFSET))(this, loadData);
		}

		::System::Void GenerateTerrain(::System::Int32 cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>* terrainBuffers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATETERRAIN_OFFSET))(this, cookNodeId, terrainBuffers);
		}

		::System::Void GenerateMesh(::System::Int32 cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>* meshBuffers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEMESH_OFFSET))(this, cookNodeId, meshBuffers);
		}

		::System::Void GenerateAllInstancers(::System::Int32 cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>* instancerBuffers, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* loadData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEALLINSTANCERS_OFFSET))(this, cookNodeId, instancerBuffers, loadData);
		}

		::System::Void GenerateInstancer(::System::Int32 cookNodeId, ::HoudiniEngineUnity::HEU_LoadBufferInstancer* instancerBuffer, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferBase*>* idBuffersMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferInstancer*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferBase*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCER_OFFSET))(this, cookNodeId, instancerBuffer, idBuffersMap);
		}

		::System::Void GenerateInstancesFromNodeIDs(::System::Int32 cookNodeId, ::HoudiniEngineUnity::HEU_LoadBufferInstancer* instancerBuffer, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferBase*>* idBuffersMap, ::UnityEngine::Transform* instanceRootTransform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferInstancer*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferBase*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCESFROMNODEIDS_OFFSET))(this, cookNodeId, instancerBuffer, idBuffersMap, instanceRootTransform);
		}

		::System::Void GenerateInstancesFromAssetPaths(::HoudiniEngineUnity::HEU_LoadBufferInstancer* instancerBuffer, ::UnityEngine::Transform* instanceRootTransform)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_LoadBufferInstancer*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GENERATEINSTANCESFROMASSETPATHS_OFFSET))(this, instancerBuffer, instanceRootTransform);
		}

		::System::Void CreateNewInstanceFromObject(::UnityEngine::GameObject* assetSourceGO, ::System::Int32 instanceIndex, ::UnityEngine::Transform* parentTransform, ::HoudiniEngineUnity::HAPI_Transform& hapiTransform, ::Il2CppArray<::System::String*>* instancePrefixes, ::System::String* instanceName, ::UnityEngine::GameObject* collisionSourceGO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::Transform*, ::HoudiniEngineUnity::HAPI_Transform&, ::Il2CppArray<::System::String*>*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_CREATENEWINSTANCEFROMOBJECT_OFFSET))(this, assetSourceGO, instanceIndex, parentTransform, hapiTransform, instancePrefixes, instanceName, collisionSourceGO);
		}

		::System::Void ApplyAttributeModifiersOnGameObjectOutput(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partId, ::UnityEngine::GameObject*& go)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_APPLYATTRIBUTEMODIFIERSONGAMEOBJECTOUTPUT_OFFSET))(this, session, geoID, partId, go);
		}

		::System::Void DestroyOutputs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_DESTROYOUTPUTS_OFFSET))(this);
		}

		::System::Void SetOutputVisiblity(::HoudiniEngineUnity::HEU_LoadBufferBase* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_LoadBufferBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_SETOUTPUTVISIBLITY_OFFSET))(this, buffer);
		}

		::System::String* GetOutputCacheDirectory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_GETOUTPUTCACHEDIRECTORY_OFFSET))(this);
		}

		::System::Void SetOutputCacheDirectory(::System::String* directory)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_SETOUTPUTCACHEDIRECTORY_OFFSET))(this, directory);
		}

		::System::Void AddGeneratedOutputFilePath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_ADDGENERATEDOUTPUTFILEPATH_OFFSET))(this, path);
		}

		::System::Void SyncUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BASESYNC_SYNCUPDATE_OFFSET))(this);
		}
	};
}
