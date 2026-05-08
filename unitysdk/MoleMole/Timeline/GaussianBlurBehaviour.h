#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/GaussianBlurBehaviour_Struct_2_52AD02145F5FCE3A_29.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x13EC3A50)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x13EC4180)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_1A8D9D2CD3FD3B22_OFFSET UNITYSDK_OFFSET(0x13EC3CB0)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13EC5150)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x13EC5180)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x13EC5170)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x13EC5160)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13EC40A0)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13EC4BE0)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x13EC4DD0)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC5120)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int GaussianBlurBehaviour_TypeDefinitionIndex = 79838;

	class GaussianBlurBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::GaussianBlurBehaviour_Struct_2_52AD02145F5FCE3A_29 _methodParm; // 0x18
		::System::Boolean enabled; // 0x50
		::System::Boolean active_downSample; // 0x51
		::System::Boolean use_downSample; // 0x52
		::System::Int32 downSample; // 0x54
		::System::Boolean active_radius; // 0x58
		::System::Boolean use_radius; // 0x59
		::System::Single radius; // 0x5C
		::System::Boolean active_mask; // 0x60
		::System::Boolean use_mask; // 0x61
		::UnityEngine::Texture* mask; // 0x68
		::System::Boolean active_maskTiling; // 0x70
		::System::Boolean use_maskTiling; // 0x71
		::System::Single maskTiling; // 0x74
		::System::Boolean active_maskRotation; // 0x78
		::System::Boolean use_maskRotation; // 0x79
		::System::Single maskRotation; // 0x7C
		::System::Boolean active_maskDebug; // 0x80
		::System::Boolean use_maskDebug; // 0x81
		::System::Boolean maskDebug; // 0x82
		::UnityEngine::Rendering::Universal::GaussianBlur* _GaussianBlur; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::GaussianBlur* Method_4_1A8D9D2CD3FD3B22(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::GaussianBlur*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_1A8D9D2CD3FD3B22_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
