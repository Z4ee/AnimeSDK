#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Components { class BGCcSplitterPolyline; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class MonoLineRendererWidthSetter; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_BINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xC758940)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_CLEAR_OFFSET UNITYSDK_OFFSET(0xC758F70)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_GETOUTLINEWIDTH_OFFSET UNITYSDK_OFFSET(0xC7592D0)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_GETWIDTH_OFFSET UNITYSDK_OFFSET(0xC759280)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0xC7588B0)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_BGCCSPLITTERPOLYLINE_OFFSET UNITYSDK_OFFSET(0xC7588D0)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_BGCURVE_OFFSET UNITYSDK_OFFSET(0xC758850)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_LINERENDERER_OFFSET UNITYSDK_OFFSET(0xC758870)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_OUTLINERENDERER_OFFSET UNITYSDK_OFFSET(0xC758890)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xC7588F0)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC759330)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xC758FC0)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0xC7590C0)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_SETCOLOR_OFFSET UNITYSDK_OFFSET(0xC7591C0)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xC759230)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_SETWIDTHSETTERENABLE_OFFSET UNITYSDK_OFFSET(0xC758F00)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_SET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0xC7588C0)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_SET_BGCCSPLITTERPOLYLINE_OFFSET UNITYSDK_OFFSET(0xC7588E0)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_SET_BGCURVE_OFFSET UNITYSDK_OFFSET(0xC758860)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_SET_LINERENDERER_OFFSET UNITYSDK_OFFSET(0xC758880)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW_SET_OUTLINERENDERER_OFFSET UNITYSDK_OFFSET(0xC7588A0)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0xC759440)
#define RPG_CLIENT_ALLEYROUTEELASTICVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xC7593E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyRouteElasticView_TypeDefinitionIndex = 62404;

	class AlleyRouteElasticView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_LNGDBLEKGHG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlleyRouteElasticView_TypeDefinitionIndex)->GetStaticField(0x14D60);
		}
		static ::System::Int32* StaticGet_NOFHFKNDBAO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlleyRouteElasticView_TypeDefinitionIndex)->GetStaticField(0x14D64);
		}
		// static const ::System::String* INHDCOPAFPF; // 0x0
		// static const ::System::String* EHJFHMEKFDI; // 0x0
		::System::Int32 ID; // 0x18
		::System::Boolean PlayingFadeIn; // 0x1C
		::System::Boolean PlayingFadeIOut; // 0x1D
		::BansheeGz::BGSpline::Curve::BGCurve* _BGCurve_k__BackingField; // 0x20
		::UnityEngine::LineRenderer* _LineRenderer_k__BackingField; // 0x28
		::UnityEngine::LineRenderer* _OutlineRenderer_k__BackingField; // 0x30
		::BansheeGz::BGSpline::Components::BGCcMath* _BGCcMath_k__BackingField; // 0x38
		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* _BGCcSplitterPolyline_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Coords; // 0x48
		::UnityEngine::Animator* APPGGMLEPLN; // 0x50
		::RPG::Client::MonoLineRendererWidthSetter* ICLAMHLNMLO; // 0x58
		::System::Action* COIDEICLEMP; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW__CCTOR_OFFSET))();
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_BGCurve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_BGCURVE_OFFSET))(this);
		}

		::System::Void set_BGCurve(::BansheeGz::BGSpline::Curve::BGCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_SET_BGCURVE_OFFSET))(this, a1);
		}

		::UnityEngine::LineRenderer* get_LineRenderer()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_LINERENDERER_OFFSET))(this);
		}

		::System::Void set_LineRenderer(::UnityEngine::LineRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_SET_LINERENDERER_OFFSET))(this, a1);
		}

		::UnityEngine::LineRenderer* get_OutlineRenderer()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_OUTLINERENDERER_OFFSET))(this);
		}

		::System::Void set_OutlineRenderer(::UnityEngine::LineRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_SET_OUTLINERENDERER_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_BGCcMath()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_BGCCMATH_OFFSET))(this);
		}

		::System::Void set_BGCcMath(::BansheeGz::BGSpline::Components::BGCcMath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_SET_BGCCMATH_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* get_BGCcSplitterPolyline()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_BGCCSPLITTERPOLYLINE_OFFSET))(this);
		}

		::System::Void set_BGCcSplitterPolyline(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_SET_BGCCSPLITTERPOLYLINE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_Source()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_GET_SOURCE_OFFSET))(this);
		}

		::System::Void BindComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_BINDCOMPONENTS_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_CLEAR_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_PLAYFADEIN_OFFSET))(this, a1);
		}

		::System::Void PlayFadeOut(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_PLAYFADEOUT_OFFSET))(this, a1);
		}

		::System::Void SetColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_SETCOLOR_OFFSET))(this, a1);
		}

		::System::Void SetWidthSetterEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_SETWIDTHSETTERENABLE_OFFSET))(this, a1);
		}

		::System::Void SetHighlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_SETHIGHLIGHT_OFFSET))(this, a1);
		}

		::System::Single GetWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_GETWIDTH_OFFSET))(this);
		}

		::System::Single GetOutlineWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_GETOUTLINEWIDTH_OFFSET))(this);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEELASTICVIEW_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}
	};
}
