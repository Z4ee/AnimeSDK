#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ARCADE_BALLSRACE_BRCONSTANTCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A21F0)

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int BrConstantCfg_TypeDefinitionIndex = 88460;

	class BrConstantCfg : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* TileSize; // 0x10
		::System::Single TilePadding; // 0x18
		::System::Int32 MaxTileCount; // 0x1C
		::System::Int32 IdleMaxTileCount; // 0x20
		::System::Single TileClipDistance; // 0x24
		::System::Single SegmentDirectDistance; // 0x28
		::System::Single SegmentDirectDistanceIdle; // 0x2C
		::System::Single StartingDistance; // 0x30
		::System::Single StartingAngle; // 0x34
		::System::Single SegmentRandomAngleRange; // 0x38
		::System::Single SegmentRandomTangentRange; // 0x3C
		::System::Single SegmentRandomTangentAngleRange; // 0x40
		::System::Single PlayerInitTime; // 0x44
		::System::Single PlayerRadius; // 0x48
		::System::Single TimePointRadius; // 0x4C
		::Il2CppArray<::System::Single>* SpikeSize; // 0x50
		::Il2CppArray<::System::Single>* AccelerateSize; // 0x58
		::Il2CppArray<::System::Single>* DecelerateSize; // 0x60
		::System::Single DecelerateVDeltaLevel0; // 0x68
		::System::Single TimePointAdd; // 0x6C
		::Il2CppArray<::System::Single>* ForwardSpeeds; // 0x70
		::Il2CppArray<::System::Single>* HorizontalSpeeds; // 0x78
		::Il2CppArray<::System::Single>* ForwardAccelerations; // 0x80
		::System::Single FeverDecc; // 0x88
		::System::Single FeverDeccStartTime; // 0x8C
		::Il2CppArray<::System::Single>* HorizontalAccelerations; // 0x90
		::System::Single ScorePerUnit; // 0x98
		::Il2CppArray<::System::Single>* HorizontalDecelerations; // 0xA0
		::Il2CppArray<::System::Single>* SpeedLevelDurations; // 0xA8
		::System::Boolean IsHJump; // 0xB0
		::System::Boolean GenerateSpike; // 0xB1
		::System::Boolean ReadTable; // 0xB2
		::System::Boolean TrackReadTable; // 0xB3
		::Il2CppArray<::System::Int32>* TargetTrackIds; // 0xB8
		::System::Boolean Invincible; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_BRCONSTANTCFG__CTOR_OFFSET))(this);
		}
	};
}
