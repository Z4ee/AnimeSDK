#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Onager::FXMesh { class FXMeshSettings; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define ONAGER_FXMESH_FXPARTICLE_APPLYMESH_OFFSET UNITYSDK_OFFSET(0x1C22E4A0)
#define ONAGER_FXMESH_FXPARTICLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C22E490)
#define ONAGER_FXMESH_FXPARTICLE_GET_PSR_OFFSET UNITYSDK_OFFSET(0x1C22E300)
#define ONAGER_FXMESH_FXPARTICLE_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1C22E2F0)
#define ONAGER_FXMESH_FXPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C22E790)

namespace Onager::FXMesh
{
	inline static constexpr unsigned int FXParticle_TypeDefinitionIndex = 36448;

	class FXParticle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Onager::FXMesh::FXMeshSettings* settings; // 0x18
		::UnityEngine::ParticleSystemRenderer* _psr; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXPARTICLE__CTOR_OFFSET))(this);
		}

		::Onager::FXMesh::FXMeshSettings* get_Settings()
		{
			return ((::Onager::FXMesh::FXMeshSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXPARTICLE_GET_SETTINGS_OFFSET))(this);
		}

		::UnityEngine::ParticleSystemRenderer* get_psr()
		{
			return ((::UnityEngine::ParticleSystemRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXPARTICLE_GET_PSR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXPARTICLE_AWAKE_OFFSET))(this);
		}

		::System::Void ApplyMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXPARTICLE_APPLYMESH_OFFSET))(this);
		}
	};
}
