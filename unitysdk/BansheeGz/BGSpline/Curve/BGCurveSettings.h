#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_ControlTypeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveSettings_HandlesTypeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveSettings_ShowCurveModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveSettings_ShowCurveOptionsEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace BansheeGz::BGSpline::Curve { class BGCurveSettings_RestrictGizmozSetting; }
namespace BansheeGz::BGSpline::Curve { class BGCurveSettings_SettingsForHandles; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_CONTROLHANDLESCOLOR_OFFSET UNITYSDK_OFFSET(0x1D2FD590)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_CONTROLHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D2FD570)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_CONTROLHANDLESTYPE_OFFSET UNITYSDK_OFFSET(0x1D2FD550)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x1D2FD6B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_EXISTING_OFFSET UNITYSDK_OFFSET(0x1D2FD6D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_HANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D2FD490)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_HANDLESTYPE_OFFSET UNITYSDK_OFFSET(0x1691BF00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_HIDEHANDLES_OFFSET UNITYSDK_OFFSET(0x1691BC80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_LABELCOLORSELECTED_OFFSET UNITYSDK_OFFSET(0x1D2FD630)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_LABELCOLOR_OFFSET UNITYSDK_OFFSET(0x1D2FD610)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_LABELCONTROLCOLOR_OFFSET UNITYSDK_OFFSET(0x1D2FD710)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_LINECOLOR_OFFSET UNITYSDK_OFFSET(0x1D2FD510)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_NEWPOINTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1691BCA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_RESTRICTGIZMOZSETTINGS_OFFSET UNITYSDK_OFFSET(0x1691BD80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_RESTRICTGIZMOZ_OFFSET UNITYSDK_OFFSET(0x1691BD60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x1D2FD4B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCONTROLHANDLES_OFFSET UNITYSDK_OFFSET(0x1D2FD530)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCONTROLLABELS_OFFSET UNITYSDK_OFFSET(0x1D2FD6F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCONTROLPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1D2FD5F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCURVEMODE_OFFSET UNITYSDK_OFFSET(0x1691BE00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCURVEOPTION_OFFSET UNITYSDK_OFFSET(0x1691BE20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCURVE_OFFSET UNITYSDK_OFFSET(0x1691BD40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWHANDLES_OFFSET UNITYSDK_OFFSET(0x1691BE40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWLABELS_OFFSET UNITYSDK_OFFSET(0x1D2FD5B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWPOINTCONTROLPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1691BD00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWPOINTCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x1691BCC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWPOINTMENU_OFFSET UNITYSDK_OFFSET(0x1691BD20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x1691BCE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1D2FD5D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWSPHERES_OFFSET UNITYSDK_OFFSET(0x1D2FD650)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWTANGENTS_OFFSET UNITYSDK_OFFSET(0x1691BE60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWTRANSFORMFIELD_OFFSET UNITYSDK_OFFSET(0x1D2FD730)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SPHERECOLOR_OFFSET UNITYSDK_OFFSET(0x1D2FD690)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SPHERERADIUS_OFFSET UNITYSDK_OFFSET(0x1D2FD670)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_TANGENTSCOLOR_OFFSET UNITYSDK_OFFSET(0x1691BEA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_TANGENTSPERSECTION_OFFSET UNITYSDK_OFFSET(0x1691BEC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_TANGENTSSIZE_OFFSET UNITYSDK_OFFSET(0x1691BE80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_VRAY_OFFSET UNITYSDK_OFFSET(0x1D2FD4F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_CONTROLHANDLESCOLOR_OFFSET UNITYSDK_OFFSET(0x1D2FD5A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_CONTROLHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D2FD580)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_CONTROLHANDLESTYPE_OFFSET UNITYSDK_OFFSET(0x1D2FD560)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x1D2FD6C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_EXISTING_OFFSET UNITYSDK_OFFSET(0x1D2FD6E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_HANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D2FD4A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_HANDLESTYPE_OFFSET UNITYSDK_OFFSET(0x1D2FD480)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_HIDEHANDLES_OFFSET UNITYSDK_OFFSET(0x1691BC90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_LABELCOLORSELECTED_OFFSET UNITYSDK_OFFSET(0x1D2FD640)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_LABELCOLOR_OFFSET UNITYSDK_OFFSET(0x1D2FD620)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_LABELCONTROLCOLOR_OFFSET UNITYSDK_OFFSET(0x1D2FD720)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_LINECOLOR_OFFSET UNITYSDK_OFFSET(0x1D2FD520)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_NEWPOINTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1691BCB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_RESTRICTGIZMOZ_OFFSET UNITYSDK_OFFSET(0x1691BD70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x1D2FD4D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCONTROLHANDLES_OFFSET UNITYSDK_OFFSET(0x1D2FD540)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCONTROLLABELS_OFFSET UNITYSDK_OFFSET(0x1D2FD700)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCONTROLPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1D2FD600)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCURVEMODE_OFFSET UNITYSDK_OFFSET(0x1691BE10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCURVEOPTION_OFFSET UNITYSDK_OFFSET(0x1691BE30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCURVE_OFFSET UNITYSDK_OFFSET(0x1691BD50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWHANDLES_OFFSET UNITYSDK_OFFSET(0x1691BE50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWLABELS_OFFSET UNITYSDK_OFFSET(0x1D2FD5C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWPOINTCONTROLPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1691BD10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWPOINTCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x1691BCD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWPOINTMENU_OFFSET UNITYSDK_OFFSET(0x1691BD30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x1691BCF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1D2FD5E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWSPHERES_OFFSET UNITYSDK_OFFSET(0x1D2FD660)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWTANGENTS_OFFSET UNITYSDK_OFFSET(0x1691BE70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWTRANSFORMFIELD_OFFSET UNITYSDK_OFFSET(0x1D2FD740)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SPHERECOLOR_OFFSET UNITYSDK_OFFSET(0x1D2FD6A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SPHERERADIUS_OFFSET UNITYSDK_OFFSET(0x1D2FD680)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_TANGENTSCOLOR_OFFSET UNITYSDK_OFFSET(0x1691BEB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_TANGENTSPERSECTION_OFFSET UNITYSDK_OFFSET(0x1691BEE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_TANGENTSSIZE_OFFSET UNITYSDK_OFFSET(0x1691BE90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_VRAY_OFFSET UNITYSDK_OFFSET(0x1D2FD500)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FD750)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveSettings_TypeDefinitionIndex = 34477;

	class BGCurveSettings : public ::System::Object
	{
	public:
		::System::Boolean hideHandles; // 0x10
		::System::Single newPointDistance; // 0x14
		::System::Boolean showCurve; // 0x18
		::BansheeGz::BGSpline::Curve::BGCurveSettings_ShowCurveModeEnum showCurveMode; // 0x1C
		::BansheeGz::BGSpline::Curve::BGCurveSettings_ShowCurveOptionsEnum showCurveOption; // 0x20
		::System::Int32 sections; // 0x24
		::System::Boolean showPointMenu; // 0x28
		::System::Boolean showTangents; // 0x29
		::System::Single tangentsSize; // 0x2C
		::UnityEngine::Color tangentsColor; // 0x30
		::System::Int32 tangentsPerSection; // 0x40
		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum controlType; // 0x44
		::System::Boolean vRay; // 0x48
		::UnityEngine::Color lineColor; // 0x4C
		::System::String* restrictGizmoz; // 0x60
		::System::Boolean showPointControlType; // 0x68
		::System::Boolean showPointPosition; // 0x69
		::System::Boolean showHandles; // 0x6A
		::BansheeGz::BGSpline::Curve::BGCurveSettings_HandlesTypeEnum handlesType; // 0x6C
		::BansheeGz::BGSpline::Curve::BGCurveSettings_SettingsForHandles* handlesSettings; // 0x70
		::System::Boolean showLabels; // 0x78
		::UnityEngine::Color labelColor; // 0x7C
		::System::Boolean showPositions; // 0x8C
		::UnityEngine::Color labelColorSelected; // 0x90
		::System::Boolean showSpheres; // 0xA0
		::System::Single sphereRadius; // 0xA4
		::UnityEngine::Color sphereColor; // 0xA8
		::System::Boolean showPointControlPositions; // 0xB8
		::System::Boolean showControlHandles; // 0xB9
		::BansheeGz::BGSpline::Curve::BGCurveSettings_HandlesTypeEnum controlHandlesType; // 0xBC
		::BansheeGz::BGSpline::Curve::BGCurveSettings_SettingsForHandles* controlHandlesSettings; // 0xC0
		::UnityEngine::Color controlHandlesColor; // 0xC8
		::System::Boolean showControlLabels; // 0xD8
		::System::Boolean showControlPositions; // 0xD9
		::UnityEngine::Color labelControlColor; // 0xDC
		::System::Boolean showTransformField; // 0xEC
		::System::Boolean existing; // 0xED
		::BansheeGz::BGSpline::Curve::BGCurveSettings_RestrictGizmozSetting* restrictGizmozSettings; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HideHandles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_HIDEHANDLES_OFFSET))(this);
		}

		::System::Void set_HideHandles(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_HIDEHANDLES_OFFSET))(this, a1);
		}

		::System::Single get_NewPointDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_NEWPOINTDISTANCE_OFFSET))(this);
		}

		::System::Void set_NewPointDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_NEWPOINTDISTANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowPointControlType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWPOINTCONTROLTYPE_OFFSET))(this);
		}

		::System::Void set_ShowPointControlType(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWPOINTCONTROLTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowPointPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWPOINTPOSITION_OFFSET))(this);
		}

		::System::Void set_ShowPointPosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWPOINTPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowPointControlPositions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWPOINTCONTROLPOSITIONS_OFFSET))(this);
		}

		::System::Void set_ShowPointControlPositions(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWPOINTCONTROLPOSITIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowPointMenu()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWPOINTMENU_OFFSET))(this);
		}

		::System::Void set_ShowPointMenu(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWPOINTMENU_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCURVE_OFFSET))(this);
		}

		::System::Void set_ShowCurve(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCURVE_OFFSET))(this, a1);
		}

		::System::String* get_RestrictGizmoz()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_RESTRICTGIZMOZ_OFFSET))(this);
		}

		::System::Void set_RestrictGizmoz(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_RESTRICTGIZMOZ_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurveSettings_RestrictGizmozSetting* get_RestrictGizmozSettings()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveSettings_RestrictGizmozSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_RESTRICTGIZMOZSETTINGS_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurveSettings_ShowCurveModeEnum get_ShowCurveMode()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveSettings_ShowCurveModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCURVEMODE_OFFSET))(this);
		}

		::System::Void set_ShowCurveMode(::BansheeGz::BGSpline::Curve::BGCurveSettings_ShowCurveModeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveSettings_ShowCurveModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCURVEMODE_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurveSettings_ShowCurveOptionsEnum get_ShowCurveOption()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveSettings_ShowCurveOptionsEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCURVEOPTION_OFFSET))(this);
		}

		::System::Void set_ShowCurveOption(::BansheeGz::BGSpline::Curve::BGCurveSettings_ShowCurveOptionsEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveSettings_ShowCurveOptionsEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCURVEOPTION_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowHandles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWHANDLES_OFFSET))(this);
		}

		::System::Void set_ShowHandles(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWHANDLES_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowTangents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWTANGENTS_OFFSET))(this);
		}

		::System::Void set_ShowTangents(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWTANGENTS_OFFSET))(this, a1);
		}

		::System::Single get_TangentsSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_TANGENTSSIZE_OFFSET))(this);
		}

		::System::Void set_TangentsSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_TANGENTSSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_TangentsColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_TANGENTSCOLOR_OFFSET))(this);
		}

		::System::Void set_TangentsColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_TANGENTSCOLOR_OFFSET))(this, a1);
		}

		::System::Int32 get_TangentsPerSection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_TANGENTSPERSECTION_OFFSET))(this);
		}

		::System::Void set_TangentsPerSection(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_TANGENTSPERSECTION_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurveSettings_HandlesTypeEnum get_HandlesType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveSettings_HandlesTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_HANDLESTYPE_OFFSET))(this);
		}

		::System::Void set_HandlesType(::BansheeGz::BGSpline::Curve::BGCurveSettings_HandlesTypeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveSettings_HandlesTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_HANDLESTYPE_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurveSettings_SettingsForHandles* get_HandlesSettings()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveSettings_SettingsForHandles*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_HANDLESSETTINGS_OFFSET))(this);
		}

		::System::Void set_HandlesSettings(::BansheeGz::BGSpline::Curve::BGCurveSettings_SettingsForHandles* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveSettings_SettingsForHandles*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_HANDLESSETTINGS_OFFSET))(this, a1);
		}

		::System::Int32 get_Sections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SECTIONS_OFFSET))(this);
		}

		::System::Void set_Sections(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SECTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_VRay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_VRAY_OFFSET))(this);
		}

		::System::Void set_VRay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_VRAY_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_LineColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_LINECOLOR_OFFSET))(this);
		}

		::System::Void set_LineColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_LINECOLOR_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowControlHandles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCONTROLHANDLES_OFFSET))(this);
		}

		::System::Void set_ShowControlHandles(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCONTROLHANDLES_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurveSettings_HandlesTypeEnum get_ControlHandlesType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveSettings_HandlesTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_CONTROLHANDLESTYPE_OFFSET))(this);
		}

		::System::Void set_ControlHandlesType(::BansheeGz::BGSpline::Curve::BGCurveSettings_HandlesTypeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveSettings_HandlesTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_CONTROLHANDLESTYPE_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurveSettings_SettingsForHandles* get_ControlHandlesSettings()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveSettings_SettingsForHandles*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_CONTROLHANDLESSETTINGS_OFFSET))(this);
		}

		::System::Void set_ControlHandlesSettings(::BansheeGz::BGSpline::Curve::BGCurveSettings_SettingsForHandles* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveSettings_SettingsForHandles*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_CONTROLHANDLESSETTINGS_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_ControlHandlesColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_CONTROLHANDLESCOLOR_OFFSET))(this);
		}

		::System::Void set_ControlHandlesColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_CONTROLHANDLESCOLOR_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowLabels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWLABELS_OFFSET))(this);
		}

		::System::Void set_ShowLabels(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWLABELS_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowPositions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWPOSITIONS_OFFSET))(this);
		}

		::System::Void set_ShowPositions(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWPOSITIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowControlPositions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCONTROLPOSITIONS_OFFSET))(this);
		}

		::System::Void set_ShowControlPositions(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCONTROLPOSITIONS_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_LabelColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_LABELCOLOR_OFFSET))(this);
		}

		::System::Void set_LabelColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_LABELCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_LabelColorSelected()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_LABELCOLORSELECTED_OFFSET))(this);
		}

		::System::Void set_LabelColorSelected(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_LABELCOLORSELECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowSpheres()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWSPHERES_OFFSET))(this);
		}

		::System::Void set_ShowSpheres(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWSPHERES_OFFSET))(this, a1);
		}

		::System::Single get_SphereRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SPHERERADIUS_OFFSET))(this);
		}

		::System::Void set_SphereRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SPHERERADIUS_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_SphereColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SPHERECOLOR_OFFSET))(this);
		}

		::System::Void set_SphereColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SPHERECOLOR_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum get_ControlType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_CONTROLTYPE_OFFSET))(this);
		}

		::System::Void set_ControlType(::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_CONTROLTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_Existing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_EXISTING_OFFSET))(this);
		}

		::System::Void set_Existing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_EXISTING_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowControlLabels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWCONTROLLABELS_OFFSET))(this);
		}

		::System::Void set_ShowControlLabels(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWCONTROLLABELS_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_LabelControlColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_LABELCONTROLCOLOR_OFFSET))(this);
		}

		::System::Void set_LabelControlColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_LABELCONTROLCOLOR_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowTransformField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_GET_SHOWTRANSFORMFIELD_OFFSET))(this);
		}

		::System::Void set_ShowTransformField(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SET_SHOWTRANSFORMFIELD_OFFSET))(this, a1);
		}
	};
}
