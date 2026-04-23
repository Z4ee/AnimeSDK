#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SubmeshInstruction.h"
#include "unitysdk/System/Object.h"

namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity { class MeshRendererBuffers_SmartMesh; }
namespace Spine::Unity { template <typename T> class DoubleBuffered_1; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_MESHRENDERERBUFFERS_CLEAR_OFFSET UNITYSDK_OFFSET(0x19E44090)
#define SPINE_UNITY_MESHRENDERERBUFFERS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E440F0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_GETNEXTMESH_OFFSET UNITYSDK_OFFSET(0x19E44060)
#define SPINE_UNITY_MESHRENDERERBUFFERS_GETUPDATEDSHAREDMATERIALSARRAY_OFFSET UNITYSDK_OFFSET(0x19E43D50)
#define SPINE_UNITY_MESHRENDERERBUFFERS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19E43B30)
#define SPINE_UNITY_MESHRENDERERBUFFERS_MATERIALSCHANGEDINLASTUPDATE_OFFSET UNITYSDK_OFFSET(0x19E43E40)
#define SPINE_UNITY_MESHRENDERERBUFFERS_UPDATESHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x19E43ED0)
#define SPINE_UNITY_MESHRENDERERBUFFERS__CTOR_OFFSET UNITYSDK_OFFSET(0x19E441F0)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshRendererBuffers_TypeDefinitionIndex = 40638;

	class MeshRendererBuffers : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* sharedMaterials; // 0x10
		::Spine::ExposedList_1<::UnityEngine::Material*>* submeshMaterials; // 0x18
		::Spine::Unity::DoubleBuffered_1<::Spine::Unity::MeshRendererBuffers_SmartMesh*>* doubleBufferedMesh; // 0x20

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

		::System::Void UpdateSharedMaterials(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* instructions)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_UPDATESHAREDMATERIALS_OFFSET))(this, instructions);
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
