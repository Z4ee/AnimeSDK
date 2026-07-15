#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AntialiasingMode.h"
#include "unitysdk/RPG/Client/RPGQualitySettingsBoolWrapper.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RPGQUALITYSETTINGSMODEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1679A4B0)
#define RPG_CLIENT_RPGQUALITYSETTINGSMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1679CDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettingsModel_TypeDefinitionIndex = 64915;

	class RPGQualitySettingsModel : public ::System::Object
	{
	public:
		::System::Int32 FPS; // 0x10
		::System::Boolean EnableVSync; // 0x14
		::System::Single RenderScale; // 0x18
		::RPG::CustomRP::Quality ResolutionQuality; // 0x1C
		::RPG::CustomRP::Quality ShadowQuality; // 0x20
		::RPG::CustomRP::Quality LightQuality; // 0x24
		::RPG::CustomRP::Quality CharacterQuality; // 0x28
		::RPG::CustomRP::Quality EnvDetailQuality; // 0x2C
		::RPG::CustomRP::Quality ReflectionQuality; // 0x30
		::RPG::CustomRP::Quality SFXQuality; // 0x34
		::RPG::CustomRP::Quality BloomQuality; // 0x38
		::RPG::Client::AntialiasingMode AAMode; // 0x3C
		::System::Boolean EnableMetalFXSU; // 0x40
		::System::Boolean EnableHalfResTransparent; // 0x41
		::RPG::Client::RPGQualitySettingsBoolWrapper EnableSelfShadow; // 0x44
		::RPG::CustomRP::Quality DlssQuality; // 0x48
		::System::Int32 ParticleTrailSmoothness; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGSMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::RPGQualitySettingsModel* Clone()
		{
			return ((::RPG::Client::RPGQualitySettingsModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGSMODEL_CLONE_OFFSET))(this);
		}
	};
}
