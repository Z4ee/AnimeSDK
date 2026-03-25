#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_PolylinePoint.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_SplitModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcWithMath.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGPolylineSplitter; }
namespace BansheeGz::BGSpline::Components { class BGPolylineSplitter_Config; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_ADDLISTENERS_OFFSET UNITYSDK_OFFSET(0x165663A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_ADD_CHANGEDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x165653E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_DONOTOPTIMIZESTRAIGHTLINES_OFFSET UNITYSDK_OFFSET(0x165655A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x16565D10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_PARTSPERSECTION_OFFSET UNITYSDK_OFFSET(0x16565550)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_PARTSTOTAL_OFFSET UNITYSDK_OFFSET(0x16565500)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_POINTSCOUNT_OFFSET UNITYSDK_OFFSET(0x16565DA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x16566360)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x16566330)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPHERESCOLOR_OFFSET UNITYSDK_OFFSET(0x16565E30)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPHERESCOUNT_OFFSET UNITYSDK_OFFSET(0x16565E50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPHERESSCALE_OFFSET UNITYSDK_OFFSET(0x16565E10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPLITMODE_OFFSET UNITYSDK_OFFSET(0x165654A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SUPPORTHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x16565E00)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SUPPORTHANDLES_OFFSET UNITYSDK_OFFSET(0x16565DF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_USELOCAL_OFFSET UNITYSDK_OFFSET(0x165655C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_WARNING_OFFSET UNITYSDK_OFFSET(0x165655E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_INVALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x16566A40)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x165667A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_REMOVELISTENERS_OFFSET UNITYSDK_OFFSET(0x165667B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_REMOVE_CHANGEDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x16565440)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_DONOTOPTIMIZESTRAIGHTLINES_OFFSET UNITYSDK_OFFSET(0x165655B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_PARTSPERSECTION_OFFSET UNITYSDK_OFFSET(0x16565570)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_PARTSTOTAL_OFFSET UNITYSDK_OFFSET(0x16565520)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESCOLOR_OFFSET UNITYSDK_OFFSET(0x16565E40)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESCOUNT_OFFSET UNITYSDK_OFFSET(0x16565E60)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESSCALE_OFFSET UNITYSDK_OFFSET(0x16565E20)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPLITMODE_OFFSET UNITYSDK_OFFSET(0x165654B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_USELOCAL_OFFSET UNITYSDK_OFFSET(0x165655D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_START_OFFSET UNITYSDK_OFFSET(0x16566390)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x16565E70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_UPDATEREQUESTED_OFFSET UNITYSDK_OFFSET(0x16566FB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x16566FD0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcSplitterPolyline_TypeDefinitionIndex = 28222;

	class BGCcSplitterPolyline : public ::BansheeGz::BGSpline::Components::BGCcWithMath
	{
	public:
		::System::EventHandler* ChangedPositions; // 0x58
		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum splitMode; // 0x60
		::System::Int32 partsTotal; // 0x64
		::System::Int32 partsPerSection; // 0x68
		::System::Boolean doNotOptimizeStraightLines; // 0x6C
		::System::Boolean useLocal; // 0x6D
		::System::Single spheresScale; // 0x70
		::UnityEngine::Color spheresColor; // 0x74
		::System::Int32 spheresCount; // 0x84
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions; // 0x88
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* points; // 0x90
		::System::Boolean dataValid; // 0x98
		::BansheeGz::BGSpline::Components::BGPolylineSplitter* splitter; // 0xA0
		::BansheeGz::BGSpline::Components::BGPolylineSplitter_Config* config; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE__CTOR_OFFSET))(this);
		}

		::System::Void add_ChangedPositions(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_ADD_CHANGEDPOSITIONS_OFFSET))(this, value);
		}

		::System::Void remove_ChangedPositions(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_REMOVE_CHANGEDPOSITIONS_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum get_SplitMode()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPLITMODE_OFFSET))(this);
		}

		::System::Void set_SplitMode(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPLITMODE_OFFSET))(this, value);
		}

		::System::Int32 get_PartsTotal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_PARTSTOTAL_OFFSET))(this);
		}

		::System::Void set_PartsTotal(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_PARTSTOTAL_OFFSET))(this, value);
		}

		::System::Int32 get_PartsPerSection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_PARTSPERSECTION_OFFSET))(this);
		}

		::System::Void set_PartsPerSection(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_PARTSPERSECTION_OFFSET))(this, value);
		}

		::System::Boolean get_DoNotOptimizeStraightLines()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_DONOTOPTIMIZESTRAIGHTLINES_OFFSET))(this);
		}

		::System::Void set_DoNotOptimizeStraightLines(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_DONOTOPTIMIZESTRAIGHTLINES_OFFSET))(this, value);
		}

		::System::Boolean get_UseLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_USELOCAL_OFFSET))(this);
		}

		::System::Void set_UseLocal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_USELOCAL_OFFSET))(this, value);
		}

		::System::String* get_Warning()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_WARNING_OFFSET))(this);
		}

		::System::String* get_Info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_INFO_OFFSET))(this);
		}

		::System::Boolean get_SupportHandles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SUPPORTHANDLES_OFFSET))(this);
		}

		::System::Boolean get_SupportHandlesSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SUPPORTHANDLESSETTINGS_OFFSET))(this);
		}

		::System::Single get_SpheresScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPHERESSCALE_OFFSET))(this);
		}

		::System::Void set_SpheresScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESSCALE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_SpheresColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPHERESCOLOR_OFFSET))(this);
		}

		::System::Void set_SpheresColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESCOLOR_OFFSET))(this, value);
		}

		::System::Int32 get_SpheresCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPHERESCOUNT_OFFSET))(this);
		}

		::System::Void set_SpheresCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_PointsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_POINTSCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* get_Positions()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_POSITIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* get_Points()
		{
			return ((::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_POINTS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_ONDESTROY_OFFSET))(this);
		}

		::System::Void AddListeners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_ADDLISTENERS_OFFSET))(this);
		}

		::System::Void InvalidateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_INVALIDATEDATA_OFFSET))(this);
		}

		::System::Void RemoveListeners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_REMOVELISTENERS_OFFSET))(this);
		}

		::System::Void UpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_UPDATEDATA_OFFSET))(this);
		}

		::System::Void UpdateRequested(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_UPDATEREQUESTED_OFFSET))(this, sender, e);
		}
	};
}
