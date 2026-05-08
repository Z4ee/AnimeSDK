#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Onager::FXMesh { class FXMeshSettings; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define ONAGER_FXMESH_FXMESH_APPLYMESH_OFFSET UNITYSDK_OFFSET(0x1C22B850)
#define ONAGER_FXMESH_FXMESH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C22CF90)
#define ONAGER_FXMESH_FXMESH_GET_MFILTER_OFFSET UNITYSDK_OFFSET(0x1C22B530)
#define ONAGER_FXMESH_FXMESH_GET_MRENDERER_OFFSET UNITYSDK_OFFSET(0x1C22B6C0)
#define ONAGER_FXMESH_FXMESH_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1C22B520)
#define ONAGER_FXMESH_FXMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C22CFA0)

namespace Onager::FXMesh
{
	inline static constexpr unsigned int FXMesh_TypeDefinitionIndex = 36443;

	class FXMesh : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Onager::FXMesh::FXMeshSettings* settings; // 0x18
		::UnityEngine::MeshFilter* _meshFilter; // 0x20
		::UnityEngine::ParticleSystemRenderer* _meshRenderer; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESH__CTOR_OFFSET))(this);
		}

		::Onager::FXMesh::FXMeshSettings* get_Settings()
		{
			return ((::Onager::FXMesh::FXMeshSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESH_GET_SETTINGS_OFFSET))(this);
		}

		::UnityEngine::MeshFilter* get_MFilter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESH_GET_MFILTER_OFFSET))(this);
		}

		::UnityEngine::ParticleSystemRenderer* get_MRenderer()
		{
			return ((::UnityEngine::ParticleSystemRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESH_GET_MRENDERER_OFFSET))(this);
		}

		::System::Void ApplyMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESH_APPLYMESH_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESH_AWAKE_OFFSET))(this);
		}
	};
}
