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

#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_APPENDLOG_OFFSET UNITYSDK_OFFSET(0x1B491000)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_BUILDBUFFERIDSMAP_OFFSET UNITYSDK_OFFSET(0x1B4949D0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1B495C40)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_COOKNODE_OFFSET UNITYSDK_OFFSET(0x1B491170)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_CREATEFILENODE_OFFSET UNITYSDK_OFFSET(0x1B495320)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_CREATELOGSTRING_OFFSET UNITYSDK_OFFSET(0x1B495C50)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOASSETLOAD_OFFSET UNITYSDK_OFFSET(0x1B495640)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOFILELOAD_OFFSET UNITYSDK_OFFSET(0x1B494FF0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOWORK_OFFSET UNITYSDK_OFFSET(0x1B4909B0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEINSTANCERBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B494620)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEMESHBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B492480)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEPARTSINSTANCERBUFFER_OFFSET UNITYSDK_OFFSET(0x1B496830)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEPOINTATTRIBUTEINSTANCERBUFFER_OFFSET UNITYSDK_OFFSET(0x1B496EA0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATETERRAINBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B492920)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETCOOKNODEID_OFFSET UNITYSDK_OFFSET(0x1B495EE0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETDISPLAYNODEID_OFFSET UNITYSDK_OFFSET(0x1B495410)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETLOADBUFFERVOLUMEFROMTILEINDEX_OFFSET UNITYSDK_OFFSET(0x1B496750)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETVALIDASSETCACHEFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x1B4908C0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADFLOATFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B495F80)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADLAYERCOLORFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B4961D0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADLAYERVECTOR2FROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B4964E0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADNODEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4917F0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADOBJECTBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B491470)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADSTRINGFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B495F00)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B495B80)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x1B495C20)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_QUERYPARTS_OFFSET UNITYSDK_OFFSET(0x1B491CF0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETFILEPARM_OFFSET UNITYSDK_OFFSET(0x1B4954D0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B4909A0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETLOG_OFFSET UNITYSDK_OFFSET(0x1B495D90)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADASSET_OFFSET UNITYSDK_OFFSET(0x1B490970)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1B490940)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADNODE_OFFSET UNITYSDK_OFFSET(0x1B490910)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOAD_OFFSET UNITYSDK_OFFSET(0x1B490760)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SLEEP_OFFSET UNITYSDK_OFFSET(0x1B491460)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B497890)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ThreadedTaskLoadGeo_TypeDefinitionIndex = 39316;

	class HEU_ThreadedTaskLoadGeo : public ::HoudiniEngineUnity::HEU_ThreadedTask
	{
	public:
		::System::String* _filePath; // 0x30
		::HoudiniEngineUnity::HEU_SessionBase* _session; // 0x38
		::HoudiniEngineUnity::HEU_BaseSync* _ownerSync; // 0x40
		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* _loadData; // 0x48
		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallback* _loadCallback; // 0x50
		::System::String* _assetCachePath; // 0x58
		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_LoadType _loadType; // 0x60
		::HoudiniEngineUnity::HEU_GenerateOptions _generateOptions; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO__CTOR_OFFSET))(this);
		}

		::System::Void SetupLoad(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_BaseSync* a2, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_LoadType a3, ::System::Int32 a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_LoadType, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOAD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetupLoadNode(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_BaseSync* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADNODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetupLoadFile(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_BaseSync* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADFILE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetupLoadAsset(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_BaseSync* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETUPLOADASSET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetLoadCallback(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallback*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETLOADCALLBACK_OFFSET))(this, a1);
		}

		::System::Void DoWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOWORK_OFFSET))(this);
		}

		::System::Boolean CookNode(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_COOKNODE_OFFSET))(this, a1, a2);
		}

		::System::Boolean LoadObjectBuffers(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_ObjectInfo& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_ObjectInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADOBJECTBUFFERS_OFFSET))(this, a1, a2);
		}

		::System::Boolean LoadNodeBuffer(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadObject* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADNODEBUFFER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BuildBufferIDsMap(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_BUILDBUFFERIDSMAP_OFFSET))(this, a1);
		}

		::System::Boolean DoFileLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOFILELOAD_OFFSET))(this);
		}

		::System::Boolean DoAssetLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_DOASSETLOAD_OFFSET))(this);
		}

		::System::Boolean QueryParts(::System::Int32 a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*& a2, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*& a3, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*& a4, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*& a5, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*& a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_QUERYPARTS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
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

		::System::String* CreateLogString(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_CREATELOGSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void AppendLog(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_APPENDLOG_OFFSET))(this, a1, a2);
		}

		::System::Void SetLog(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETLOG_OFFSET))(this, a1, a2);
		}

		::System::Boolean CreateFileNode(::System::Int32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_CREATEFILENODE_OFFSET))(this, a1);
		}

		::System::Int32 GetCookNodeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETCOOKNODEID_OFFSET))(this);
		}

		::System::Int32 GetDisplayNodeID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETDISPLAYNODEID_OFFSET))(this, a1);
		}

		::System::Boolean SetFileParm(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SETFILEPARM_OFFSET))(this, a1, a2);
		}

		::System::Void Sleep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_SLEEP_OFFSET))(this);
		}

		::System::Boolean GenerateTerrainBuffers(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* a3, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* a4, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATETERRAINBUFFERS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoadStringFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::String*& a5)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADSTRINGFROMATTRIBUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoadFloatFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Single& a5)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADFLOATFROMATTRIBUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoadLayerColorFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::Color& a5)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADLAYERCOLORFROMATTRIBUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoadLayerVector2FromAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::Vector2& a5)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_LOADLAYERVECTOR2FROMATTRIBUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean GenerateMeshBuffers(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadObject* a9, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*& a10)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadObject*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEMESHBUFFERS_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Boolean GenerateInstancerBuffers(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* a3, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEINSTANCERBUFFERS_OFFSET))(this, a1, a2, a3, a4);
		}

		::HoudiniEngineUnity::HEU_LoadBufferInstancer* GeneratePartsInstancerBuffer(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::HoudiniEngineUnity::HAPI_PartInfo a5)
		{
			return ((::HoudiniEngineUnity::HEU_LoadBufferInstancer*(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_PartInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEPARTSINSTANCERBUFFER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::HoudiniEngineUnity::HEU_LoadBufferInstancer* GeneratePointAttributeInstancerBuffer(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::HoudiniEngineUnity::HAPI_PartInfo a5)
		{
			return ((::HoudiniEngineUnity::HEU_LoadBufferInstancer*(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_PartInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GENERATEPOINTATTRIBUTEINSTANCERBUFFER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::HoudiniEngineUnity::HEU_LoadBufferVolume* GetLoadBufferVolumeFromTileIndex(::System::Int32 a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>* a2)
		{
			return ((::HoudiniEngineUnity::HEU_LoadBufferVolume*(*)(::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETLOADBUFFERVOLUMEFROMTILEINDEX_OFFSET))(a1, a2);
		}

		static ::System::String* GetValidAssetCacheFolderPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_GETVALIDASSETCACHEFOLDERPATH_OFFSET))(a1);
		}
	};
}
