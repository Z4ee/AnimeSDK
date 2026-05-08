#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/LensDistortionBehaviour_Struct_2_52AD02145F5FCE36_13.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }

#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x15BC5CE0)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x15BC6460)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15BC73F0)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x15BC7420)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x15BC7410)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x15BC7400)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_E170F8E6C5ADD9FA_OFFSET UNITYSDK_OFFSET(0x15BC5F90)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15BC6380)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15BC6E40)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15BC7030)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC73B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LensDistortionBehaviour_TypeDefinitionIndex = 48968;

	class LensDistortionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::LensDistortionBehaviour_Struct_2_52AD02145F5FCE36_13 _methodParm; // 0x18
		::System::Boolean enabled; // 0x50
		::System::Boolean active_intensity; // 0x51
		::System::Boolean use_intensity; // 0x52
		::System::Single intensity; // 0x54
		::System::Boolean active_xMultiplier; // 0x58
		::System::Boolean use_xMultiplier; // 0x59
		::System::Single xMultiplier; // 0x5C
		::System::Boolean active_yMultiplier; // 0x60
		::System::Boolean use_yMultiplier; // 0x61
		::System::Single yMultiplier; // 0x64
		::System::Boolean active_center; // 0x68
		::System::Boolean use_center; // 0x69
		::UnityEngine::Vector2 center; // 0x6C
		::System::Boolean active_scale; // 0x74
		::System::Boolean use_scale; // 0x75
		::System::Single scale; // 0x78
		::System::Boolean active_depthClip; // 0x7C
		::System::Boolean use_depthClip; // 0x7D
		::System::Single depthClip; // 0x80
		::UnityEngine::Rendering::Universal::LensDistortion* _LensDistortion; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::LensDistortion* Method_4_E170F8E6C5ADD9FA(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::LensDistortion*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_E170F8E6C5ADD9FA_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
