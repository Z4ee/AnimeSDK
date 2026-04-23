#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VoxelIrradianceCacheShadingFallback.h"
#include "unitysdk/UnityEngine/Rendering/VoxelIrradianceCacheShadingPass.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS_GET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0x18113AB0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS_SET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0x18113AD0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18113AE0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_VoxelIrradianceCacheSettings_TypeDefinitionIndex = 35057;

	class CRPGraphicsSettingsData_VoxelIrradianceCacheSettings : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Boolean HalfRes; // 0x11
		::System::Boolean ForceDisableAO; // 0x12
		::System::Boolean HDRAmbientTex; // 0x13
		::System::Boolean SHCompression; // 0x14
		::System::Boolean EvalSHSimple; // 0x15
		::UnityEngine::Rendering::VoxelIrradianceCacheShadingPass ShadingPass; // 0x18
		::UnityEngine::Rendering::VoxelIrradianceCacheShadingFallback ShadingFallback; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS__CTOR_OFFSET))(this);
		}

		::System::Single get_RenderScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS_GET_RENDERSCALE_OFFSET))(this);
		}

		::System::Void set_RenderScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS_SET_RENDERSCALE_OFFSET))(this, value);
		}
	};
}
