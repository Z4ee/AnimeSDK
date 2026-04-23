#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_VolumeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputInterface.h"

namespace HoudiniEngineUnity { class HEU_InputInterfaceTerrain_HEU_InputDataTerrain; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class TerrainData; }
namespace UnityEngine { class TerrainLayer; }

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_CREATEHEIGHTFIELDINPUTNODE_OFFSET UNITYSDK_OFFSET(0x8C8B330)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_CREATEINPUTNODEWITHDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x8C8AA30)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_GENERATETERRAINDATAFROMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8C8ACE0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_ISTHISINPUTOBJECTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x8C8CC90)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETHEIGHTFIELDDATA_OFFSET UNITYSDK_OFFSET(0x8C8C990)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETMASKLAYER_OFFSET UNITYSDK_OFFSET(0x8C8C820)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTERRAINDATAATTRIBUTESTOHEIGHTFIELD_OFFSET UNITYSDK_OFFSET(0x8C8CD00)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTERRAINLAYERATTRIBUTESTOHEIGHTFIELD_OFFSET UNITYSDK_OFFSET(0x8C8D300)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTREEINSTANCES_OFFSET UNITYSDK_OFFSET(0x8C8D500)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTREEPROTOTYPES_OFFSET UNITYSDK_OFFSET(0x8C8CF00)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_UPLOADALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x8C8BCF0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_UPLOADHEIGHTVALUESWITHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8C8B4D0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x8C8AA20)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceTerrain_TypeDefinitionIndex = 43704;

	class HEU_InputInterfaceTerrain : public ::HoudiniEngineUnity::HEU_InputInterface
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 connectNodeID, ::UnityEngine::GameObject* inputObject, ::System::Int32& inputNodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_CREATEINPUTNODEWITHDATAUPLOAD_OFFSET))(this, session, connectNodeID, inputObject, inputNodeID);
		}

		::System::Boolean SetMaskLayer(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt, ::HoudiniEngineUnity::HAPI_VolumeInfo& baseVolumeInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*, ::HoudiniEngineUnity::HAPI_VolumeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETMASKLAYER_OFFSET))(this, session, idt, baseVolumeInfo);
		}

		::System::Boolean IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_ISTHISINPUTOBJECTSUPPORTED_OFFSET))(this, inputObject);
		}

		::System::Boolean CreateHeightFieldInputNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_CREATEHEIGHTFIELDINPUTNODE_OFFSET))(this, session, idt);
		}

		::System::Boolean UploadHeightValuesWithTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt, ::HoudiniEngineUnity::HAPI_VolumeInfo& volumeInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*, ::HoudiniEngineUnity::HAPI_VolumeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_UPLOADHEIGHTVALUESWITHTRANSFORM_OFFSET))(this, session, idt, volumeInfo);
		}

		::System::Boolean UploadAlphaMaps(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt, ::HoudiniEngineUnity::HAPI_VolumeInfo& baseVolumeInfo, ::System::Boolean& bMaskSet)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*, ::HoudiniEngineUnity::HAPI_VolumeInfo&, ::System::Boolean&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_UPLOADALPHAMAPS_OFFSET))(this, session, idt, baseVolumeInfo, bMaskSet);
		}

		::System::Boolean SetHeightFieldData(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 volumeNodeID, ::System::Int32 partID, ::Il2CppArray<::System::Single>* heightValues, ::System::String* heightFieldName, ::HoudiniEngineUnity::HAPI_VolumeInfo& baseVolumeInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::String*, ::HoudiniEngineUnity::HAPI_VolumeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETHEIGHTFIELDDATA_OFFSET))(this, session, volumeNodeID, partID, heightValues, heightFieldName, baseVolumeInfo);
		}

		::System::Boolean SetTerrainDataAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoNodeID, ::System::Int32 partID, ::UnityEngine::TerrainData* terrainData)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTERRAINDATAATTRIBUTESTOHEIGHTFIELD_OFFSET))(this, session, geoNodeID, partID, terrainData);
		}

		::System::Boolean SetTerrainLayerAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoNodeID, ::System::Int32 partID, ::UnityEngine::TerrainLayer* terrainLayer)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTERRAINLAYERATTRIBUTESTOHEIGHTFIELD_OFFSET))(this, session, geoNodeID, partID, terrainLayer);
		}

		::System::Void SetTreePrototypes(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoNodeID, ::System::Int32 partID, ::UnityEngine::TerrainData* terrainData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTREEPROTOTYPES_OFFSET))(this, session, geoNodeID, partID, terrainData);
		}

		::System::Void SetTreeInstances(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoNodeID, ::System::Int32 partID, ::UnityEngine::TerrainData* terrainData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTREEINSTANCES_OFFSET))(this, session, geoNodeID, partID, terrainData);
		}

		::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* GenerateTerrainDataFromGameObject(::UnityEngine::GameObject* inputObject)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_GENERATETERRAINDATAFROMGAMEOBJECT_OFFSET))(this, inputObject);
		}
	};
}
