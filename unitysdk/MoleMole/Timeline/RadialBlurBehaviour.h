#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/RadialBlurBehaviour_Struct_2_52AD02145F5FCE36_23.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x173A68F0)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x173A9A40)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x173A9A50)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_7B8EE725A8526397_OFFSET UNITYSDK_OFFSET(0x173A6D80)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x173A7380)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x173A9A30)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x173A9A20)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x173A7170)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x173A8F10)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x173A9230)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x173A9950)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RadialBlurBehaviour_TypeDefinitionIndex = 63074;

	class RadialBlurBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::RadialBlurBehaviour_Struct_2_52AD02145F5FCE36_23 _methodParm; // 0x18
		::System::Boolean enabled; // 0xA0
		::System::Boolean active_downSample; // 0xA1
		::System::Boolean use_downSample; // 0xA2
		::UnityEngine::Rendering::Universal::DownSampleLevel downSample; // 0xA4
		::System::Boolean active_sampleDistanceMode; // 0xA8
		::System::Boolean use_sampleDistanceMode; // 0xA9
		::UnityEngine::Rendering::Universal::SampleDistanceMode sampleDistanceMode; // 0xAC
		::System::Boolean active_sampleCount; // 0xB0
		::System::Boolean use_sampleCount; // 0xB1
		::System::Int32 sampleCount; // 0xB4
		::System::Boolean active_radius; // 0xB8
		::System::Boolean use_radius; // 0xB9
		::System::Single radius; // 0xBC
		::System::Boolean active_centerPosition; // 0xC0
		::System::Boolean use_centerPosition; // 0xC1
		::UnityEngine::Vector2 centerPosition; // 0xC4
		::System::Boolean active_threshold; // 0xCC
		::System::Boolean use_threshold; // 0xCD
		::System::Single threshold; // 0xD0
		::System::Boolean active_useCircleRange; // 0xD4
		::System::Boolean use_useCircleRange; // 0xD5
		::System::Boolean useCircleRange; // 0xD6
		::System::Boolean active_circleRange; // 0xD7
		::System::Boolean use_circleRange; // 0xD8
		::UnityEngine::Vector2 circleRange; // 0xDC
		::System::Boolean active_useBloomMode; // 0xE4
		::System::Boolean use_useBloomMode; // 0xE5
		::System::Boolean useBloomMode; // 0xE6
		::System::Boolean active_glareIntensity; // 0xE7
		::System::Boolean use_glareIntensity; // 0xE8
		::System::Single glareIntensity; // 0xEC
		::System::Boolean active_glareThreshold; // 0xF0
		::System::Boolean use_glareThreshold; // 0xF1
		::System::Single glareThreshold; // 0xF4
		::System::Boolean active_glareCenterFadeRange; // 0xF8
		::System::Boolean use_glareCenterFadeRange; // 0xF9
		::System::Single glareCenterFadeRange; // 0xFC
		::System::Boolean active_glareFadeShapeRatio; // 0x100
		::System::Boolean use_glareFadeShapeRatio; // 0x101
		::System::Single glareFadeShapeRatio; // 0x104
		::System::Boolean active_BloomModeRadiusAdd; // 0x108
		::System::Boolean use_BloomModeRadiusAdd; // 0x109
		::System::Single BloomModeRadiusAdd; // 0x10C
		::System::Boolean active_BloomModeSampleCountAdd; // 0x110
		::System::Boolean use_BloomModeSampleCountAdd; // 0x111
		::System::Int32 BloomModeSampleCountAdd; // 0x114
		::System::Boolean active_noiseScale; // 0x118
		::System::Boolean use_noiseScale; // 0x119
		::System::Single noiseScale; // 0x11C
		::System::Boolean active_forceActiveOverlayDistortion; // 0x120
		::System::Boolean use_forceActiveOverlayDistortion; // 0x121
		::System::Boolean forceActiveOverlayDistortion; // 0x122
		::System::Boolean active_canBeDisabledByGlobalConfig; // 0x123
		::System::Boolean use_canBeDisabledByGlobalConfig; // 0x124
		::System::Boolean canBeDisabledByGlobalConfig; // 0x125
		::UnityEngine::Rendering::Universal::RadialBlur* _RadialBlur; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::RadialBlur* Method_4_7B8EE725A8526397(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::RadialBlur*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_7B8EE725A8526397_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
