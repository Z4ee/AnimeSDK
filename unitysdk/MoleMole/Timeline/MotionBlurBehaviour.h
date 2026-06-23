#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/MotionBlurBehaviour_Struct_2_52AD02145F5FCE36_14.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }

#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x141B26C0)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_109E86D9431100FF_OFFSET UNITYSDK_OFFSET(0x141B2910)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x141B2DD0)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x141B3C80)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x141B3C90)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x141B3CA0)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x141B3C70)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x141B2D00)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x141B36E0)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x141B38D0)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x141B3C30)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MotionBlurBehaviour_TypeDefinitionIndex = 56925;

	class MotionBlurBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::MotionBlurBehaviour_Struct_2_52AD02145F5FCE36_14 _methodParm; // 0x18
		::System::Boolean enabled; // 0x4C
		::System::Boolean active_mode; // 0x4D
		::System::Boolean use_mode; // 0x4E
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode mode; // 0x50
		::System::Boolean active_intensity; // 0x54
		::System::Boolean use_intensity; // 0x55
		::System::Single intensity; // 0x58
		::System::Boolean active_clamp; // 0x5C
		::System::Boolean use_clamp; // 0x5D
		::System::Single clamp; // 0x60
		::System::Boolean active_quality; // 0x64
		::System::Boolean use_quality; // 0x65
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality quality; // 0x68
		::System::Boolean active_direction; // 0x6C
		::System::Boolean use_direction; // 0x6D
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection direction; // 0x70
		::System::Boolean active_motionVectorBlendRadius; // 0x74
		::System::Boolean use_motionVectorBlendRadius; // 0x75
		::System::Single motionVectorBlendRadius; // 0x78
		::UnityEngine::Rendering::Universal::MotionBlur* _MotionBlur; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::MotionBlur* Method_4_109E86D9431100FF(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::MotionBlur*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_109E86D9431100FF_OFFSET))(this, a1);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
