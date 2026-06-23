#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/ScreenSpacePlanarReflectionBehaviour_Struct_2_52AD02145F5FCE36_9.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection; }

#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x164360F0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x16438300)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_5F5CE5755714D1CF_OFFSET UNITYSDK_OFFSET(0x164364C0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x16438310)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x16436A10)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x16438330)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x16438320)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x164368B0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16437B50)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x16437DD0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x164382B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ScreenSpacePlanarReflectionBehaviour_TypeDefinitionIndex = 50000;

	class ScreenSpacePlanarReflectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ScreenSpacePlanarReflectionBehaviour_Struct_2_52AD02145F5FCE36_9 _methodParm; // 0x18
		::System::Boolean enabled; // 0x70
		::System::Boolean active_mirrorReflectionOverride; // 0x71
		::System::Boolean use_mirrorReflectionOverride; // 0x72
		::System::Boolean mirrorReflectionOverride; // 0x73
		::System::Boolean active_planarReflectionBlurAmount; // 0x74
		::System::Boolean use_planarReflectionBlurAmount; // 0x75
		::System::Single planarReflectionBlurAmount; // 0x78
		::System::Boolean active_planarReflectionLodSteps; // 0x7C
		::System::Boolean use_planarReflectionLodSteps; // 0x7D
		::System::Single planarReflectionLodSteps; // 0x80
		::System::Boolean active_planarReflectionMinSmoothness; // 0x84
		::System::Boolean use_planarReflectionMinSmoothness; // 0x85
		::System::Single planarReflectionMinSmoothness; // 0x88
		::System::Boolean active_planarReflectionSmoothnessFadeStart; // 0x8C
		::System::Boolean use_planarReflectionSmoothnessFadeStart; // 0x8D
		::System::Single planarReflectionSmoothnessFadeStart; // 0x90
		::System::Boolean active_Enabled; // 0x94
		::System::Boolean use_Enabled; // 0x95
		::System::Boolean Enabled; // 0x96
		::System::Boolean active_FadeDistance; // 0x97
		::System::Boolean use_FadeDistance; // 0x98
		::System::Single FadeDistance; // 0x9C
		::System::Boolean active_StretchScale; // 0xA0
		::System::Boolean use_StretchScale; // 0xA1
		::System::Single StretchScale; // 0xA4
		::System::Boolean active_ScreenStretchThreshold; // 0xA8
		::System::Boolean use_ScreenStretchThreshold; // 0xA9
		::System::Single ScreenStretchThreshold; // 0xAC
		::System::Boolean active_planarReflectionCameraDisabledLayerMask; // 0xB0
		::System::Boolean use_planarReflectionCameraDisabledLayerMask; // 0xB1
		::UnityEngine::LayerMask planarReflectionCameraDisabledLayerMask; // 0xB4
		::System::Boolean active_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0xB8
		::System::Boolean use_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0xB9
		::UnityEngine::LayerMask planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0xBC
		::System::Boolean active_planarReflectionCameraDisabledRenderLayerMask; // 0xC0
		::System::Boolean use_planarReflectionCameraDisabledRenderLayerMask; // 0xC1
		::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask planarReflectionCameraDisabledRenderLayerMask; // 0xC4
		::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* _ScreenSpacePlanarReflection; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* Method_4_5F5CE5755714D1CF(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_5F5CE5755714D1CF_OFFSET))(this, a1);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
