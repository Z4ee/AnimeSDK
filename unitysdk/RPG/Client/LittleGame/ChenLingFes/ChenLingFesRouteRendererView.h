#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Components { class BGCcSplitterPolyline; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace System { class String; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_BINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x19B94F30)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_CREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19B94D80)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_GET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0x19B95500)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_GET_BGCCSPLITTERPOLYLINE_OFFSET UNITYSDK_OFFSET(0x19B95520)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_GET_BGCURVE_OFFSET UNITYSDK_OFFSET(0x19B954A0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_GET_LINERENDERER_OFFSET UNITYSDK_OFFSET(0x19B954C0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_GET_OUTLINERENDERER_OFFSET UNITYSDK_OFFSET(0x19B954E0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_RECYCLE_OFFSET UNITYSDK_OFFSET(0x19B95410)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_SET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0x19B95510)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_SET_BGCCSPLITTERPOLYLINE_OFFSET UNITYSDK_OFFSET(0x19B95530)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_SET_BGCURVE_OFFSET UNITYSDK_OFFSET(0x19B954B0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_SET_LINERENDERER_OFFSET UNITYSDK_OFFSET(0x19B954D0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_SET_OUTLINERENDERER_OFFSET UNITYSDK_OFFSET(0x19B954F0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B95540)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesRouteRendererView_TypeDefinitionIndex = 73834;

	class ChenLingFesRouteRendererView : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		::BansheeGz::BGSpline::Curve::BGCurve* _BGCurve_k__BackingField; // 0x18
		::UnityEngine::LineRenderer* _LineRenderer_k__BackingField; // 0x20
		::UnityEngine::LineRenderer* _OutlineRenderer_k__BackingField; // 0x28
		::BansheeGz::BGSpline::Components::BGCcMath* _BGCcMath_k__BackingField; // 0x30
		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* _BGCcSplitterPolyline_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesRouteRendererView* CreateView(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::ChenLingFesRouteRendererView*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_CREATEVIEW_OFFSET))(a1);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_RECYCLE_OFFSET))(this);
		}

		::System::Void BindComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_BINDCOMPONENTS_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_BGCurve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_GET_BGCURVE_OFFSET))(this);
		}

		::System::Void set_BGCurve(::BansheeGz::BGSpline::Curve::BGCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_SET_BGCURVE_OFFSET))(this, a1);
		}

		::UnityEngine::LineRenderer* get_LineRenderer()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_GET_LINERENDERER_OFFSET))(this);
		}

		::System::Void set_LineRenderer(::UnityEngine::LineRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_SET_LINERENDERER_OFFSET))(this, a1);
		}

		::UnityEngine::LineRenderer* get_OutlineRenderer()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_GET_OUTLINERENDERER_OFFSET))(this);
		}

		::System::Void set_OutlineRenderer(::UnityEngine::LineRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_SET_OUTLINERENDERER_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_BGCcMath()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_GET_BGCCMATH_OFFSET))(this);
		}

		::System::Void set_BGCcMath(::BansheeGz::BGSpline::Components::BGCcMath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_SET_BGCCMATH_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* get_BGCcSplitterPolyline()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_GET_BGCCSPLITTERPOLYLINE_OFFSET))(this);
		}

		::System::Void set_BGCcSplitterPolyline(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW_SET_BGCCSPLITTERPOLYLINE_OFFSET))(this, a1);
		}
	};
}
