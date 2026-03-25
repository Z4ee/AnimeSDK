#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ObjectInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartInfo.h"
#include "unitysdk/HoudiniEngineUnity/HEU_GenerateOptions.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ThreadedTask.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ThreadedTaskLoadGeo_LoadType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace HoudiniEngineUnity { class HEU_BaseSync; }
namespace HoudiniEngineUnity { class HEU_LoadBufferInstancer; }
namespace HoudiniEngineUnity { class HEU_LoadBufferMesh; }
namespace HoudiniEngineUnity { class HEU_LoadBufferVolume; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadCallback; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadData; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_APPENDLOG_OFFSET UNITYSDK_OFFSET(0x849DFA0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_BUILDBUFFERIDSMAP_OFFSET UNITYSDK_OFFSET(0x84A1BD0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_CLEANUP_OFFSET UNITYSDK_OFFSET(0x84A2DA0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_COOKNODE_OFFSET UNITYSDK_OFFSET(0x849E730)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_CREATEFILENODE_OFFSET UNITYSDK_OFFSET(0x84A2760)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_CREATELOGSTRING_OFFSET UNITYSDK_OFFSET(0x84A2DB0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOASSETLOAD_OFFSET UNITYSDK_OFFSET(0x84A28D0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOFILELOAD_OFFSET UNITYSDK_OFFSET(0x84A23C0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOWORK_OFFSET UNITYSDK_OFFSET(0x849DC40)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEINSTANCERBUFFERS_OFFSET UNITYSDK_OFFSET(0x84A1750)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEMESHBUFFERS_OFFSET UNITYSDK_OFFSET(0x849F5F0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEPARTSINSTANCERBUFFER_OFFSET UNITYSDK_OFFSET(0x84A3670)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEPOINTATTRIBUTEINSTANCERBUFFER_OFFSET UNITYSDK_OFFSET(0x84A3A50)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATETERRAINBUFFERS_OFFSET UNITYSDK_OFFSET(0x849FB30)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETCOOKNODEID_OFFSET UNITYSDK_OFFSET(0x84A2FE0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETDISPLAYNODEID_OFFSET UNITYSDK_OFFSET(0x84A27F0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETLOADBUFFERVOLUMEFROMTILEINDEX_OFFSET UNITYSDK_OFFSET(0x84A3570)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADFLOATFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x84A3080)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADLAYERCOLORFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x84A31E0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADLAYERVECTOR2FROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x84A33F0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADNODEBUFFER_OFFSET UNITYSDK_OFFSET(0x849EA70)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADOBJECTBUFFERS_OFFSET UNITYSDK_OFFSET(0x849E900)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADSTRINGFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x84A3000)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x84A2D50)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x84A2D80)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_QUERYPARTS_OFFSET UNITYSDK_OFFSET(0x849EF50)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETFILEPARM_OFFSET UNITYSDK_OFFSET(0x84A2840)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x849DC30)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETLOG_OFFSET UNITYSDK_OFFSET(0x84A2E90)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADASSET_OFFSET UNITYSDK_OFFSET(0x849DC00)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADFILE_OFFSET UNITYSDK_OFFSET(0x849DBD0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADNODE_OFFSET UNITYSDK_OFFSET(0x849DBA0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOAD_OFFSET UNITYSDK_OFFSET(0x849DA70)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SLEEP_OFFSET UNITYSDK_OFFSET(0x849E8F0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO__CTOR_OFFSET UNITYSDK_OFFSET(0x84A3F60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ThreadedTaskLoadGeo_TypeDefinitionIndex = 37796;

	class HEU_ThreadedTaskLoadGeo : public ::HoudiniEngineUnity::HEU_ThreadedTask
	{
	public:
		::System::String* _filePath; // 0x30
		::HoudiniEngineUnity::HEU_SessionBase* _session; // 0x38
		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* _loadData; // 0x40
		::HoudiniEngineUnity::HEU_BaseSync* _ownerSync; // 0x48
		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallback* _loadCallback; // 0x50
		::HoudiniEngineUnity::HEU_GenerateOptions _generateOptions; // 0x58
		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_LoadType _loadType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO__CTOR_OFFSET))(this);
		}

		::System::Void SetupLoad(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_BaseSync* ownerSync, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_LoadType loadType, ::System::Int32 cookNodeID, ::System::String* name, ::System::String* filePath)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_LoadType, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOAD_OFFSET))(this, session, ownerSync, loadType, cookNodeID, name, filePath);
		}

		::System::Void SetupLoadNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_BaseSync* ownerSync, ::System::Int32 cookNodeID, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADNODE_OFFSET))(this, session, ownerSync, cookNodeID, name);
		}

