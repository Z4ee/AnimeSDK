#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/Plane.h"
#include "unitysdk/EzySlice/TextureRegion.h"
#include "unitysdk/EzySlice/Triangle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EzySlice { class SlicedHull; }
namespace EzySlice { class Slicer_SlicedSubmesh; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define EZYSLICE_SLICER_CREATEFROM_1_OFFSET UNITYSDK_OFFSET(0x83E0810)
#define EZYSLICE_SLICER_CREATEFROM_OFFSET UNITYSDK_OFFSET(0x83E0860)
#define EZYSLICE_SLICER_CREATEHULL_OFFSET UNITYSDK_OFFSET(0x83E0990)
#define EZYSLICE_SLICER_CREATELOWERHULL_OFFSET UNITYSDK_OFFSET(0x83E0970)
#define EZYSLICE_SLICER_CREATEUPPERHULL_OFFSET UNITYSDK_OFFSET(0x83E0950)
#define EZYSLICE_SLICER_SLICE_1_OFFSET UNITYSDK_OFFSET(0x83DF4F0)
#define EZYSLICE_SLICER_SLICE_OFFSET UNITYSDK_OFFSET(0x83DF0F0)
#define EZYSLICE_SLICER__CTOR_OFFSET UNITYSDK_OFFSET(0x83E2900)

namespace EzySlice
{
	inline static constexpr unsigned int Slicer_TypeDefinitionIndex = 37941;

	class Slicer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER__CTOR_OFFSET))(this);
		}

		static ::EzySlice::SlicedHull* Slice(::UnityEngine::GameObject* obj, ::EzySlice::Plane pl, ::EzySlice::TextureRegion crossRegion, ::UnityEngine::Material* crossMaterial)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::GameObject*, ::EzySlice::Plane, ::EzySlice::TextureRegion, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_SLICE_OFFSET))(obj, pl, crossRegion, crossMaterial);
		}

		static ::EzySlice::SlicedHull* Slice_1(::UnityEngine::Mesh* sharedMesh, ::EzySlice::Plane pl, ::EzySlice::TextureRegion region, ::System::Int32 crossIndex)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::Mesh*, ::EzySlice::Plane, ::EzySlice::TextureRegion, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_SLICE_1_OFFSET))(sharedMesh, pl, region, crossIndex);
		}

		static ::EzySlice::SlicedHull* CreateFrom(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>* meshes, ::System::Collections::Generic::List_1<::EzySlice::Triangle>* cross, ::System::Int32 crossSectionIndex)
		{
			return ((::EzySlice::SlicedHull*(*)(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>*, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_CREATEFROM_OFFSET))(meshes, cross, crossSectionIndex);
		}

		static ::UnityEngine::Mesh* CreateUpperHull(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>* mesh, ::System::Int32 total, ::System::Collections::Generic::List_1<::EzySlice::Triangle>* crossSection, ::System::Int32 crossSectionIndex)
		{
			return ((::UnityEngine::Mesh*(*)(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>*, ::System::Int32, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_CREATEUPPERHULL_OFFSET))(mesh, total, crossSection, crossSectionIndex);
		}

		static ::UnityEngine::Mesh* CreateLowerHull(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>* mesh, ::System::Int32 total, ::System::Collections::Generic::List_1<::EzySlice::Triangle>* crossSection, ::System::Int32 crossSectionIndex)
		{
			return ((::UnityEngine::Mesh*(*)(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>*, ::System::Int32, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_CREATELOWERHULL_OFFSET))(mesh, total, crossSection, crossSectionIndex);
		}

		static ::UnityEngine::Mesh* CreateHull(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>* meshes, ::System::Int32 total, ::System::Collections::Generic::List_1<::EzySlice::Triangle>* crossSection, ::System::Int32 crossIndex, ::System::Boolean isUpper)
		{
			return ((::UnityEngine::Mesh*(*)(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>*, ::System::Int32, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_CREATEHULL_OFFSET))(meshes, total, crossSection, crossIndex, isUpper);
		}

		static ::System::Collections::Generic::List_1<::EzySlice::Triangle>* CreateFrom_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* intPoints, ::UnityEngine::Vector3 planeNormal, ::EzySlice::TextureRegion region)
		{
			return ((::System::Collections::Generic::List_1<::EzySlice::Triangle>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::EzySlice::TextureRegion))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_CREATEFROM_1_OFFSET))(intPoints, planeNormal, region);
		}
	};
}
