#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGQualitySettingsModel; }
namespace RPG::Client { class RPGQualitySettingsPerPlatform; }
namespace RPG::Client { class RPGQualitySettingsPresetDetail; }

#define RPG_CLIENT_RPGQUALITYSETTINGSPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x18044D70)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettingsPreset_TypeDefinitionIndex = 67939;

	class RPGQualitySettingsPreset : public ::System::Object
	{
	public:
		::RPG::Client::RPGQualitySettingsPerPlatform* PerPlatformSettings; // 0x10
		::RPG::Client::RPGQualitySettingsModel* VeryHigh; // 0x18
		::RPG::Client::RPGQualitySettingsModel* High; // 0x20
		::RPG::Client::RPGQualitySettingsModel* Medium; // 0x28
		::RPG::Client::RPGQualitySettingsModel* Low; // 0x30
		::RPG::Client::RPGQualitySettingsModel* VeryLow; // 0x38
		::RPG::Client::RPGQualitySettingsPresetDetail* Details; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGSPRESET__CTOR_OFFSET))(this);
		}
	};
}
