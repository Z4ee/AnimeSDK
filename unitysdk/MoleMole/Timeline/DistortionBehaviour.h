#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/DistortionBehaviour_Struct_2_52AD02145F5FCE36_39.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x13050D60)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13052830)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_579B76B44596F9BB_OFFSET UNITYSDK_OFFSET(0x13051000)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x13052860)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_68160D9981ECFFF0_OFFSET UNITYSDK_OFFSET(0x130514E0)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x13052850)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x13052840)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x130513F0)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13052220)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x13052420)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13052810)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DistortionBehaviour_TypeDefinitionIndex = 83176;

	class DistortionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::DistortionBehaviour_Struct_2_52AD02145F5FCE36_39 _methodParm; // 0x18
		::System::Boolean enabled; // 0x54
		::System::Boolean active_downScaleFactor; // 0x55
		::System::Boolean use_downScaleFactor; // 0x56
		::System::Int32 downScaleFactor; // 0x58
		::System::Boolean active_intensity; // 0x5C
		::System::Boolean use_intensity; // 0x5D
		::System::Single intensity; // 0x60
		::System::Boolean active_rgbShift; // 0x64
		::System::Boolean use_rgbShift; // 0x65
		::UnityEngine::Vector3 rgbShift; // 0x68
		::System::Boolean active_separateRGBIntensity; // 0x74
		::System::Boolean use_separateRGBIntensity; // 0x75
		::System::Single separateRGBIntensity; // 0x78
		::System::Boolean active_forceActive; // 0x7C
		::System::Boolean use_forceActive; // 0x7D
		::System::Boolean forceActive; // 0x7E
		::System::Boolean active_effectRenderQueue; // 0x7F
		::System::Boolean use_effectRenderQueue; // 0x80
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType effectRenderQueue; // 0x84
		::System::Boolean active_forceDistortionOnLowPlatform; // 0x88
		::System::Boolean use_forceDistortionOnLowPlatform; // 0x89
		::System::Boolean forceDistortionOnLowPlatform; // 0x8A
		::UnityEngine::Rendering::Universal::Distortion* _Distortion; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_68160D9981ECFFF0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_68160D9981ECFFF0_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::Distortion* Method_4_579B76B44596F9BB(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::Distortion*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_579B76B44596F9BB_OFFSET))(this, a1);
		}
	};
}
