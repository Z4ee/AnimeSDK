#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityTimeSlow; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12EAE8F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS___C__DISPLAYCLASS1_0__PROCESSMAXSTARTTIME_B__0_OFFSET UNITYSDK_OFFSET(0x12EAE900)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int PlayTimeSlowUtils___c__DisplayClass1_0_TypeDefinitionIndex = 61609;

	class PlayTimeSlowUtils___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigEntityTimeSlow* config; // 0x10
		::UnityEngine::AnimationCurve* startCurve; // 0x18
		::System::Single startTime; // 0x20
		::System::Single delayTime; // 0x24
		::System::Single maxStartTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Single _ProcessMaxStartTime_b__0(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS___C__DISPLAYCLASS1_0__PROCESSMAXSTARTTIME_B__0_OFFSET))(this, time);
		}
	};
}
