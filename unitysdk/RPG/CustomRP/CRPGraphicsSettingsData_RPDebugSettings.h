#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_RPDEBUGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x192AED40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_RPDebugSettings_TypeDefinitionIndex = 36978;

	class CRPGraphicsSettingsData_RPDebugSettings : public ::System::Object
	{
	public:
		::System::Single OutlineAAScale; // 0x10
		::System::Single OutlineResolutionScale; // 0x14
		::System::Boolean TAAOutputMRT; // 0x18
		::System::Boolean DisableMainCamera; // 0x19
		::System::Boolean DisableLocalLight; // 0x1A
		::System::Boolean DisableLocalShadowLight; // 0x1B
		::System::Boolean EnableLightVRS; // 0x1C
		::System::Boolean EnableForwardTransparentVRS; // 0x1D
		::System::Boolean EnableImageVRS; // 0x1E
		::UnityEngine::Experimental::Rendering::GraphicsFormat GBufferAFormat; // 0x20
		::System::Single LocalLightLerpDelta; // 0x24
		::System::Boolean testUseNewPipeline; // 0x28
		::System::Boolean QueryPerLight; // 0x29
		::System::Boolean QueryPerCharacterShadow; // 0x2A
		::System::Boolean QueryStencilLight; // 0x2B
		::System::Boolean QueryFogEmissionBakeVolume; // 0x2C
		::System::Boolean EnableGPUParticlesProfile; // 0x2D
		::System::Boolean DisableAllGPUParticles; // 0x2E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_RPDEBUGSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
