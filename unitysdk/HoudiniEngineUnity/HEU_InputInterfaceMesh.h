#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputInterface.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_InputData; }
namespace HoudiniEngineUnity { class HEU_InputInterfaceMeshSettings; }
namespace HoudiniEngineUnity { class HEU_InputInterfaceMesh_HEU_InputDataMesh; }
namespace HoudiniEngineUnity { class HEU_InputInterfaceMesh_HEU_InputDataMeshes; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class SphereCollider; }

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_CREATEINPUTNODEFORCOLLIDER_OFFSET UNITYSDK_OFFSET(0x17F101D0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_CREATEINPUTNODEWITHDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x17F07400)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_CREATESINGLEMESHDATA_OFFSET UNITYSDK_OFFSET(0x17F105B0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GENERATEMESHDATASFROMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17F07AB0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GETCOLLIDERGROUPBASENAME_OFFSET UNITYSDK_OFFSET(0x17F10100)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GETMESHFROMOBJECT_OFFSET UNITYSDK_OFFSET(0x17F10AA0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GETUVSFROMMESH_OFFSET UNITYSDK_OFFSET(0x17F0CC30)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17F073F0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_ISTHISINPUTOBJECTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x17F0CB20)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADBOXCOLLIDERDATA_OFFSET UNITYSDK_OFFSET(0x17F0DA20)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADCAPSULECOLLIDERDATA_OFFSET UNITYSDK_OFFSET(0x17F0E600)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADCOLLIDERDATA_OFFSET UNITYSDK_OFFSET(0x17F0C080)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADDATA_OFFSET UNITYSDK_OFFSET(0x17F07F40)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADMESHCOLLIDERDATA_OFFSET UNITYSDK_OFFSET(0x17F0FA60)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADSPHERECOLLIDERDATA_OFFSET UNITYSDK_OFFSET(0x17F0E020)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x17F073E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceMesh_TypeDefinitionIndex = 37681;

	class HEU_InputInterfaceMesh : public ::HoudiniEngineUnity::HEU_InputInterface
	{
	public:
		::HoudiniEngineUnity::HEU_InputInterfaceMeshSettings* settings; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::HoudiniEngineUnity::HEU_InputInterfaceMeshSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputInterfaceMeshSettings*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Boolean CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::UnityEngine::GameObject* a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_CREATEINPUTNODEWITHDATAUPLOAD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsThisInputObjectSupported(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_ISTHISINPUTOBJECTSUPPORTED_OFFSET))(this, a1);
		}

		static ::System::Void GetUVsFromMesh(::UnityEngine::Mesh* a1, ::Il2CppArray<::UnityEngine::Vector2>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GETUVSFROMMESH_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean UploadData(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_InputData* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HEU_InputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UploadColliderData(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataMeshes* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataMeshes*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADCOLLIDERDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UploadBoxColliderData(::HoudiniEngineUnity::HEU_SessionBase* a1, ::UnityEngine::BoxCollider* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::UnityEngine::BoxCollider*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADBOXCOLLIDERDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean UploadSphereColliderData(::HoudiniEngineUnity::HEU_SessionBase* a1, ::UnityEngine::SphereCollider* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::UnityEngine::SphereCollider*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADSPHERECOLLIDERDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean UploadCapsuleColliderData(::HoudiniEngineUnity::HEU_SessionBase* a1, ::UnityEngine::CapsuleCollider* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::UnityEngine::CapsuleCollider*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADCAPSULECOLLIDERDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean UploadMeshColliderData(::HoudiniEngineUnity::HEU_SessionBase* a1, ::UnityEngine::MeshCollider* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::UnityEngine::MeshCollider*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_UPLOADMESHCOLLIDERDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* GetColliderGroupBaseName(::UnityEngine::Collider* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Collider*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GETCOLLIDERGROUPBASENAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CreateInputNodeForCollider(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32& a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String* a5, ::Il2CppArray<::System::Single>* a6, ::Il2CppArray<::System::Int32>* a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_CREATEINPUTNODEFORCOLLIDER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataMeshes* GenerateMeshDatasFromGameObject(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataMeshes*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GENERATEMESHDATASFROMGAMEOBJECT_OFFSET))(this, a1, a2);
		}

		static ::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataMesh* CreateSingleMeshData(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataMesh*(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_CREATESINGLEMESHDATA_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Mesh* GetMeshFromObject(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_GETMESHFROMOBJECT_OFFSET))(a1);
		}
	};
}
