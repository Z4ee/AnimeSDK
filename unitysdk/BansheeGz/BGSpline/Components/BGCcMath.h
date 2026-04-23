#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcMath_MathTypeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcMath_UpdateModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCc.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Field.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Fields.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath_MathChangedEvent; }
namespace BansheeGz::BGSpline::Components { class BGCcMath_VisibilityCheck; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_Config; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurveChangedArgs; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ADD_CHANGEDMATH_OFFSET UNITYSDK_OFFSET(0x17B8CC80)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_BECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x17B8FF80)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_1_OFFSET UNITYSDK_OFFSET(0x17B8DEE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x17B8DE50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_1_OFFSET UNITYSDK_OFFSET(0x17B8E120)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x17B853A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x17B8E090)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x17B8E2D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_1_OFFSET UNITYSDK_OFFSET(0x17B8E500)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_2_OFFSET UNITYSDK_OFFSET(0x17B8E690)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x17B8E360)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x17B8DF70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x17B8E1B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x17B8E820)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x17B85640)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x17B8E000)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x17B8E240)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CLAMPDISTANCE_OFFSET UNITYSDK_OFFSET(0x17B84EF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ENSUREMATHISCREATED_OFFSET UNITYSDK_OFFSET(0x17B8DDF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GETDISTANCE_OFFSET UNITYSDK_OFFSET(0x17B850B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x17B8CFA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_FIELDS_OFFSET UNITYSDK_OFFSET(0x17B8CE30)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_INFO_OFFSET UNITYSDK_OFFSET(0x17B8D130)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17B87540)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_MATHTYPE_OFFSET UNITYSDK_OFFSET(0x17B8CD40)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_MATH_OFFSET UNITYSDK_OFFSET(0x17B880D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_NEWMATHREQUIRED_OFFSET UNITYSDK_OFFSET(0x17B8D8E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_OPTIMIZESTRAIGHTLINES_OFFSET UNITYSDK_OFFSET(0x17B8CDF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_RENDERERFORUPDATECHECK_OFFSET UNITYSDK_OFFSET(0x17B8CEE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SECTIONPARTS_OFFSET UNITYSDK_OFFSET(0x17B8CDA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOLOR_OFFSET UNITYSDK_OFFSET(0x17B8D2E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOUNT_OFFSET UNITYSDK_OFFSET(0x17B8D300)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESSCALE_OFFSET UNITYSDK_OFFSET(0x17B8D2C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SUPPORTHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B8D2B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SUPPORTHANDLES_OFFSET UNITYSDK_OFFSET(0x17B8D2A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_TOLERANCE_OFFSET UNITYSDK_OFFSET(0x17B8CE10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x17B8CE80)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_USEPOSITIONTOCALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x17B8CE60)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_WARNING_OFFSET UNITYSDK_OFFSET(0x17B8D050)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEAFTER_OFFSET UNITYSDK_OFFSET(0x17B8EF00)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEBEFORE_OFFSET UNITYSDK_OFFSET(0x17B8EB70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITMATH_OFFSET UNITYSDK_OFFSET(0x17B8D320)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITRENDERERVISIBLE_OFFSET UNITYSDK_OFFSET(0x17B8ECD0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITVISIBILITYCHECK_OFFSET UNITYSDK_OFFSET(0x17B8EFA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ISCALCULATED_OFFSET UNITYSDK_OFFSET(0x17B8B7E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHONCHANGEREQUESTED_OFFSET UNITYSDK_OFFSET(0x17B8F180)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHWASCHANGED_OFFSET UNITYSDK_OFFSET(0x17B8EAD0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17B8DB30)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_RECALCULATE_OFFSET UNITYSDK_OFFSET(0x17B8DE00)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_REMOVE_CHANGEDMATH_OFFSET UNITYSDK_OFFSET(0x17B8CCE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SENDEVENTSIFMATHISNOTCREATED_OFFSET UNITYSDK_OFFSET(0x17B8E900)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_FIELDS_OFFSET UNITYSDK_OFFSET(0x17B8CE40)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_MATHTYPE_OFFSET UNITYSDK_OFFSET(0x17B8CD50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_OPTIMIZESTRAIGHTLINES_OFFSET UNITYSDK_OFFSET(0x17B8CE00)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_RENDERERFORUPDATECHECK_OFFSET UNITYSDK_OFFSET(0x17B8CEF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SECTIONPARTS_OFFSET UNITYSDK_OFFSET(0x17B8CDC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOLOR_OFFSET UNITYSDK_OFFSET(0x17B8D2F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOUNT_OFFSET UNITYSDK_OFFSET(0x17B8D310)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESSCALE_OFFSET UNITYSDK_OFFSET(0x17B8D2D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_TOLERANCE_OFFSET UNITYSDK_OFFSET(0x17B8CE20)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x17B8CE90)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_USEPOSITIONTOCALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x17B8CE70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_START_OFFSET UNITYSDK_OFFSET(0x17B8D9C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B90090)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x17B8FFE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__INITVISIBILITYCHECK_B__100_0_OFFSET UNITYSDK_OFFSET(0x17B900C0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcMath_TypeDefinitionIndex = 33841;

	class BGCcMath : public ::BansheeGz::BGSpline::Curve::BGCc
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_EmptyVertices()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(BGCcMath_TypeDefinitionIndex)->GetStaticField(0x69860);
		}
		// static const ::System::Int32 PartsMax = 0x3E8; // 0x0
		::System::EventHandler* ChangedMath; // 0x50
		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields fields; // 0x58
		::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum mathType; // 0x5C
		::System::Int32 sectionParts; // 0x60
		::System::Boolean optimizeStraightLines; // 0x64
		::System::Single tolerance; // 0x68
		::System::Boolean usePositionToCalculateTangents; // 0x6C
		::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum updateMode; // 0x70
		::UnityEngine::Renderer* rendererForUpdateCheck; // 0x78
		::BansheeGz::BGSpline::Components::BGCcMath_MathChangedEvent* mathChangedEvent; // 0x80
		::System::Single spheresScale; // 0x88
		::UnityEngine::Color spheresColor; // 0x8C
		::System::Int32 spheresCount; // 0x9C
		::BansheeGz::BGSpline::Curve::BGCurveBaseMath* math; // 0xA0
		::BansheeGz::BGSpline::Components::BGCcMath_VisibilityCheck* visibilityCheck; // 0xA8
		::UnityEngine::MeshFilter* meshFilter; // 0xB0
		::Il2CppArray<::UnityEngine::Vector3>* vertices; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__CCTOR_OFFSET))();
		}

		::System::Void add_ChangedMath(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ADD_CHANGEDMATH_OFFSET))(this, value);
		}

		::System::Void remove_ChangedMath(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_REMOVE_CHANGEDMATH_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum get_MathType()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_MATHTYPE_OFFSET))(this);
		}

		::System::Void set_MathType(::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_MATHTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_SectionParts()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SECTIONPARTS_OFFSET))(this);
		}

		::System::Void set_SectionParts(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SECTIONPARTS_OFFSET))(this, value);
		}

		::System::Boolean get_OptimizeStraightLines()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_OPTIMIZESTRAIGHTLINES_OFFSET))(this);
		}

		::System::Void set_OptimizeStraightLines(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_OPTIMIZESTRAIGHTLINES_OFFSET))(this, value);
		}

		::System::Single get_Tolerance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_TOLERANCE_OFFSET))(this);
		}

		::System::Void set_Tolerance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_TOLERANCE_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields get_Fields()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_FIELDS_OFFSET))(this);
		}

		::System::Void set_Fields(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_FIELDS_OFFSET))(this, value);
		}

		::System::Boolean get_UsePositionToCalculateTangents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_USEPOSITIONTOCALCULATETANGENTS_OFFSET))(this);
		}

		::System::Void set_UsePositionToCalculateTangents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_USEPOSITIONTOCALCULATETANGENTS_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum get_UpdateMode()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_UpdateMode(::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_UPDATEMODE_OFFSET))(this, value);
		}

		::UnityEngine::Renderer* get_RendererForUpdateCheck()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_RENDERERFORUPDATECHECK_OFFSET))(this);
		}

		::System::Void set_RendererForUpdateCheck(::UnityEngine::Renderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_RENDERERFORUPDATECHECK_OFFSET))(this, value);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_ERROR_OFFSET))(this);
		}

		::System::String* get_Warning()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_WARNING_OFFSET))(this);
		}

		::System::String* get_Info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_INFO_OFFSET))(this);
		}

		::System::Boolean get_SupportHandles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SUPPORTHANDLES_OFFSET))(this);
		}

		::System::Boolean get_SupportHandlesSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SUPPORTHANDLESSETTINGS_OFFSET))(this);
		}

		::System::Single get_SpheresScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESSCALE_OFFSET))(this);
		}

		::System::Void set_SpheresScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESSCALE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_SpheresColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOLOR_OFFSET))(this);
		}

		::System::Void set_SpheresColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOLOR_OFFSET))(this, value);
		}

		::System::Int32 get_SpheresCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOUNT_OFFSET))(this);
		}

		::System::Void set_SpheresCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOUNT_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath* get_Math()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_MATH_OFFSET))(this);
		}

		::System::Boolean get_NewMathRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_NEWMATHREQUIRED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ONDESTROY_OFFSET))(this);
		}

		::System::Void EnsureMathIsCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ENSUREMATHISCREATED_OFFSET))(this);
		}

		::System::Void Recalculate(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_RECALCULATE_OFFSET))(this, force);
		}

		::System::Boolean IsCalculated(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ISCALCULATED_OFFSET))(this, field);
		}

		::System::Single ClampDistance(::System::Single distance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CLAMPDISTANCE_OFFSET))(this, distance);
		}

		::System::Single GetDistance(::System::Int32 pointIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GETDISTANCE_OFFSET))(this, pointIndex);
		}

		::UnityEngine::Vector3 CalcByDistanceRatio(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field, ::System::Single ratio, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_OFFSET))(this, field, ratio, useLocal);
		}

		::UnityEngine::Vector3 CalcByDistanceRatio_1(::System::Single distanceRatio, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_1_OFFSET))(this, distanceRatio, tangent, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionByDistanceRatio(::System::Single ratio, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCERATIO_OFFSET))(this, ratio, useLocal);
		}

		::UnityEngine::Vector3 CalcTangentByDistanceRatio(::System::Single ratio, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCERATIO_OFFSET))(this, ratio, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionAndTangentByDistanceRatio(::System::Single distanceRatio, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCERATIO_OFFSET))(this, distanceRatio, tangent, useLocal);
		}

		::UnityEngine::Vector3 CalcByDistance(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field, ::System::Single distance, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_OFFSET))(this, field, distance, useLocal);
		}

		::UnityEngine::Vector3 CalcByDistance_1(::System::Single distance, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_1_OFFSET))(this, distance, tangent, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionByDistance(::System::Single distance, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCE_OFFSET))(this, distance, useLocal);
		}

		::UnityEngine::Vector3 CalcTangentByDistance(::System::Single distance, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCE_OFFSET))(this, distance, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionAndTangentByDistance(::System::Single distance, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCE_OFFSET))(this, distance, tangent, useLocal);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* get_Item(::System::Int32 i)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_ITEM_OFFSET))(this, i);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint(::UnityEngine::Vector3 point, ::System::Single& distance, ::UnityEngine::Vector3& tangent, ::System::Boolean skipSectionsOptimization, ::System::Boolean skipPointsOptimization)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_OFFSET))(this, point, distance, tangent, skipSectionsOptimization, skipPointsOptimization);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint_1(::UnityEngine::Vector3 point, ::System::Single& distance, ::System::Boolean skipSectionsOptimization, ::System::Boolean skipPointsOptimization)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_1_OFFSET))(this, point, distance, skipSectionsOptimization, skipPointsOptimization);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint_2(::UnityEngine::Vector3 point, ::System::Boolean skipSectionsOptimization, ::System::Boolean skipPointsOptimization)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_2_OFFSET))(this, point, skipSectionsOptimization, skipPointsOptimization);
		}

		::System::Int32 CalcSectionIndexByDistance(::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCE_OFFSET))(this, distance);
		}

		::System::Int32 CalcSectionIndexByDistanceRatio(::System::Single distanceRatio)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCERATIO_OFFSET))(this, distanceRatio);
		}

		::System::Void SendEventsIfMathIsNotCreated(::System::Object* sender, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SENDEVENTSIFMATHISNOTCREATED_OFFSET))(this, sender, e);
		}

		::System::Void InitMath(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITMATH_OFFSET))(this, sender, e);
		}

		::System::Void InitAabbVisibleBefore(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEBEFORE_OFFSET))(this, config);
		}

		::System::Void InitAabbVisibleAfter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEAFTER_OFFSET))(this);
		}

		::System::Void MathOnChangeRequested(::System::Object* sender, ::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHONCHANGEREQUESTED_OFFSET))(this, sender, eventArgs);
		}

		::System::Void InitRendererVisible(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITRENDERERVISIBLE_OFFSET))(this, config);
		}

		::System::Void InitVisibilityCheck(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config, ::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITVISIBILITYCHECK_OFFSET))(this, config, renderer);
		}

		::System::Void BecameVisible(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_BECAMEVISIBLE_OFFSET))(this, sender, e);
		}

		::System::Void MathWasChanged(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHWASCHANGED_OFFSET))(this, sender, e);
		}

		::System::Boolean _InitVisibilityCheck_b__100_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__INITVISIBILITYCHECK_B__100_0_OFFSET))(this);
		}
	};
}
