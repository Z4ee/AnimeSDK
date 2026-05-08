#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CullingBehaviour_Struct_2_52AD02145F5FCE36_33.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x10E52870)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x10E556D0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x10E556E0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x10E53240)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_9B97EC47CC6F2369_OFFSET UNITYSDK_OFFSET(0x10E52CE0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x10E556C0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x10E556B0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x10E530D0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x10E54D10)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x10E54F90)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x10E55670)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CullingBehaviour_TypeDefinitionIndex = 72596;

	class CullingBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::CullingBehaviour_Struct_2_52AD02145F5FCE36_33 _methodParm; // 0x18
		::System::Boolean enabled; // 0x74
		::System::Boolean active_EnableHizCulling; // 0x75
		::System::Boolean use_EnableHizCulling; // 0x76
		::System::Boolean EnableHizCulling; // 0x77
		::System::Boolean active_EnableShadowHizCulling; // 0x78
		::System::Boolean use_EnableShadowHizCulling; // 0x79
		::System::Boolean EnableShadowHizCulling; // 0x7A
		::System::Boolean active_ForceUseSMAA; // 0x7B
		::System::Boolean use_ForceUseSMAA; // 0x7C
		::System::Boolean ForceUseSMAA; // 0x7D
		::System::Boolean active_outlineOverrideGlobalConfig; // 0x7E
		::System::Boolean use_outlineOverrideGlobalConfig; // 0x7F
		::System::Boolean outlineOverrideGlobalConfig; // 0x80
		::System::Boolean active_BlitOutlineBeforeTransparent; // 0x81
		::System::Boolean use_BlitOutlineBeforeTransparent; // 0x82
		::System::Boolean BlitOutlineBeforeTransparent; // 0x83
		::System::Boolean active_outlineEnableMultiLayer; // 0x84
		::System::Boolean use_outlineEnableMultiLayer; // 0x85
		::System::Boolean outlineEnableMultiLayer; // 0x86
		::System::Boolean active_outlineUseSingleColor; // 0x87
		::System::Boolean use_outlineUseSingleColor; // 0x88
		::System::Boolean outlineUseSingleColor; // 0x89
		::System::Boolean active_outlineSingleColor; // 0x8A
		::System::Boolean use_outlineSingleColor; // 0x8B
		::UnityEngine::Color outlineSingleColor; // 0x8C
		::System::Boolean active_outlineDisable; // 0x9C
		::System::Boolean use_outlineDisable; // 0x9D
		::System::Boolean outlineDisable; // 0x9E
		::System::Boolean active_outlineFillInner; // 0x9F
		::System::Boolean use_outlineFillInner; // 0xA0
		::System::Boolean outlineFillInner; // 0xA1
		::System::Boolean active_outlineFillInnerBehindScene; // 0xA2
		::System::Boolean use_outlineFillInnerBehindScene; // 0xA3
		::System::Boolean outlineFillInnerBehindScene; // 0xA4
		::System::Boolean active_outlineFillInnerColor; // 0xA5
		::System::Boolean use_outlineFillInnerColor; // 0xA6
		::UnityEngine::Color outlineFillInnerColor; // 0xA8
		::System::Boolean active_outlineFillInnerColorIntensity; // 0xB8
		::System::Boolean use_outlineFillInnerColorIntensity; // 0xB9
		::System::Single outlineFillInnerColorIntensity; // 0xBC
		::System::Boolean active_outlineThickness; // 0xC0
		::System::Boolean use_outlineThickness; // 0xC1
		::System::Single outlineThickness; // 0xC4
		::System::Boolean active_outlineFlicker; // 0xC8
		::System::Boolean use_outlineFlicker; // 0xC9
		::System::Boolean outlineFlicker; // 0xCA
		::UnityEngine::Rendering::Universal::Culling* _Culling; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::Culling* Method_4_9B97EC47CC6F2369(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::Culling*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_9B97EC47CC6F2369_OFFSET))(this, a1);
		}
	};
}
