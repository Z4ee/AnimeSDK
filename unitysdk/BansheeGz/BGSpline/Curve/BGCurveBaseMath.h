#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Field.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_Config; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionPointInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurveCalculatorClosestPoint; }
namespace BansheeGz::BGSpline::Curve { class BGCurveChangedArgs; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADD_CHANGED_OFFSET UNITYSDK_OFFSET(0x168E25D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADD_CHANGEREQUESTED_OFFSET UNITYSDK_OFFSET(0x168E3750)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADJUSTBOUNDARYPOINTSTANGENTS_OFFSET UNITYSDK_OFFSET(0x1690A870)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_AFTERINIT_OFFSET UNITYSDK_OFFSET(0x16905C40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_BINARYSEARCHBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1690D3C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCERATIO_1_OFFSET UNITYSDK_OFFSET(0x16907410)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x16907150)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCE_1_OFFSET UNITYSDK_OFFSET(0x169074F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x16907230)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONANDTANGENTBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x16907710)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONANDTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x169077E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_1_OFFSET UNITYSDK_OFFSET(0x168E1B70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_2_OFFSET UNITYSDK_OFFSET(0x168E1990)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x168E1D50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x169078B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x16907970)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYT_OFFSET UNITYSDK_OFFSET(0x16905C50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCSECTIONINDEXBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x168E1F00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCSECTIONINDEXBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x168DA2E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x16907A30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x16907AF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYT_OFFSET UNITYSDK_OFFSET(0x16906890)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCULATESECTION_OFFSET UNITYSDK_OFFSET(0x1690ADE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCULATESPLITSECTION_OFFSET UNITYSDK_OFFSET(0x1690B7E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CLAMPDISTANCE_OFFSET UNITYSDK_OFFSET(0x16907BB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIGONUPDATE_OFFSET UNITYSDK_OFFSET(0x1690D830)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CURVECHANGED_OFFSET UNITYSDK_OFFSET(0x1690D790)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16909B90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_DISTANCEBYRATIO_OFFSET UNITYSDK_OFFSET(0x16907D30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_FINDSECTIONINDEXBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x16907C50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x16909D20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETCONTROLFIRST_OFFSET UNITYSDK_OFFSET(0x169096D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETCONTROLSECOND_OFFSET UNITYSDK_OFFSET(0x16909920)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETDISTANCE_OFFSET UNITYSDK_OFFSET(0x169094C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x16909530)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_CONFIGURATION_OFFSET UNITYSDK_OFFSET(0x16905AB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x16905A90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x168DCB10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_NEEDTANGENTFORMULA_OFFSET UNITYSDK_OFFSET(0x16905AC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_POINTSCOUNT_OFFSET UNITYSDK_OFFSET(0x168E0180)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SECTIONINFOS_OFFSET UNITYSDK_OFFSET(0x16905AA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SECTIONSCOUNT_OFFSET UNITYSDK_OFFSET(0x168E4010)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SUPPRESSWARNING_OFFSET UNITYSDK_OFFSET(0x16905A70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_INIT_OFFSET UNITYSDK_OFFSET(0x16902FE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ISCALCULATED_OFFSET UNITYSDK_OFFSET(0x16909B70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ISUSEDISTANCETOADJUSTTANGENTS_OFFSET UNITYSDK_OFFSET(0x1690B740)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RECALCULATE_OFFSET UNITYSDK_OFFSET(0x16909E60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_REMOVE_CHANGED_OFFSET UNITYSDK_OFFSET(0x168E0E30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_REMOVE_CHANGEREQUESTED_OFFSET UNITYSDK_OFFSET(0x168E0E90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RESET_OFFSET UNITYSDK_OFFSET(0x1690B7A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RESIZE_OFFSET UNITYSDK_OFFSET(0x1690B4C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SET_SUPPRESSWARNING_OFFSET UNITYSDK_OFFSET(0x16905A80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1690D660)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_WARNING_OFFSET UNITYSDK_OFFSET(0x1690AD00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x168E2410)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16905B30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x16905AF0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveBaseMath_TypeDefinitionIndex = 34450;

	class BGCurveBaseMath : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*>* poolPointInfos; // 0x10
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*>* cachedSectionInfos; // 0x18
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x20
		::BansheeGz::BGSpline::Curve::BGCurveCalculatorClosestPoint* closestPointCalculator; // 0x28
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*>* poolSectionInfos; // 0x30
		::System::EventHandler* ChangeRequested; // 0x38
		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config; // 0x40
		::System::EventHandler* Changed; // 0x48
		::System::Int32 createdAtFrame; // 0x50
		::System::Single cachedLength; // 0x54
		::System::Double h3; // 0x58
		::System::Double h2; // 0x60
		::System::Int32 recalculatedAtFrame; // 0x68
		::System::Boolean _SuppressWarning_k__BackingField; // 0x6C
		::System::Boolean cachePosition; // 0x6D
		::System::Boolean ignoreSectionChangedCheck; // 0x6E
		::System::Boolean cacheTangent; // 0x6F
		::System::Double h; // 0x70

		::System::Void _ctor(::BansheeGz::BGSpline::Curve::BGCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void add_ChangeRequested(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADD_CHANGEREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_ChangeRequested(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_REMOVE_CHANGEREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_Changed(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADD_CHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_Changed(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_REMOVE_CHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_SuppressWarning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SUPPRESSWARNING_OFFSET))(this);
		}

		::System::Void set_SuppressWarning(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SET_SUPPRESSWARNING_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_CURVE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*>* get_SectionInfos()
		{
			return ((::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SECTIONINFOS_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* get_Item(::System::Int32 a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Int32 get_SectionsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SECTIONSCOUNT_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* get_Configuration()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_CONFIGURATION_OFFSET))(this);
		}

		::System::Boolean get_NeedTangentFormula()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_NEEDTANGENTFORMULA_OFFSET))(this);
		}

		::System::Int32 get_PointsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_POINTSCOUNT_OFFSET))(this);
		}

		::System::Void Init(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_INIT_OFFSET))(this, a1);
		}

		::System::Void AfterInit(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_AFTERINIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CalcPositionByT(::BansheeGz::BGSpline::Curve::BGCurvePoint* a1, ::BansheeGz::BGSpline::Curve::BGCurvePoint* a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYT_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 CalcTangentByT(::BansheeGz::BGSpline::Curve::BGCurvePoint* a1, ::BansheeGz::BGSpline::Curve::BGCurvePoint* a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYT_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 CalcByDistanceRatio(::System::Single a1, ::UnityEngine::Vector3& a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCERATIO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcByDistance(::System::Single a1, ::UnityEngine::Vector3& a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcByDistanceRatio_1(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCERATIO_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcByDistance_1(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCE_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcPositionAndTangentByDistanceRatio(::System::Single a1, ::UnityEngine::Vector3& a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONANDTANGENTBYDISTANCERATIO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcPositionAndTangentByDistance(::System::Single a1, ::UnityEngine::Vector3& a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONANDTANGENTBYDISTANCE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcPositionByDistanceRatio(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYDISTANCERATIO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CalcPositionByDistance(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYDISTANCE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CalcTangentByDistanceRatio(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYDISTANCERATIO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CalcTangentByDistance(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYDISTANCE_OFFSET))(this, a1, a2);
		}

		::System::Int32 CalcSectionIndexByDistance(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCSECTIONINDEXBYDISTANCE_OFFSET))(this, a1);
		}

		::System::Int32 CalcSectionIndexByDistanceRatio(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCSECTIONINDEXBYDISTANCERATIO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint_1(::UnityEngine::Vector3 a1, ::System::Single& a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint_2(::UnityEngine::Vector3 a1, ::System::Single& a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single GetDistance(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETDISTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetControlFirst(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETCONTROLFIRST_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetControlSecond(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETCONTROLSECOND_OFFSET))(this, a1);
		}

		::System::Boolean IsCalculated(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ISCALCULATED_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Bounds GetBoundingBox(::System::Int32 a1, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a2)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETBOUNDINGBOX_OFFSET))(this, a1, a2);
		}

		::System::Void Recalculate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RECALCULATE_OFFSET))(this, a1);
		}

		::System::Void Warning(::System::String* a1, ::System::Boolean a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_WARNING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CalculateSection(::System::Int32 a1, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a2, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a3, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a4, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCULATESECTION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AdjustBoundaryPointsTangents(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADJUSTBOUNDARYPOINTSTANGENTS_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsUseDistanceToAdjustTangents(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ISUSEDISTANCETOADJUSTTANGENTS_OFFSET))(this, a1, a2);
		}

		::System::Boolean Reset(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a2, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RESET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CalculateSplitSection(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a2, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCULATESPLITSECTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BinarySearchByDistance(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_BINARYSEARCHBYDISTANCE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 FindSectionIndexByDistance(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_FINDSECTIONINDEXBYDISTANCE_OFFSET))(this, a1);
		}

		::System::Single DistanceByRatio(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_DISTANCEBYRATIO_OFFSET))(this, a1);
		}

		::System::Single ClampDistance(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CLAMPDISTANCE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_TOSTRING_OFFSET))(this);
		}

		::System::Void Resize(::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*>*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RESIZE_OFFSET))(this, a1, a2);
		}

		::System::Void CurveChanged(::System::Object* a1, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CURVECHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void ConfigOnUpdate(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIGONUPDATE_OFFSET))(this, a1, a2);
		}
	};
}
