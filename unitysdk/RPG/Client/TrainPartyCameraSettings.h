#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainPartyCameraSettings_SettingData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TRAINPARTYCAMERASETTINGS_APPLY_1_OFFSET UNITYSDK_OFFSET(0x19891E00)
#define RPG_CLIENT_TRAINPARTYCAMERASETTINGS_APPLY_OFFSET UNITYSDK_OFFSET(0x19891D10)
#define RPG_CLIENT_TRAINPARTYCAMERASETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19891E80)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyCameraSettings_TypeDefinitionIndex = 57540;

	class TrainPartyCameraSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::TrainPartyCameraSettings_SettingData BarSetting; // 0x18
		::RPG::Client::TrainPartyCameraSettings_SettingData FullSetting; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYCAMERASETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYCAMERASETTINGS_APPLY_OFFSET))(this, a1);
		}

		::System::Void Apply_1(::RPG::Client::TrainPartyCameraSettings_SettingData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainPartyCameraSettings_SettingData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYCAMERASETTINGS_APPLY_1_OFFSET))(this, a1);
		}
	};
}
