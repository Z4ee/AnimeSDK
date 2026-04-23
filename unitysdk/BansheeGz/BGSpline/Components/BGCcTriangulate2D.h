#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace BansheeGz::BGSpline::Components { class BGTriangulator2D; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class MeshFilter; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_DOUBLESIDED_OFFSET UNITYSDK_OFFSET(0x17B946B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x17B94810)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_FLIP_OFFSET UNITYSDK_OFFSET(0x17B94670)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x17B948E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x17B94B10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_SCALEUV_OFFSET UNITYSDK_OFFSET(0x17B94600)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_UPDATEEVERYFRAME_OFFSET UNITYSDK_OFFSET(0x17B946E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_USELOCAL_OFFSET UNITYSDK_OFFSET(0x17B94800)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17B951B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17B95140)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_SET_DOUBLESIDED_OFFSET UNITYSDK_OFFSET(0x17B946C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_SET_FLIP_OFFSET UNITYSDK_OFFSET(0x17B94680)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_SET_SCALEUV_OFFSET UNITYSDK_OFFSET(0x17B94610)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_SET_UPDATEEVERYFRAME_OFFSET UNITYSDK_OFFSET(0x17B946F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_START_OFFSET UNITYSDK_OFFSET(0x17B94BA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_UIUPDATER_OFFSET UNITYSDK_OFFSET(0x17B947B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_UPDATEREQUESTED_OFFSET UNITYSDK_OFFSET(0x17B95D10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x17B94CF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x17B95D50)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcTriangulate2D_TypeDefinitionIndex = 33852;

	class BGCcTriangulate2D : public ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline
	{
	public:
		::UnityEngine::Vector2 scaleUV; // 0xB0
		::UnityEngine::Vector2 offsetUV; // 0xB8
		::System::Boolean flip; // 0xC0
		::System::Boolean doubleSided; // 0xC1
		::UnityEngine::Vector2 scaleBackUV; // 0xC4
		::UnityEngine::Vector2 offsetBackUV; // 0xCC
		::System::Boolean updateEveryFrame; // 0xD4
		::System::Int32 updateAtFrame; // 0xD8
		::System::Boolean everyFrameUpdateIsRunning; // 0xDC
		::UnityEngine::MeshFilter* meshFilter; // 0xE0
		::BansheeGz::BGSpline::Components::BGTriangulator2D* triangulator; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_ScaleUv()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_SCALEUV_OFFSET))(this);
		}

		::System::Void set_ScaleUv(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_SET_SCALEUV_OFFSET))(this, value);
		}

		::System::Boolean get_Flip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_FLIP_OFFSET))(this);
		}

		::System::Void set_Flip(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_SET_FLIP_OFFSET))(this, value);
		}

		::System::Boolean get_DoubleSided()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_DOUBLESIDED_OFFSET))(this);
		}

		::System::Void set_DoubleSided(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_SET_DOUBLESIDED_OFFSET))(this, value);
		}

		::System::Boolean get_UpdateEveryFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_UPDATEEVERYFRAME_OFFSET))(this);
		}

		::System::Void set_UpdateEveryFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_SET_UPDATEEVERYFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_UseLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_USELOCAL_OFFSET))(this);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_ERROR_OFFSET))(this);
		}

		::System::String* get_Info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_INFO_OFFSET))(this);
		}

		::UnityEngine::MeshFilter* get_MeshFilter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_GET_MESHFILTER_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_UPDATEUI_OFFSET))(this);
		}

		::System::Void UpdateRequested(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_UPDATEREQUESTED_OFFSET))(this, sender, e);
		}

		::System::Collections::IEnumerator* UiUpdater()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D_UIUPDATER_OFFSET))(this);
		}
	};
}
