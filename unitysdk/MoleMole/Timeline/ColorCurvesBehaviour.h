#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ColorCurvesBehaviour_Struct_2_52AD02145F5FCE3A.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class ColorCurves; }

#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x16430550)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x16430D40)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_14A23FA2A72FB463_OFFSET UNITYSDK_OFFSET(0x16430820)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x16431E40)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x16431E50)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x16431E30)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x16431E20)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16430C10)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x164318C0)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x16431B00)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x16431E10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorCurvesBehaviour_TypeDefinitionIndex = 42186;

	class ColorCurvesBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ColorCurvesBehaviour_Struct_2_52AD02145F5FCE3A _methodParm; // 0x18
		::System::Boolean enabled; // 0xA0
		::System::Boolean active_master; // 0xA1
		::System::Boolean use_master; // 0xA2
		::UnityEngine::NAPRenderPipeline0::TextureCurve* master; // 0xA8
		::System::Boolean active_red; // 0xB0
		::System::Boolean use_red; // 0xB1
		::UnityEngine::NAPRenderPipeline0::TextureCurve* red; // 0xB8
		::System::Boolean active_green; // 0xC0
		::System::Boolean use_green; // 0xC1
		::UnityEngine::NAPRenderPipeline0::TextureCurve* green; // 0xC8
		::System::Boolean active_blue; // 0xD0
		::System::Boolean use_blue; // 0xD1
		::UnityEngine::NAPRenderPipeline0::TextureCurve* blue; // 0xD8
		::System::Boolean active_hueVsHue; // 0xE0
		::System::Boolean use_hueVsHue; // 0xE1
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsHue; // 0xE8
		::System::Boolean active_hueVsSat; // 0xF0
		::System::Boolean use_hueVsSat; // 0xF1
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsSat; // 0xF8
		::System::Boolean active_satVsSat; // 0x100
		::System::Boolean use_satVsSat; // 0x101
		::UnityEngine::NAPRenderPipeline0::TextureCurve* satVsSat; // 0x108
		::System::Boolean active_lumVsSat; // 0x110
		::System::Boolean use_lumVsSat; // 0x111
		::UnityEngine::NAPRenderPipeline0::TextureCurve* lumVsSat; // 0x118
		::UnityEngine::Rendering::Universal::ColorCurves* _ColorCurves; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::ColorCurves* Method_4_14A23FA2A72FB463(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ColorCurves*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_14A23FA2A72FB463_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
