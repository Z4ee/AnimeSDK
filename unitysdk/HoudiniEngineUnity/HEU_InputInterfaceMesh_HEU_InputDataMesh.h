#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_InputInterfaceMesh_HEU_InputDataCollider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_HEU_INPUTDATAMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B434ED0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceMesh_HEU_InputDataMesh_TypeDefinitionIndex = 39352;

	class HEU_InputInterfaceMesh_HEU_InputDataMesh : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _indexStart; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* _materials; // 0x18
		::Il2CppArray<::System::UInt32>* _indexCount; // 0x20
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputDataCollider*>* _colliders; // 0x28
		::UnityEngine::Transform* _transform; // 0x30
		::System::String* _meshPath; // 0x38
		::UnityEngine::Mesh* _mesh; // 0x40
		::System::String* _meshName; // 0x48
		::System::Single _LODScreenTransition; // 0x50
		::System::Int32 _numVertices; // 0x54
		::System::Int32 _numSubMeshes; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_HEU_INPUTDATAMESH__CTOR_OFFSET))(this);
		}
	};
}
