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

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_CREATEHEIGHTFIELDINPUTNODE_OFFSET UNITYSDK_OFFSET(0x11A58D30)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_CREATEINPUTNODEWITHDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x11A58330)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_GENERATETERRAINDATAFROMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x11A586F0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_ISTHISINPUTOBJECTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x11A5BE20)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETHEIGHTFIELDDATA_OFFSET UNITYSDK_OFFSET(0x11A5B7A0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETMASKLAYER_OFFSET UNITYSDK_OFFSET(0x11A5B530)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTERRAINDATAATTRIBUTESTOHEIGHTFIELD_OFFSET UNITYSDK_OFFSET(0x11A5BE90)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTERRAINLAYERATTRIBUTESTOHEIGHTFIELD_OFFSET UNITYSDK_OFFSET(0x11A5C030)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTREEINSTANCES_OFFSET UNITYSDK_OFFSET(0x11A5C090)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTREEPROTOTYPES_OFFSET UNITYSDK_OFFSET(0x11A5BEF0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_UPLOADALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x11A5A290)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_UPLOADHEIGHTVALUESWITHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11A59190)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x11A58320)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceTerrain_TypeDefinitionIndex = 39354;

	class HEU_InputInterfaceTerrain : public ::HoudiniEngineUnity::HEU_InputInterface
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::UnityEngine::GameObject* a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_CREATEINPUTNODEWITHDATAUPLOAD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean SetMaskLayer(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* a2, ::HoudiniEngineUnity::HAPI_VolumeInfo& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*, ::HoudiniEngineUnity::HAPI_VolumeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETMASKLAYER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsThisInputObjectSupported(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_ISTHISINPUTOBJECTSUPPORTED_OFFSET))(this, a1);
		}

		::System::Boolean CreateHeightFieldInputNode(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_CREATEHEIGHTFIELDINPUTNODE_OFFSET))(this, a1, a2);
		}

		::System::Boolean UploadHeightValuesWithTransform(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* a2, ::HoudiniEngineUnity::HAPI_VolumeInfo& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*, ::HoudiniEngineUnity::HAPI_VolumeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_UPLOADHEIGHTVALUESWITHTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UploadAlphaMaps(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* a2, ::HoudiniEngineUnity::HAPI_VolumeInfo& a3, ::System::Boolean& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*, ::HoudiniEngineUnity::HAPI_VolumeInfo&, ::System::Boolean&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_UPLOADALPHAMAPS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean SetHeightFieldData(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Single>* a4, ::System::String* a5, ::HoudiniEngineUnity::HAPI_VolumeInfo& a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::String*, ::HoudiniEngineUnity::HAPI_VolumeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETHEIGHTFIELDDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean SetTerrainDataAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TerrainData* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTERRAINDATAATTRIBUTESTOHEIGHTFIELD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean SetTerrainLayerAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TerrainLayer* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTERRAINLAYERATTRIBUTESTOHEIGHTFIELD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetTreePrototypes(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TerrainData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTREEPROTOTYPES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetTreeInstances(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TerrainData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_SETTREEINSTANCES_OFFSET))(this, a1, a2, a3, a4);
		}

		::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* GenerateTerrainDataFromGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETERRAIN_GENERATETERRAINDATAFROMGAMEOBJECT_OFFSET))(this, a1);
		}
	};
}
