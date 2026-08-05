#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CullingBehaviour_Struct_2_52AD02145F5FCE36_4.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1190FA60)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x1B6B2F10)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1B6B5BD0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x1B6B5BC0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_9B97EC47CC6F2369_OFFSET UNITYSDK_OFFSET(0x1B6B4F20)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x1B6B5BE0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x1B6B5BB0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B6B2D60)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B6B4C60)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1B6B5310)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B5B50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CullingBehaviour_TypeDefinitionIndex = 46680;

	class CullingBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::CullingBehaviour_Struct_2_52AD02145F5FCE36_4 _methodParm; // 0x18
		::System::Boolean enabled; // 0x9C
		::System::Boolean active_EnableHizCulling; // 0x9D
		::System::Boolean use_EnableHizCulling; // 0x9E
		::System::Boolean EnableHizCulling; // 0x9F
		::System::Boolean active_EnableShadowHizCulling; // 0xA0
		::System::Boolean use_EnableShadowHizCulling; // 0xA1
		::System::Boolean EnableShadowHizCulling; // 0xA2
		::System::Boolean active_ForceUseSMAA; // 0xA3
		::System::Boolean use_ForceUseSMAA; // 0xA4
		::System::Boolean ForceUseSMAA; // 0xA5
		::System::Boolean active_outlineOverrideGlobalConfig; // 0xA6
		::System::Boolean use_outlineOverrideGlobalConfig; // 0xA7
		::System::Boolean outlineOverrideGlobalConfig; // 0xA8
		::System::Boolean active_BlitOutlineBeforeTransparent; // 0xA9
		::System::Boolean use_BlitOutlineBeforeTransparent; // 0xAA
		::System::Boolean BlitOutlineBeforeTransparent; // 0xAB
		::System::Boolean active_outlineEnableMultiLayer; // 0xAC
		::System::Boolean use_outlineEnableMultiLayer; // 0xAD
		::System::Boolean outlineEnableMultiLayer; // 0xAE
		::System::Boolean active_outlineUseSingleColor; // 0xAF
		::System::Boolean use_outlineUseSingleColor; // 0xB0
		::System::Boolean outlineUseSingleColor; // 0xB1
		::System::Boolean active_outlineSingleColor; // 0xB2
		::System::Boolean use_outlineSingleColor; // 0xB3
		::UnityEngine::Color outlineSingleColor; // 0xB4
		::System::Boolean active_outlineDisable; // 0xC4
		::System::Boolean use_outlineDisable; // 0xC5
		::System::Boolean outlineDisable; // 0xC6
		::System::Boolean active_outlineFillInner; // 0xC7
		::System::Boolean use_outlineFillInner; // 0xC8
		::System::Boolean outlineFillInner; // 0xC9
		::System::Boolean active_outlineFillInnerBehindScene; // 0xCA
		::System::Boolean use_outlineFillInnerBehindScene; // 0xCB
		::System::Boolean outlineFillInnerBehindScene; // 0xCC
		::System::Boolean active_outlineFillInnerColor; // 0xCD
		::System::Boolean use_outlineFillInnerColor; // 0xCE
		::UnityEngine::Color outlineFillInnerColor; // 0xD0
		::System::Boolean active_outlineFillInnerColorIntensity; // 0xE0
		::System::Boolean use_outlineFillInnerColorIntensity; // 0xE1
		::System::Single outlineFillInnerColorIntensity; // 0xE4
		::System::Boolean active_outlineThickness; // 0xE8
		::System::Boolean use_outlineThickness; // 0xE9
		::System::Single outlineThickness; // 0xEC
		::System::Boolean active_outlineFlicker; // 0xF0
		::System::Boolean use_outlineFlicker; // 0xF1
		::System::Boolean outlineFlicker; // 0xF2
		::System::Boolean active_outlineSingleColor1; // 0xF3
		::System::Boolean use_outlineSingleColor1; // 0xF4
		::UnityEngine::Color outlineSingleColor1; // 0xF8
		::System::Boolean active_outlineSingleColor2; // 0x108
		::System::Boolean use_outlineSingleColor2; // 0x109
		::UnityEngine::Color outlineSingleColor2; // 0x10C
		::UnityEngine::Rendering::Universal::Culling* _Culling; // 0x120

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

		::UnityEngine::Rendering::Universal::Culling* Method_4_9B97EC47CC6F2369(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::Culling*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_9B97EC47CC6F2369_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
