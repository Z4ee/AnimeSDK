#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Components { class BGCcSplitterPolyline; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_ALLEYROUTEVIEW_BINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x19C85AC0)
#define RPG_CLIENT_ALLEYROUTEVIEW_GETOUTLINEWIDTH_OFFSET UNITYSDK_OFFSET(0x19C86030)
#define RPG_CLIENT_ALLEYROUTEVIEW_GETWIDTH_OFFSET UNITYSDK_OFFSET(0x19C85FE0)
#define RPG_CLIENT_ALLEYROUTEVIEW_GET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0x19C860E0)
#define RPG_CLIENT_ALLEYROUTEVIEW_GET_BGCCSPLITTERPOLYLINE_OFFSET UNITYSDK_OFFSET(0x19C86100)
#define RPG_CLIENT_ALLEYROUTEVIEW_GET_BGCURVE_OFFSET UNITYSDK_OFFSET(0x19C86080)
#define RPG_CLIENT_ALLEYROUTEVIEW_GET_LINERENDERER_OFFSET UNITYSDK_OFFSET(0x19C860A0)
#define RPG_CLIENT_ALLEYROUTEVIEW_GET_OUTLINERENDERER_OFFSET UNITYSDK_OFFSET(0x19C860C0)
#define RPG_CLIENT_ALLEYROUTEVIEW_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x19C85A70)
#define RPG_CLIENT_ALLEYROUTEVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19C85E50)
#define RPG_CLIENT_ALLEYROUTEVIEW_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x19C85EB0)
#define RPG_CLIENT_ALLEYROUTEVIEW_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x19C85F00)
#define RPG_CLIENT_ALLEYROUTEVIEW_SET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0x19C860F0)
#define RPG_CLIENT_ALLEYROUTEVIEW_SET_BGCCSPLITTERPOLYLINE_OFFSET UNITYSDK_OFFSET(0x19C86110)
#define RPG_CLIENT_ALLEYROUTEVIEW_SET_BGCURVE_OFFSET UNITYSDK_OFFSET(0x19C86090)
#define RPG_CLIENT_ALLEYROUTEVIEW_SET_LINERENDERER_OFFSET UNITYSDK_OFFSET(0x19C860B0)
#define RPG_CLIENT_ALLEYROUTEVIEW_SET_OUTLINERENDERER_OFFSET UNITYSDK_OFFSET(0x19C860D0)
#define RPG_CLIENT_ALLEYROUTEVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C86130)
#define RPG_CLIENT_ALLEYROUTEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C86120)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyRouteView_TypeDefinitionIndex = 62457;

	class AlleyRouteView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_HELJNHNDCJP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlleyRouteView_TypeDefinitionIndex)->GetStaticField(0x14DB0);
		}
		// static const ::System::Single AMDLHBHKKDO; // 0x0
		::BansheeGz::BGSpline::Curve::BGCurve* _BGCurve_k__BackingField; // 0x18
		::UnityEngine::LineRenderer* _LineRenderer_k__BackingField; // 0x20
		::UnityEngine::LineRenderer* _OutlineRenderer_k__BackingField; // 0x28
		::BansheeGz::BGSpline::Components::BGCcMath* _BGCcMath_k__BackingField; // 0x30
		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* _BGCcSplitterPolyline_k__BackingField; // 0x38
		::UnityEngine::Animator* APPGGMLEPLN; // 0x40
		::System::String* NHFPGLCLOMO; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW__CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* get_Source()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_GET_SOURCE_OFFSET))(this);
		}

		::System::Void BindComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_BINDCOMPONENTS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void SetColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_SETCOLOR_OFFSET))(this, a1);
		}

		::System::Void SetHighlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_SETHIGHLIGHT_OFFSET))(this, a1);
		}

		::System::Single GetWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_GETWIDTH_OFFSET))(this);
		}

		::System::Single GetOutlineWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_GETOUTLINEWIDTH_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_BGCurve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_GET_BGCURVE_OFFSET))(this);
		}

		::System::Void set_BGCurve(::BansheeGz::BGSpline::Curve::BGCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_SET_BGCURVE_OFFSET))(this, a1);
		}

		::UnityEngine::LineRenderer* get_LineRenderer()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_GET_LINERENDERER_OFFSET))(this);
		}

		::System::Void set_LineRenderer(::UnityEngine::LineRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_SET_LINERENDERER_OFFSET))(this, a1);
		}

		::UnityEngine::LineRenderer* get_OutlineRenderer()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_GET_OUTLINERENDERER_OFFSET))(this);
		}

		::System::Void set_OutlineRenderer(::UnityEngine::LineRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_SET_OUTLINERENDERER_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_BGCcMath()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_GET_BGCCMATH_OFFSET))(this);
		}

		::System::Void set_BGCcMath(::BansheeGz::BGSpline::Components::BGCcMath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_SET_BGCCMATH_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* get_BGCcSplitterPolyline()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_GET_BGCCSPLITTERPOLYLINE_OFFSET))(this);
		}

		::System::Void set_BGCcSplitterPolyline(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEVIEW_SET_BGCCSPLITTERPOLYLINE_OFFSET))(this, a1);
		}
	};
}
