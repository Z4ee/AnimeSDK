#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ActivityRhythmClickCurveParamsStruct.h"

namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA83FE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIActivityRhythmClick_TypeDefinitionIndex = 76478;

	class ConfigUIActivityRhythmClick : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigCameraNoise* cameraNoiseProfile; // 0x58
		::System::Single specificNoiseAmplitudeGain; // 0x60
		::System::Single noiseDelayTime; // 0x64
		::System::Single noiseBlendDuration; // 0x68
		::UnityEngine::AnimationCurve* noiseBlendSpeedCurve; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ActivityRhythmClickCurveParamsStruct>* ClickCurveDic; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK__CTOR_OFFSET))(this);
		}
	};
}
