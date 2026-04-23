#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputInterface.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_InputData; }
namespace HoudiniEngineUnity { class HEU_InputInterfaceMesh_HEU_InputDataMesh; }
namespace HoudiniEngineUnity { class HEU_InputInterfaceMesh_HEU_InputDataMeshes; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_CREATEINPUTNODEWITHDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x8C84A50)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_CREATESINGLEMESHDATA_OFFSET UNITYSDK_OFFSET(0x8C8A760)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GENERATEMESHDATASFROMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8C84DB0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GETMESHFROMOBJECT_OFFSET UNITYSDK_OFFSET(0x8C8A900)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GETUVSFROMMESH_OFFSET UNITYSDK_OFFSET(0x8C899F0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_ISTHISINPUTOBJECTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x8C898E0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADDATA_OFFSET UNITYSDK_OFFSET(0x8C85170)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x8C84A40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceMesh_TypeDefinitionIndex = 43701;

	class HEU_InputInterfaceMesh : public ::HoudiniEngineUnity::HEU_InputInterface
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH__CTOR_OFFSET))(this);
		}

		::System::Boolean CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 connectNodeID, ::UnityEngine::GameObject* inputObject, ::System::Int32& inputNodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_CREATEINPUTNODEWITHDATAUPLOAD_OFFSET))(this, session, connectNodeID, inputObject, inputNodeID);
		}

		::System::Boolean IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_ISTHISINPUTOBJECTSUPPORTED_OFFSET))(this, inputObject);
		}

		static ::System::Void GetUVsFromMesh(::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Vector2>* srcUVs, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* destUVs, ::System::Int32 index)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GETUVSFROMMESH_OFFSET))(mesh, srcUVs, destUVs, index);
		}

		::System::Boolean UploadData(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 inputNodeID, ::HoudiniEngineUnity::HEU_InputData* inputData)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HEU_InputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADDATA_OFFSET))(this, session, inputNodeID, inputData);
		}

		::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataMeshes* GenerateMeshDatasFromGameObject(::UnityEngine::GameObject* inputObject)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataMeshes*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GENERATEMESHDATASFROMGAMEOBJECT_OFFSET))(this, inputObject);
		}

		static ::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataMesh* CreateSingleMeshData(::UnityEngine::GameObject* meshGameObject)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataMesh*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_CREATESINGLEMESHDATA_OFFSET))(meshGameObject);
		}

		static ::UnityEngine::Mesh* GetMeshFromObject(::UnityEngine::GameObject* meshGameObject)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GETMESHFROMOBJECT_OFFSET))(meshGameObject);
		}
	};
}
