#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/TriDiceLuckPerformType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigTriDiceAnimationCurveGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5611A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUITriDiceOracle_TypeDefinitionIndex = 75147;

	class ConfigUITriDiceOracle : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigTriDiceAnimationCurveGroup*>* AnimLastRot; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::TriDiceLuckPerformType, ::System::String*>* LuckType2Anim; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Quaternion>* FaceToAngle; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* ResToEff; // 0x70
		::System::Collections::Generic::Dictionary_2<::MoleMole::TriDiceLuckPerformType, ::System::String*>* LuckTypeToEff; // 0x78
		::System::Collections::Generic::Dictionary_2<::MoleMole::TriDiceLuckPerformType, ::System::String*>* LuckTypeToEffNameStage2; // 0x80
		::System::Collections::Generic::Dictionary_2<::MoleMole::TriDiceLuckPerformType, ::System::String*>* LuckTypeToEffNameStage3; // 0x88
		::System::Single worldToTimelineTransitionTime; // 0x90
		::System::Single timelineStartFov; // 0x94
		::UnityEngine::Vector3 timelineStartPos; // 0x98
		::UnityEngine::Vector3 timelineStartRot; // 0xA4
		::System::Single shakeDamping; // 0xB0
		::System::Single shakeRotDamping; // 0xB4
		::System::Single shakeRotationDelta; // 0xB8
		::System::Single shakeSpeedDelta; // 0xBC
		::System::Single shakeMaxSpeed; // 0xC0
		::System::Single shakeSMinInput; // 0xC4
		::System::Single shakeSMaxInput; // 0xC8
		::System::Single autoShakeHorizontalAmplitude; // 0xCC
		::System::Single autoShakeVerticalAmplitude; // 0xD0
		::System::Single shakeToThreeStageDuration; // 0xD4
		::System::Single shakeToThreeStageRatio; // 0xD8
		::System::Single shakeToThreeStageAnimMin; // 0xDC
		::System::Single shakeToThreeStageAnimMax; // 0xE0
		::System::Single shakeDamperHalfLife; // 0xE4
		::System::Single shakeXAmplitude; // 0xE8
		::System::Single shakeYAmplitude; // 0xEC
		::System::Single springFrequncy; // 0xF0
		::System::Single joyStickAmplitude; // 0xF4
		::System::Single springDamperHalfLife; // 0xF8
		::UnityEngine::Vector3 gyroAmplitude; // 0xFC
		::System::Single gyroSMinInput; // 0x108
		::System::Single gyroSMaxInput; // 0x10C
		::UnityEngine::Vector3 gyroShakeThreshold; // 0x110
		::UnityEngine::Vector3 casketOffset; // 0x11C
		::System::Single onlyOneTipDuration; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE__CTOR_OFFSET))(this);
		}
	};
}
