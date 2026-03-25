#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSweep2D_PositionWithU.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSweep2D_ProfileModeEnum.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshFilter; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x165673F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_LINEWIDTH_OFFSET UNITYSDK_OFFSET(0x16567200)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x16567600)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_PROFILEMODE_OFFSET UNITYSDK_OFFSET(0x165671A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_PROFILESPLINE_OFFSET UNITYSDK_OFFSET(0x16567290)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_SWAPNORMALS_OFFSET UNITYSDK_OFFSET(0x16567390)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_SWAPUV_OFFSET UNITYSDK_OFFSET(0x16567360)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_UCOORDINATEEND_OFFSET UNITYSDK_OFFSET(0x16567260)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_UCOORDINATESTART_OFFSET UNITYSDK_OFFSET(0x16567230)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_VCOORDINATESCALE_OFFSET UNITYSDK_OFFSET(0x165673C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_LINEWIDTH_OFFSET UNITYSDK_OFFSET(0x16567210)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_PROFILEMODE_OFFSET UNITYSDK_OFFSET(0x165671B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_PROFILESPLINE_OFFSET UNITYSDK_OFFSET(0x165672A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_SWAPNORMALS_OFFSET UNITYSDK_OFFSET(0x165673A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_SWAPUV_OFFSET UNITYSDK_OFFSET(0x16567370)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_UCOORDINATEEND_OFFSET UNITYSDK_OFFSET(0x16567270)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_UCOORDINATESTART_OFFSET UNITYSDK_OFFSET(0x16567240)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_VCOORDINATESCALE_OFFSET UNITYSDK_OFFSET(0x165673D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_START_OFFSET UNITYSDK_OFFSET(0x16567690)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_UPDATEREQUESTED_OFFSET UNITYSDK_OFFSET(0x165692E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x16567750)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16569510)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D__CTOR_OFFSET UNITYSDK_OFFSET(0x16569310)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D__GET_ERROR_B__34_0_OFFSET UNITYSDK_OFFSET(0x165695B0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcSweep2D_TypeDefinitionIndex = 28225;

	class BGCcSweep2D : public ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline
	{
	public:
		static ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSweep2D_PositionWithU>** StaticGet_crossSectionList()
		{
			return (::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSweep2D_PositionWithU>**)Il2CppClass::FromTypeDefinitionIndex(BGCcSweep2D_TypeDefinitionIndex)->GetStaticField(0x23380);
		}
		::BansheeGz::BGSpline::Components::BGCcSweep2D_ProfileModeEnum profileMode; // 0xB0
		::System::Single lineWidth; // 0xB4
		::System::Single uCoordinateStart; // 0xB8
		::System::Single uCoordinateEnd; // 0xBC
		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* profileSpline; // 0xC0
		::System::Single vCoordinateScale; // 0xC8
		::System::Boolean swapUV; // 0xCC
		::System::Boolean swapNormals; // 0xCD
		::UnityEngine::MeshFilter* meshFilter; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs; // 0xE0
		::System::Collections::Generic::List_1<::System::Int32>* triangles; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D__CCTOR_OFFSET))();
		}

		::BansheeGz::BGSpline::Components::BGCcSweep2D_ProfileModeEnum get_ProfileMode()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcSweep2D_ProfileModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_PROFILEMODE_OFFSET))(this);
		}

		::System::Void set_ProfileMode(::BansheeGz::BGSpline::Components::BGCcSweep2D_ProfileModeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSweep2D_ProfileModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_PROFILEMODE_OFFSET))(this, value);
		}

		::System::Single get_LineWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_LINEWIDTH_OFFSET))(this);
		}

		::System::Void set_LineWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_LINEWIDTH_OFFSET))(this, value);
		}

		::System::Single get_UCoordinateStart()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_UCOORDINATESTART_OFFSET))(this);
		}

		::System::Void set_UCoordinateStart(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_UCOORDINATESTART_OFFSET))(this, value);
		}

		::System::Single get_UCoordinateEnd()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_UCOORDINATEEND_OFFSET))(this);
		}

		::System::Void set_UCoordinateEnd(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_UCOORDINATEEND_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* get_ProfileSpline()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_PROFILESPLINE_OFFSET))(this);
		}

		::System::Void set_ProfileSpline(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_PROFILESPLINE_OFFSET))(this, value);
		}

		::System::Boolean get_SwapUv()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_SWAPUV_OFFSET))(this);
		}

		::System::Void set_SwapUv(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_SWAPUV_OFFSET))(this, value);
		}

		::System::Boolean get_SwapNormals()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_SWAPNORMALS_OFFSET))(this);
		}

		::System::Void set_SwapNormals(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_SWAPNORMALS_OFFSET))(this, value);
		}

		::System::Single get_VCoordinateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_VCOORDINATESCALE_OFFSET))(this);
		}

		::System::Void set_VCoordinateScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_SET_VCOORDINATESCALE_OFFSET))(this, value);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_ERROR_OFFSET))(this);
		}

		::UnityEngine::MeshFilter* get_MeshFilter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_GET_MESHFILTER_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_START_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_UPDATEUI_OFFSET))(this);
		}

		::System::Void UpdateRequested(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D_UPDATEREQUESTED_OFFSET))(this, sender, e);
		}

		::System::String* _get_Error_b__34_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSWEEP2D__GET_ERROR_B__34_0_OFFSET))(this);
		}
	};
}
