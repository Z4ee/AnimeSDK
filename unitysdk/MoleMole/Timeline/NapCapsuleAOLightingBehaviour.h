#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/NapCapsuleAOLightingBehaviour_Struct_2_52AD02145F5FCE36_10.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class NapCapsuleAOLighting; }

#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x180A6E00)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x180A74E0)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x180A8280)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_3818ABA68CC3854A_OFFSET UNITYSDK_OFFSET(0x180A7030)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x180A8260)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x180A8270)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x180A8250)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x180A7420)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x180A7D20)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x180A7F00)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x180A8220)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int NapCapsuleAOLightingBehaviour_TypeDefinitionIndex = 55538;

	class NapCapsuleAOLightingBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::NapCapsuleAOLightingBehaviour_Struct_2_52AD02145F5FCE36_10 _methodParm; // 0x18
		::System::Boolean enabled; // 0x3C
		::System::Boolean active_enableCapsuleAO; // 0x3D
		::System::Boolean use_enableCapsuleAO; // 0x3E
		::System::Boolean enableCapsuleAO; // 0x3F
		::System::Boolean active_ambientIntensity; // 0x40
		::System::Boolean use_ambientIntensity; // 0x41
		::System::Single ambientIntensity; // 0x44
		::System::Boolean active_shadowIntensity; // 0x48
		::System::Boolean use_shadowIntensity; // 0x49
		::System::Single shadowIntensity; // 0x4C
		::System::Boolean active_shadowSharpness; // 0x50
		::System::Boolean use_shadowSharpness; // 0x51
		::System::Single shadowSharpness; // 0x54
		::System::Boolean active_luminanceBlend; // 0x58
		::System::Boolean use_luminanceBlend; // 0x59
		::System::Single luminanceBlend; // 0x5C
		::UnityEngine::Rendering::Universal::NapCapsuleAOLighting* _NapCapsuleAOLighting; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::NapCapsuleAOLighting* Method_4_3818ABA68CC3854A(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_3818ABA68CC3854A_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
