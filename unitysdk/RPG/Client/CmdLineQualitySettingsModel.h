#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CmdLineAntialiasingMode.h"
#include "unitysdk/RPG/Client/CmdLineGraphicsQuality.h"
#include "unitysdk/RPG/Client/CmdLineRPGQualitySettingsBoolWrapper.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CMDLINEQUALITYSETTINGSMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC108E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CmdLineQualitySettingsModel_TypeDefinitionIndex = 33406;

	class CmdLineQualitySettingsModel : public ::System::Object
	{
	public:
		::System::Int32 FPS; // 0x10
		::System::Boolean EnableVSync; // 0x14
		::System::Single RenderScale; // 0x18
		::RPG::Client::CmdLineGraphicsQuality ResolutionQuality; // 0x1C
		::RPG::Client::CmdLineGraphicsQuality ShadowQuality; // 0x20
		::RPG::Client::CmdLineGraphicsQuality LightQuality; // 0x24
		::RPG::Client::CmdLineGraphicsQuality CharacterQuality; // 0x28
		::RPG::Client::CmdLineGraphicsQuality EnvDetailQuality; // 0x2C
		::RPG::Client::CmdLineGraphicsQuality ReflectionQuality; // 0x30
		::RPG::Client::CmdLineGraphicsQuality SFXQuality; // 0x34
		::RPG::Client::CmdLineGraphicsQuality BloomQuality; // 0x38
		::RPG::Client::CmdLineAntialiasingMode AAMode; // 0x3C
		::System::Int32 MasterTextureLimit; // 0x40
		::RPG::Client::CmdLineRPGQualitySettingsBoolWrapper EnableSelfShadow; // 0x44
		::RPG::Client::CmdLineGraphicsQuality DlssQuality; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CMDLINEQUALITYSETTINGSMODEL__CTOR_OFFSET))(this);
		}
	};
}
