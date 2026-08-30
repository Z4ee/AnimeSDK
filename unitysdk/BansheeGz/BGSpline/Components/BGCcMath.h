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

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ADD_CHANGEDMATH_OFFSET UNITYSDK_OFFSET(0x1BFDEE20)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_BECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BFE29E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_1_OFFSET UNITYSDK_OFFSET(0x1BFE02F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x1BFE0200)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_1_OFFSET UNITYSDK_OFFSET(0x1BFE06B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BFD62A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x1BFE05C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BFE0980)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_1_OFFSET UNITYSDK_OFFSET(0x1BFE0C10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_2_OFFSET UNITYSDK_OFFSET(0x1BFE0DA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1BFE0A70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x1BFE03E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BFE07A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x1BFE0F30)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BFD64F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x1BFE04D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BFE0890)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CLAMPDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BFD5D80)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ENSUREMATHISCREATED_OFFSET UNITYSDK_OFFSET(0x1BFE0140)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GETDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BFD5FD0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1BFDF0E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_FIELDS_OFFSET UNITYSDK_OFFSET(0x1BFDEFD0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1BFDF2E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BFD8800)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_MATHTYPE_OFFSET UNITYSDK_OFFSET(0x1BFDEEE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_MATH_OFFSET UNITYSDK_OFFSET(0x1BFD94A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_NEWMATHREQUIRED_OFFSET UNITYSDK_OFFSET(0x1BFDFB90)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_OPTIMIZESTRAIGHTLINES_OFFSET UNITYSDK_OFFSET(0x1BFDEF90)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_RENDERERFORUPDATECHECK_OFFSET UNITYSDK_OFFSET(0x1BFDF080)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SECTIONPARTS_OFFSET UNITYSDK_OFFSET(0x1BFDEF40)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOLOR_OFFSET UNITYSDK_OFFSET(0x1BFDF440)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOUNT_OFFSET UNITYSDK_OFFSET(0x1BFDF460)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESSCALE_OFFSET UNITYSDK_OFFSET(0x1BFDF420)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SUPPORTHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x1BFDF410)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SUPPORTHANDLES_OFFSET UNITYSDK_OFFSET(0x1BFDF400)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_TOLERANCE_OFFSET UNITYSDK_OFFSET(0x1BFDEFB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1BFDF020)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_USEPOSITIONTOCALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x1BFDF000)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_WARNING_OFFSET UNITYSDK_OFFSET(0x1BFDF200)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEAFTER_OFFSET UNITYSDK_OFFSET(0x1BFE1740)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEBEFORE_OFFSET UNITYSDK_OFFSET(0x1BFE1350)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITMATH_OFFSET UNITYSDK_OFFSET(0x1BFDF480)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITRENDERERVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BFE14B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITVISIBILITYCHECK_OFFSET UNITYSDK_OFFSET(0x1BFE1800)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ISCALCULATED_OFFSET UNITYSDK_OFFSET(0x1BFDD690)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHONCHANGEREQUESTED_OFFSET UNITYSDK_OFFSET(0x1BFE1A10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHWASCHANGED_OFFSET UNITYSDK_OFFSET(0x1BFE12B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BFDFDE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_RECALCULATE_OFFSET UNITYSDK_OFFSET(0x1BFE0150)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_REMOVE_CHANGEDMATH_OFFSET UNITYSDK_OFFSET(0x1BFDEE80)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SENDEVENTSIFMATHISNOTCREATED_OFFSET UNITYSDK_OFFSET(0x1BFE10D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_FIELDS_OFFSET UNITYSDK_OFFSET(0x1BFDEFE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_MATHTYPE_OFFSET UNITYSDK_OFFSET(0x1BFDEEF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_OPTIMIZESTRAIGHTLINES_OFFSET UNITYSDK_OFFSET(0x1BFDEFA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_RENDERERFORUPDATECHECK_OFFSET UNITYSDK_OFFSET(0x1BFDF090)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SECTIONPARTS_OFFSET UNITYSDK_OFFSET(0x1BFDEF60)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOLOR_OFFSET UNITYSDK_OFFSET(0x1BFDF450)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOUNT_OFFSET UNITYSDK_OFFSET(0x1BFDF470)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESSCALE_OFFSET UNITYSDK_OFFSET(0x1BFDF430)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_TOLERANCE_OFFSET UNITYSDK_OFFSET(0x1BFDEFC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1BFDF030)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_USEPOSITIONTOCALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x1BFDF010)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_START_OFFSET UNITYSDK_OFFSET(0x1BFDFC60)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFE2B00)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE2A50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__INITVISIBILITYCHECK_B__100_0_OFFSET UNITYSDK_OFFSET(0x1BFE2B30)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcMath_TypeDefinitionIndex = 35355;

	class BGCcMath : public ::BansheeGz::BGSpline::Curve::BGCc
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_EmptyVertices()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(BGCcMath_TypeDefinitionIndex)->GetStaticField(0x63730);
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

		::System::Void add_ChangedMath(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ADD_CHANGEDMATH_OFFSET))(this, a1);
		}

		::System::Void remove_ChangedMath(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_REMOVE_CHANGEDMATH_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum get_MathType()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_MATHTYPE_OFFSET))(this);
		}

		::System::Void set_MathType(::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_MATHTYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_SectionParts()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SECTIONPARTS_OFFSET))(this);
		}

		::System::Void set_SectionParts(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SECTIONPARTS_OFFSET))(this, a1);
		}

		::System::Boolean get_OptimizeStraightLines()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_OPTIMIZESTRAIGHTLINES_OFFSET))(this);
		}

		::System::Void set_OptimizeStraightLines(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_OPTIMIZESTRAIGHTLINES_OFFSET))(this, a1);
		}

		::System::Single get_Tolerance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_TOLERANCE_OFFSET))(this);
		}

		::System::Void set_Tolerance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_TOLERANCE_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields get_Fields()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_FIELDS_OFFSET))(this);
		}

		::System::Void set_Fields(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_FIELDS_OFFSET))(this, a1);
		}

		::System::Boolean get_UsePositionToCalculateTangents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_USEPOSITIONTOCALCULATETANGENTS_OFFSET))(this);
		}

		::System::Void set_UsePositionToCalculateTangents(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_USEPOSITIONTOCALCULATETANGENTS_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum get_UpdateMode()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_UpdateMode(::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_UPDATEMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Renderer* get_RendererForUpdateCheck()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_RENDERERFORUPDATECHECK_OFFSET))(this);
		}

		::System::Void set_RendererForUpdateCheck(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_RENDERERFORUPDATECHECK_OFFSET))(this, a1);
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

		::System::Void set_SpheresScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_SpheresColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOLOR_OFFSET))(this);
		}

		::System::Void set_SpheresColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOLOR_OFFSET))(this, a1);
		}

		::System::Int32 get_SpheresCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOUNT_OFFSET))(this);
		}

		::System::Void set_SpheresCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOUNT_OFFSET))(this, a1);
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

		::System::Void Recalculate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_RECALCULATE_OFFSET))(this, a1);
		}

		::System::Boolean IsCalculated(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ISCALCULATED_OFFSET))(this, a1);
		}

		::System::Single ClampDistance(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CLAMPDISTANCE_OFFSET))(this, a1);
		}

		::System::Single GetDistance(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GETDISTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CalcByDistanceRatio(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcByDistanceRatio_1(::System::Single a1, ::UnityEngine::Vector3& a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcPositionByDistanceRatio(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCERATIO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CalcTangentByDistanceRatio(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCERATIO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CalcPositionAndTangentByDistanceRatio(::System::Single a1, ::UnityEngine::Vector3& a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCERATIO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcByDistance(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcByDistance_1(::System::Single a1, ::UnityEngine::Vector3& a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CalcPositionByDistance(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CalcTangentByDistance(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CalcPositionAndTangentByDistance(::System::Single a1, ::UnityEngine::Vector3& a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCE_OFFSET))(this, a1, a2, a3);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* get_Item(::System::Int32 a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_ITEM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint(::UnityEngine::Vector3 a1, ::System::Single& a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint_1(::UnityEngine::Vector3 a1, ::System::Single& a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint_2(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 CalcSectionIndexByDistance(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCE_OFFSET))(this, a1);
		}

		::System::Int32 CalcSectionIndexByDistanceRatio(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCERATIO_OFFSET))(this, a1);
		}

		::System::Void SendEventsIfMathIsNotCreated(::System::Object* a1, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SENDEVENTSIFMATHISNOTCREATED_OFFSET))(this, a1, a2);
		}

		::System::Void InitMath(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITMATH_OFFSET))(this, a1, a2);
		}

		::System::Void InitAabbVisibleBefore(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEBEFORE_OFFSET))(this, a1);
		}

		::System::Void InitAabbVisibleAfter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEAFTER_OFFSET))(this);
		}

		::System::Void MathOnChangeRequested(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHONCHANGEREQUESTED_OFFSET))(this, a1, a2);
		}

		::System::Void InitRendererVisible(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITRENDERERVISIBLE_OFFSET))(this, a1);
		}

		::System::Void InitVisibilityCheck(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITVISIBILITYCHECK_OFFSET))(this, a1, a2);
		}

		::System::Void BecameVisible(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_BECAMEVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void MathWasChanged(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHWASCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Boolean _InitVisibilityCheck_b__100_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__INITVISIBILITYCHECK_B__100_0_OFFSET))(this);
		}
	};
}
