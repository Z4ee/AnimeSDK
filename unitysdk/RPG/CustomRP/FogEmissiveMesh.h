#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CUSTOMRP_FOGEMISSIVEMESH_START_OFFSET UNITYSDK_OFFSET(0x16A99920)
#define RPG_CUSTOMRP_FOGEMISSIVEMESH_UPDATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16A99710)
#define RPG_CUSTOMRP_FOGEMISSIVEMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x16A99960)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FogEmissiveMesh_TypeDefinitionIndex = 29352;

	class FogEmissiveMesh : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MaterialPropertyBlock* _mpb; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGEMISSIVEMESH__CTOR_OFFSET))(this);
		}

		::System::Void UpdateParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGEMISSIVEMESH_UPDATEPARAMETERS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGEMISSIVEMESH_START_OFFSET))(this);
		}
	};
}
