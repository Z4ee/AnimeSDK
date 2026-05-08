#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/ScreenSpaceAmbientOcclusionBehaviour_Struct_2_52AD02145F5FCE36_9.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceAmbientOcclusion; }

#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1388ED70)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_18480E145D53E972_OFFSET UNITYSDK_OFFSET(0x1388F150)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x138919C0)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x138919B0)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x1388F6E0)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x138919E0)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x138919D0)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1388F540)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13891070)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x13891330)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13891940)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ScreenSpaceAmbientOcclusionBehaviour_TypeDefinitionIndex = 46342;

	class ScreenSpaceAmbientOcclusionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ScreenSpaceAmbientOcclusionBehaviour_Struct_2_52AD02145F5FCE36_9 _methodParm; // 0x18
		::System::Boolean enabled; // 0x7C
		::System::Boolean active_Intensity; // 0x7D
		::System::Boolean use_Intensity; // 0x7E
		::System::Single Intensity; // 0x80
		::System::Boolean active_DirectLightingStrength; // 0x84
		::System::Boolean use_DirectLightingStrength; // 0x85
		::System::Single DirectLightingStrength; // 0x88
		::System::Boolean active_Radius; // 0x8C
		::System::Boolean use_Radius; // 0x8D
		::System::Single Radius; // 0x90
		::System::Boolean active_FullResolution; // 0x94
		::System::Boolean use_FullResolution; // 0x95
		::System::Boolean FullResolution; // 0x96
		::System::Boolean active_TemporalAccumulation; // 0x97
		::System::Boolean use_TemporalAccumulation; // 0x98
		::System::Boolean TemporalAccumulation; // 0x99
		::System::Boolean active_GhostingReduction; // 0x9A
		::System::Boolean use_GhostingReduction; // 0x9B
		::System::Single GhostingReduction; // 0x9C
		::System::Boolean active_BlurSharpness; // 0xA0
		::System::Boolean use_BlurSharpness; // 0xA1
		::System::Single BlurSharpness; // 0xA4
		::System::Boolean active_SampleCount; // 0xA8
		::System::Boolean use_SampleCount; // 0xA9
		::System::Int32 SampleCount; // 0xAC
		::System::Boolean active_Denoise; // 0xB0
		::System::Boolean use_Denoise; // 0xB1
		::System::Boolean Denoise; // 0xB2
		::System::Boolean active_DenoiserRadius; // 0xB3
		::System::Boolean use_DenoiserRadius; // 0xB4
		::System::Single DenoiserRadius; // 0xB8
		::System::Boolean active_StepCount; // 0xBC
		::System::Boolean use_StepCount; // 0xBD
		::System::Int32 StepCount; // 0xC0
		::System::Boolean active_BilateralUpsample; // 0xC4
		::System::Boolean use_BilateralUpsample; // 0xC5
		::System::Boolean BilateralUpsample; // 0xC6
		::System::Boolean active_MaximumRadiusInPixels; // 0xC7
		::System::Boolean use_MaximumRadiusInPixels; // 0xC8
		::System::Int32 MaximumRadiusInPixels; // 0xCC
		::System::Boolean active_DirectionCount; // 0xD0
		::System::Boolean use_DirectionCount; // 0xD1
		::System::Int32 DirectionCount; // 0xD4
		::System::Boolean active_DebugMode; // 0xD8
		::System::Boolean use_DebugMode; // 0xD9
		::System::Boolean DebugMode; // 0xDA
		::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion* _ScreenSpaceAmbientOcclusion; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion* Method_4_18480E145D53E972(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_18480E145D53E972_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}
	};
}
