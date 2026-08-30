#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CRPGraphicsSettingsData_LocalLightLOD; }

#define RPG_CLIENT_RPGQUALITYSETTINGSPERPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x18044D60)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettingsPerPlatform_TypeDefinitionIndex = 67937;

	class RPGQualitySettingsPerPlatform : public ::System::Object
	{
	public:
		::RPG::CustomRP::Quality TAAQualityDefault; // 0x10
		::RPG::CustomRP::Quality TAAQualityStory; // 0x14
		::RPG::CustomRP::Quality DOFQuality; // 0x18
		::RPG::CustomRP::Quality UIBlurQuality; // 0x1C
		::RPG::CustomRP::CRPGraphicsSettingsData_LocalLightLOD* lod0; // 0x20
		::System::Int32 MinInstanceCountAsyncFill; // 0x28
		::System::Boolean AOUseComputeShader; // 0x2C
		::System::Boolean EnableClusterLighting; // 0x2D
		::System::Boolean EnableDynamicResolution; // 0x2E
		::System::Boolean EnableAsyncCompute; // 0x2F
		::System::Boolean EnableCMaskFastClear; // 0x30
		::System::Boolean EnableDCC; // 0x31
		::System::Boolean HiZUseCS; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGSPERPLATFORM__CTOR_OFFSET))(this);
		}
	};
}
