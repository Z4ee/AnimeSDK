#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITAPESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16188D80)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesConfig_TypeDefinitionIndex = 85023;

	class UITapesConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Vector3 cameraDefaultPosition; // 0x58
		::UnityEngine::Vector3 cameraDefaultRotation; // 0x64
		::System::Single cameraDefaultFOV; // 0x70
		::System::Single cameraToTapeCenterYOffset; // 0x74
		::System::Int32 performanceTapeNumMin; // 0x78
		::System::Single performanceTapeWidth; // 0x7C
		::System::Single performanceDelayTime; // 0x80
		::System::Single performanceCamDelayTime; // 0x84
		::System::Single performanceTapeRaiseTime; // 0x88
		::System::Single performanceTapeRaiseHeight; // 0x8C
		::UnityEngine::AnimationCurve* performanceTapeRaiseCurve; // 0x90
		::System::Single performanceTapeRaiseOffset; // 0x98
		::System::Single firstBookAnimDelayTime; // 0x9C
		::System::Single firstBookAnimTime; // 0xA0
		::UnityEngine::AnimationCurve* firstBookAnimCurve; // 0xA8
		::System::Single firstBookScaleDelayTime; // 0xB0
		::UnityEngine::AnimationCurve* firstBookScaleCurve; // 0xB8
		::System::Single firstBookRefreshDeckDelayTime; // 0xC0
		::System::Single performanceTapeExpandDelayTime; // 0xC4
		::System::Single performanceTapeExpandOffset; // 0xC8
		::System::Single performanceTapeExpandDuration; // 0xCC
		::UnityEngine::AnimationCurve* performanceTapeExpandCurve; // 0xD0
		::UnityEngine::AnimationCurve* performanceTapeExpandAdsorbCurve; // 0xD8
		::System::Single performanceOverDelayTime; // 0xE0
		::System::Single distance; // 0xE4
		::System::Single densityMin; // 0xE8
		::System::Single slantScale; // 0xEC
		::UnityEngine::AnimationCurve* slantScaleCurve; // 0xF0
		::System::Single slantAngleMaxX; // 0xF8
		::UnityEngine::AnimationCurve* angleCurveX; // 0x100
		::System::Single slantAngleMaxY; // 0x108
		::UnityEngine::AnimationCurve* angleCurveY; // 0x110
		::System::Single slantAngleMaxZ; // 0x118
		::UnityEngine::AnimationCurve* angleCurveZ; // 0x120
		::System::Single dragSpeed; // 0x128
		::System::Single dragSpeedMax; // 0x12C
		::System::Single dragSpeedMin; // 0x130
		::UnityEngine::AnimationCurve* dragSpeedCurve; // 0x138
		::System::Single autoEasingSpeedThreshold; // 0x140
		::System::Single autoEasingSpeedRatio; // 0x144
		::System::Single autoEasingTimeRatio; // 0x148
		::UnityEngine::AnimationCurve* autoEasingCurve; // 0x150
		::System::Single adsorptionDragThreshold; // 0x158
		::System::Single adsorptionDragTimeRatio; // 0x15C
		::UnityEngine::AnimationCurve* adsorptionDragCurve; // 0x160
		::System::Single flipAnimScaleMax; // 0x168
		::UnityEngine::AnimationCurve* flipAnimScaleCurve; // 0x170
		::System::Single showAnimOffsetRatio; // 0x178
		::UnityEngine::AnimationCurve* showSpeedCurve; // 0x180
		::System::Single showAnimProtectTime; // 0x188
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Single>* showAnimLightsSwitch; // 0x190
		::UnityEngine::AnimationCurve* backSpeedCurve; // 0x198
		::System::Boolean adsorptionTrigger; // 0x1A0
		::System::Single adsorptionField; // 0x1A4
		::UnityEngine::AnimationCurve* adsorbAnimCurve; // 0x1A8
		::System::Single switchArchiveTypeDragThreshold; // 0x1B0
		::System::Single layerHeight; // 0x1B4
		::System::Single switchArchiveStartPerformanceSpeed; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESCONFIG__CTOR_OFFSET))(this);
		}
	};
}
