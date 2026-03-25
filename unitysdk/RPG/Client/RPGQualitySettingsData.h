#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class RPGQualitySettingsConsole; }
namespace RPG::Client { class RPGQualitySettingsPreset; }

#define RPG_CLIENT_RPGQUALITYSETTINGSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA261BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettingsData_TypeDefinitionIndex = 55444;

	class RPGQualitySettingsData : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::RPGQualitySettingsPreset* PC; // 0x18
		::RPG::Client::RPGQualitySettingsPreset* iOS; // 0x20
		::RPG::Client::RPGQualitySettingsPreset* Android; // 0x28
		::RPG::Client::RPGQualitySettingsConsole* PS4Base; // 0x30
		::RPG::Client::RPGQualitySettingsConsole* PS4Pro; // 0x38
		::RPG::Client::RPGQualitySettingsConsole* PS5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGSDATA__CTOR_OFFSET))(this);
		}
	};
}