		::System::Void SetupLoadFile(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_BaseSync* ownerSync, ::System::Int32 cookNodeID, ::System::String* filePath)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADFILE_OFFSET))(this, session, ownerSync, cookNodeID, filePath);
		}

		::System::Void SetupLoadAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_BaseSync* ownerSync, ::System::String* assetPath, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADASSET_OFFSET))(this, session, ownerSync, assetPath, name);
		}

		::System::Void SetLoadCallback(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallback* loadCallback)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallback*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETLOADCALLBACK_OFFSET))(this, loadCallback);
		}

		::System::Void DoWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOWORK_OFFSET))(this);
		}

		::System::Boolean CookNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 cookNodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_COOKNODE_OFFSET))(this, session, cookNodeID);
		}

		::System::Boolean LoadObjectBuffers(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_ObjectInfo& objectInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_ObjectInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADOBJECTBUFFERS_OFFSET))(this, session, objectInfo);
		}

		::System::Boolean LoadNodeBuffer(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadObject* loadObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADNODEBUFFER_OFFSET))(this, session, nodeID, loadObject);
		}

		::System::Void BuildBufferIDsMap(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* loadData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_BUILDBUFFERIDSMAP_OFFSET))(this, loadData);
		}

		::System::Boolean DoFileLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOFILELOAD_OFFSET))(this);
		}

		::System::Boolean DoAssetLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOASSETLOAD_OFFSET))(this);
		}

		::System::Boolean QueryParts(::System::Int32 nodeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*& meshParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*& volumeParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*& instancerParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*& curveParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*& scatterInstancerParts)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_QUERYPARTS_OFFSET))(this, nodeID, meshParts, volumeParts, instancerParts, curveParts, scatterInstancerParts);
		}

		::System::Void OnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void OnStopped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_ONSTOPPED_OFFSET))(this);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_CLEANUP_OFFSET))(this);
		}

		::System::String* CreateLogString(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus status, ::System::String* logStr)
		{
			return ((::System::String*(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_CREATELOGSTRING_OFFSET))(this, status, logStr);
		}

		::System::Void AppendLog(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus status, ::System::String* logStr)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_APPENDLOG_OFFSET))(this, status, logStr);
		}

		::System::Void SetLog(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus status, ::System::String* logStr)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETLOG_OFFSET))(this, status, logStr);
		}

		::System::Boolean CreateFileNode(::System::Int32& fileNodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_CREATEFILENODE_OFFSET))(this, fileNodeID);
		}

		::System::Int32 GetCookNodeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETCOOKNODEID_OFFSET))(this);
		}

		::System::Int32 GetDisplayNodeID(::System::Int32 objNodeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETDISPLAYNODEID_OFFSET))(this, objNodeID);
		}

		::System::Boolean SetFileParm(::System::Int32 fileNodeID, ::System::String* filePath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETFILEPARM_OFFSET))(this, fileNodeID, filePath);
		}

		::System::Void Sleep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SLEEP_OFFSET))(this);
		}

		::System::Boolean GenerateTerrainBuffers(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* volumeParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* scatterInstancerParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*& volumeBuffers)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATETERRAINBUFFERS_OFFSET))(this, session, nodeID, volumeParts, scatterInstancerParts, volumeBuffers);
		}

		::System::Void LoadStringFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::System::String*& strValue)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADSTRINGFROMATTRIBUTE_OFFSET))(this, session, geoID, partID, attrName, strValue);
		}

		::System::Void LoadFloatFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::System::Single& floatValue)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADFLOATFROMATTRIBUTE_OFFSET))(this, session, geoID, partID, attrName, floatValue);
		}

		::System::Void LoadLayerColorFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::UnityEngine::Color& colorValue)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADLAYERCOLORFROMATTRIBUTE_OFFSET))(this, session, geoID, partID, attrName, colorValue);
		}

		::System::Void LoadLayerVector2FromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::UnityEngine::Vector2& vectorValue)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADLAYERVECTOR2FROMATTRIBUTE_OFFSET))(this, session, geoID, partID, attrName, vectorValue);
		}

		::System::Boolean GenerateMeshBuffers(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* meshParts, ::System::Boolean bSplitPoints, ::System::Boolean bUseLODGroups, ::System::Boolean bGenerateUVs, ::System::Boolean bGenerateTangents, ::System::Boolean bGenerateNormals, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*& meshBuffers)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEMESHBUFFERS_OFFSET))(this, session, nodeID, meshParts, bSplitPoints, bUseLODGroups, bGenerateUVs, bGenerateTangents, bGenerateNormals, meshBuffers);
		}

		::System::Boolean GenerateInstancerBuffers(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* instancerParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*& instancerBuffers)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEINSTANCERBUFFERS_OFFSET))(this, session, nodeID, instancerParts, instancerBuffers);
		}

		::HoudiniEngineUnity::HEU_LoadBufferInstancer* GeneratePartsInstancerBuffer(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* partName, ::HoudiniEngineUnity::HAPI_PartInfo partInfo)
		{
			return ((::HoudiniEngineUnity::HEU_LoadBufferInstancer*(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_PartInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEPARTSINSTANCERBUFFER_OFFSET))(this, session, geoID, partID, partName, partInfo);
		}

		::HoudiniEngineUnity::HEU_LoadBufferInstancer* GeneratePointAttributeInstancerBuffer(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* partName, ::HoudiniEngineUnity::HAPI_PartInfo partInfo)
		{
			return ((::HoudiniEngineUnity::HEU_LoadBufferInstancer*(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_PartInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEPOINTATTRIBUTEINSTANCERBUFFER_OFFSET))(this, session, geoID, partID, partName, partInfo);
		}

		static ::HoudiniEngineUnity::HEU_LoadBufferVolume* GetLoadBufferVolumeFromTileIndex(::System::Int32 tileIndex, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>* buffers)
		{
			return ((::HoudiniEngineUnity::HEU_LoadBufferVolume*(*)(::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETLOADBUFFERVOLUMEFROMTILEINDEX_OFFSET))(tileIndex, buffers);
		}
	};
}
