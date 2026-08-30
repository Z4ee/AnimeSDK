#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_MESHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6C6F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_MeshData_TypeDefinitionIndex = 39359;

	class HEU_MeshData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _vertices; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _indices; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _normals; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _tangents; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _triangleNormals; // 0x30
		::Il2CppArray<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>* _uvs; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _pointIndexToMeshIndexMap; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Color32>* _colors; // 0x48
		::UnityEngine::MeshTopology _meshTopology; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MESHDATA__CTOR_OFFSET))(this);
		}
	};
}
