#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineEventArgs; }
namespace FluffyUnderware::Curvy::Components { class GLSlotData; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_ADD_OFFSET UNITYSDK_OFFSET(0x1BE384B0)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_GETSLOT_OFFSET UNITYSDK_OFFSET(0x1BE38270)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BE37E30)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_ONPOSTRENDER_OFFSET UNITYSDK_OFFSET(0x1BE37E70)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_ONSPLINEREFRESH_OFFSET UNITYSDK_OFFSET(0x1BE38020)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BE37BF0)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1BE386D0)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_SANITIZE_OFFSET UNITYSDK_OFFSET(0x1BE37C00)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE38830)

namespace FluffyUnderware::Curvy::Components
{
	inline static constexpr unsigned int CurvyGLRenderer_TypeDefinitionIndex = 37249;

	class CurvyGLRenderer : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Components::GLSlotData*>* Splines; // 0x28
		::System::Lazy_1<::UnityEngine::Material*>* lineMaterial; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnPostRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_ONPOSTRENDER_OFFSET))(this);
		}

		::System::Void sanitize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_SANITIZE_OFFSET))(this);
		}

		::System::Void OnSplineRefresh(::FluffyUnderware::Curvy::CurvySplineEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineEventArgs*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_ONSPLINEREFRESH_OFFSET))(this, e);
		}

		::FluffyUnderware::Curvy::Components::GLSlotData* getSlot(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::FluffyUnderware::Curvy::Components::GLSlotData*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_GETSLOT_OFFSET))(this, spline);
		}

		::System::Void Add(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_ADD_OFFSET))(this, spline);
		}

		::System::Void Remove(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER_REMOVE_OFFSET))(this, spline);
		}
	};
}
