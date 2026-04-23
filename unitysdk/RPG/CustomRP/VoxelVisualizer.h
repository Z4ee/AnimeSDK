#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Light; }

#define RPG_CUSTOMRP_VOXELVISUALIZER_LIGHTCANBEBAKED_OFFSET UNITYSDK_OFFSET(0xB4ED8B0)
#define RPG_CUSTOMRP_VOXELVISUALIZER_METHOD_5_B37B206BF73A85B5_OFFSET UNITYSDK_OFFSET(0xB4F5320)
#define RPG_CUSTOMRP_VOXELVISUALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F53E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VoxelVisualizer_TypeDefinitionIndex = 47860;

	class VoxelVisualizer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOXELVISUALIZER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean Method_5_B37B206BF73A85B5(::UnityEngine::Light* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOXELVISUALIZER_METHOD_5_B37B206BF73A85B5_OFFSET))(a1);
		}

		static ::System::Boolean LightCanBeBaked(::UnityEngine::Light* a1, ::RPG::CustomRP::CustomLightQualityFilter a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Light*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOXELVISUALIZER_LIGHTCANBEBAKED_OFFSET))(a1, a2);
		}
	};
}
