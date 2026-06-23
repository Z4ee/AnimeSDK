#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableJudgmentConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURGLOBALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA652C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SimpleParkourGlobalConfig_TypeDefinitionIndex = 72940;

	class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig : public ::System::Object
	{
	public:
		::System::Single DefaultPlayerInitialAngle; // 0x10
		::MoleMole::MiniUIGame::SimpleParkour::ETrackType DefaultPlayerInitialTrack; // 0x14
		::System::Single DefaultPlayerInitialSpeed; // 0x18
		::System::Boolean DefaultPlayerClockwise; // 0x1C
		::System::Single TrackSwitchDuration; // 0x20
		::System::Single TrackSwitchTriggerTime; // 0x24
		::System::Single DefaultPlayerViewAngle; // 0x28
		::System::Int32 DefaultTrackCount; // 0x2C
		::System::Single DefaultProgressTarget; // 0x30
		::System::Single MaxSpeed; // 0x34
		::System::Single SpeedBoostValue; // 0x38
		::System::Int32 MaxSpeedBoostStack; // 0x3C
		::System::Single TapBaseScore; // 0x40
		::System::Single DodgeBaseScore; // 0x44
		::System::Single TouchBaseScore; // 0x48
		::System::Single HoldSegmentBaseScore; // 0x4C
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentConfig* TapJudgment; // 0x50
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentConfig* DodgeJudgment; // 0x58
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentConfig* HoldJudgment; // 0x60
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentConfig* HoldPressJudgment; // 0x68
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentConfig* HoldReleaseJudgment; // 0x70
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentConfig* TouchJudgment; // 0x78
		::System::Single HoldInterval; // 0x80
		::System::Single FadeEffectDistance; // 0x84
		::System::Collections::Generic::Dictionary_2<::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::System::Single>* TrackSpeedModifier; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURGLOBALCONFIG__CTOR_OFFSET))(this);
		}
	};
}
