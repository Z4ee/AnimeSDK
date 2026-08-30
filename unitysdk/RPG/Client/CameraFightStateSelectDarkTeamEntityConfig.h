#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CAMERAFIGHTSTATESELECTDARKTEAMENTITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C858A90)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateSelectDarkTeamEntityConfig_TypeDefinitionIndex = 69547;

	class CameraFightStateSelectDarkTeamEntityConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::System::Boolean CommonConfigAlwaysOverride; // 0x20
		::System::Single ChooseEnemyTargetLookAtWeight; // 0x24
		::System::Single ChooseEnemyTargetDisToCenterWeight; // 0x28
		::System::Single ChooseEnemyTargetDisToCenterImpairment; // 0x2C
		::System::Single ChooseEnemyTargetLookAtWeightByTeamWidth; // 0x30
		::System::Single ChooseEnemyTargetLookAtAmplitude; // 0x34
		::System::Single ChooseEnemyTargetCenterOffset1; // 0x38
		::System::Single ChooseEnemyTargetCenterOffset2; // 0x3C
		::System::Single ChooseEnemyTargetCenterOffset3; // 0x40
		::UnityEngine::Vector3 ChooseEnemyTargetMaxDeflection; // 0x44
		::System::Single CameraRootYMin; // 0x50
		::System::Single CameraRootYOffsetRatio; // 0x54
		::System::Single AimDampY; // 0x58
		::System::Single NamedOrSomatoDynamicAnchorOffsetScale; // 0x5C
		::System::Single NamedOrSomatoDynamicAimOffsetScale; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATESELECTDARKTEAMENTITYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
