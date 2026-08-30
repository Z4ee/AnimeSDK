#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace IRIClusterBuilder { class IRIClusterBuildConfig; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARIRI__CTOR_OFFSET UNITYSDK_OFFSET(0xCC24050)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarIRI_TypeDefinitionIndex = 80856;

	class MonoCityCarIRI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IRIClusterBuilder::IRIClusterBuildConfig* ClusterBuildConfig; // 0x18
		::UnityEngine::Material* ClusterMaterial; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARIRI__CTOR_OFFSET))(this);
		}
	};
}
