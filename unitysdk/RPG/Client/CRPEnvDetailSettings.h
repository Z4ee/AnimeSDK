#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DownsampleType.h"
#include "unitysdk/RPG/CustomRP/ShaderQuality.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CRPNPCSettings; }
namespace RPG::Client { class CRPVolumetricFogSettings; }
namespace RPG::Client { class GrassSettings; }
namespace RPG::Client { class StreamingFeature; }
namespace RPG::CustomRP { class ScreenColorCopySettingsData; }
namespace RPG::CustomRP { class WaterSettingsData; }

#define RPG_CLIENT_CRPENVDETAILSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x9210790)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPEnvDetailSettings_TypeDefinitionIndex = 55429;

	class CRPEnvDetailSettings : public ::System::Object
	{
	public:
		::RPG::GameCore::GraphicQuality EnvLodQuality; // 0x10
		::RPG::CustomRP::ShaderQuality EnvShaderQuality; // 0x14
		::System::Boolean LuxGlass; // 0x18
		::System::Boolean LuxEmission; // 0x19
		::System::Int32 MasterTextureLimit; // 0x1C
		::System::Boolean EnableLensFlare; // 0x20
		::System::Single DecalDistance; // 0x24
		::System::Single DecalMinScreenSize; // 0x28
		::System::Single MotionVectorDistanceDefault; // 0x2C
		::System::Single MotionVectorDistanceStory; // 0x30
		::System::Single MotionVectorDistanceBattle; // 0x34
		::System::Single OutlineDistanceDefault; // 0x38
		::System::Single OutlineDistanceStory; // 0x3C
		::System::Single OutlineDistanceBattle; // 0x40
		::System::Boolean OutlineCullUseScreenSize; // 0x44
		::System::Single OutlineMinScreenSize; // 0x48
		::RPG::Client::CRPNPCSettings* NPCLODSettings; // 0x50
		::RPG::CustomRP::DownsampleType RTDownsampling; // 0x58
		::RPG::Client::StreamingFeature* RPGStreamingFeature; // 0x60
		::RPG::CustomRP::WaterSettingsData* WaterSettings; // 0x68
		::RPG::CustomRP::ScreenColorCopySettingsData* ScreenColorCopySettings; // 0x70
		::System::Single AnimatorAlwaysDistance; // 0x78
		::System::Single EnvEffectLODVariant; // 0x7C
		::RPG::Client::GrassSettings* GrassSettings; // 0x80
		::RPG::Client::CRPVolumetricFogSettings* FogSettings; // 0x88
		::System::Boolean EnableRenderPassSplitInMaliVulkanFollowQuality; // 0x90
		::System::Boolean NeedSceneTransparentRefraction; // 0x91

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPENVDETAILSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
