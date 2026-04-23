#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class RPGQualitySettingsModel; }
namespace RPG::Client { class RPGQualitySettingsPerPlatform; }
namespace RPG::Client { class RPGQualitySettingsPresetDetailConsole; }
namespace RPG::GameCore { class DeviceInfo; }

#define RPG_CLIENT_RPGQUALITYSETTINGSCONSOLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF505D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettingsConsole_TypeDefinitionIndex = 62634;

	class RPGQualitySettingsConsole : public ::System::Object
	{
	public:
		::UnityEngine::Vector2Int Resolution; // 0x10
		::RPG::GameCore::DeviceInfo* PerDeviceSettings; // 0x18
		::RPG::Client::RPGQualitySettingsPerPlatform* PerPlatformSettings; // 0x20
		::RPG::Client::RPGQualitySettingsModel* High; // 0x28
		::RPG::Client::RPGQualitySettingsPresetDetailConsole* Detail; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGSCONSOLE__CTOR_OFFSET))(this);
		}
	};
}
