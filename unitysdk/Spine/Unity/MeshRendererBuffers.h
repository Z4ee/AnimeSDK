#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SubmeshInstruction.h"
#include "unitysdk/System/Object.h"

namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity { class MeshRendererBuffers_SmartMesh; }
namespace Spine::Unity { template <typename T> class DoubleBuffered_1; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_MESHRENDERERBUFFERS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ACBD4E0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ACBD540)
#define SPINE_UNITY_MESHRENDERERBUFFERS_GETNEXTMESH_OFFSET UNITYSDK_OFFSET(0x1ACBD4B0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_GETUPDATEDSHAREDMATERIALSARRAY_OFFSET UNITYSDK_OFFSET(0x1ACBD1C0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ACBCFA0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_MATERIALSCHANGEDINLASTUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACBD2B0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_UPDATESHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1ACBD340)
#define SPINE_UNITY_MESHRENDERERBUFFERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACBD630)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshRendererBuffers_TypeDefinitionIndex = 41465;

	class MeshRendererBuffers : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* sharedMaterials; // 0x10
		::Spine::Unity::DoubleBuffered_1<::Spine::Unity::MeshRendererBuffers_SmartMesh*>* doubleBufferedMesh; // 0x18
		::Spine::ExposedList_1<::UnityEngine::Material*>* submeshMaterials; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_INITIALIZE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetUpdatedSharedMaterialsArray()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_GETUPDATEDSHAREDMATERIALSARRAY_OFFSET))(this);
		}

		::System::Boolean MaterialsChangedInLastUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_MATERIALSCHANGEDINLASTUPDATE_OFFSET))(this);
		}

		::System::Void UpdateSharedMaterials(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_UPDATESHAREDMATERIALS_OFFSET))(this, a1);
		}

		::Spine::Unity::MeshRendererBuffers_SmartMesh* GetNextMesh()
		{
			return ((::Spine::Unity::MeshRendererBuffers_SmartMesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_GETNEXTMESH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_DISPOSE_OFFSET))(this);
		}
	};
}
