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

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_ADDLISTENERS_OFFSET UNITYSDK_OFFSET(0x168E4AA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_ADD_CHANGEDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x168E3AB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_DONOTOPTIMIZESTRAIGHTLINES_OFFSET UNITYSDK_OFFSET(0x168E3C70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x168E4400)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_PARTSPERSECTION_OFFSET UNITYSDK_OFFSET(0x168E3C20)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_PARTSTOTAL_OFFSET UNITYSDK_OFFSET(0x168E3BD0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_POINTSCOUNT_OFFSET UNITYSDK_OFFSET(0x168E4490)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x168E4A60)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x168E4A30)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPHERESCOLOR_OFFSET UNITYSDK_OFFSET(0x168E4520)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPHERESCOUNT_OFFSET UNITYSDK_OFFSET(0x168E4540)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPHERESSCALE_OFFSET UNITYSDK_OFFSET(0x168E4500)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPLITMODE_OFFSET UNITYSDK_OFFSET(0x168E3B70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SUPPORTHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x168E44F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SUPPORTHANDLES_OFFSET UNITYSDK_OFFSET(0x168E44E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_USELOCAL_OFFSET UNITYSDK_OFFSET(0x168E3C90)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_WARNING_OFFSET UNITYSDK_OFFSET(0x168E3CB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_INVALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x168E5B30)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x168E5540)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_REMOVELISTENERS_OFFSET UNITYSDK_OFFSET(0x168E5550)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_REMOVE_CHANGEDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x168E3B10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_DONOTOPTIMIZESTRAIGHTLINES_OFFSET UNITYSDK_OFFSET(0x168E3C80)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_PARTSPERSECTION_OFFSET UNITYSDK_OFFSET(0x168E3C40)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_PARTSTOTAL_OFFSET UNITYSDK_OFFSET(0x168E3BF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESCOLOR_OFFSET UNITYSDK_OFFSET(0x168E4530)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESCOUNT_OFFSET UNITYSDK_OFFSET(0x168E4550)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESSCALE_OFFSET UNITYSDK_OFFSET(0x168E4510)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPLITMODE_OFFSET UNITYSDK_OFFSET(0x168E3B80)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_USELOCAL_OFFSET UNITYSDK_OFFSET(0x168E3CA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_START_OFFSET UNITYSDK_OFFSET(0x168E4A90)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x168E4560)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_UPDATEREQUESTED_OFFSET UNITYSDK_OFFSET(0x168E6180)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x168E61B0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcSplitterPolyline_TypeDefinitionIndex = 34499;

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

		::System::Void add_ChangedPositions(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_ADD_CHANGEDPOSITIONS_OFFSET))(this, a1);
		}

		::System::Void remove_ChangedPositions(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_REMOVE_CHANGEDPOSITIONS_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum get_SplitMode()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPLITMODE_OFFSET))(this);
		}

		::System::Void set_SplitMode(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPLITMODE_OFFSET))(this, a1);
		}

		::System::Int32 get_PartsTotal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_PARTSTOTAL_OFFSET))(this);
		}

		::System::Void set_PartsTotal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_PARTSTOTAL_OFFSET))(this, a1);
		}

		::System::Int32 get_PartsPerSection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_PARTSPERSECTION_OFFSET))(this);
		}

		::System::Void set_PartsPerSection(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_PARTSPERSECTION_OFFSET))(this, a1);
		}

		::System::Boolean get_DoNotOptimizeStraightLines()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_DONOTOPTIMIZESTRAIGHTLINES_OFFSET))(this);
		}

		::System::Void set_DoNotOptimizeStraightLines(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_DONOTOPTIMIZESTRAIGHTLINES_OFFSET))(this, a1);
		}

		::System::Boolean get_UseLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_USELOCAL_OFFSET))(this);
		}

		::System::Void set_UseLocal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_USELOCAL_OFFSET))(this, a1);
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

		::System::Void set_SpheresScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_SpheresColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPHERESCOLOR_OFFSET))(this);
		}

		::System::Void set_SpheresColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESCOLOR_OFFSET))(this, a1);
		}

		::System::Int32 get_SpheresCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_GET_SPHERESCOUNT_OFFSET))(this);
		}

		::System::Void set_SpheresCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_SET_SPHERESCOUNT_OFFSET))(this, a1);
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

		::System::Void UpdateRequested(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_UPDATEREQUESTED_OFFSET))(this, a1, a2);
		}
	};
}
