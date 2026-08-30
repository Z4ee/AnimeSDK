#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::CustomRP { class CloudTransition; }
namespace RPG::CustomRP { class VolumetricCloudLayer; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class VolumetricCloudSphere; }

#define RPG_CUSTOMRP_VOLUMETRICCLOUDSPHERESDFADAPTOR_START_OFFSET UNITYSDK_OFFSET(0x1C6F40C0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDSPHERESDFADAPTOR_SYNCCLOUDTRANSITIONPARAMS_OFFSET UNITYSDK_OFFSET(0x1C6F4990)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDSPHERESDFADAPTOR_UPDATESHADERPARAMS_OFFSET UNITYSDK_OFFSET(0x1C6F4220)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDSPHERESDFADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F49E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VolumetricCloudSphereSDFAdaptor_TypeDefinitionIndex = 37052;

	class VolumetricCloudSphereSDFAdaptor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::CustomRP::VolumetricCloudLayer* SDFCloud; // 0x18
		::UnityEngine::VolumetricCloudSphere* _CloudSphere; // 0x20
		::RPG::CustomRP::CloudTransition* _CloudTransition; // 0x28
		::UnityEngine::MaterialPropertyBlock* _Mpb; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDSPHERESDFADAPTOR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDSPHERESDFADAPTOR_START_OFFSET))(this);
		}

		::System::Void UpdateShaderParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDSPHERESDFADAPTOR_UPDATESHADERPARAMS_OFFSET))(this);
		}

		::System::Void SyncCloudTransitionParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDSPHERESDFADAPTOR_SYNCCLOUDTRANSITIONPARAMS_OFFSET))(this);
		}
	};
}
