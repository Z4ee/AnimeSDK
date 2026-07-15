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

#define EZYSLICE_SLICER_CREATEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B7F70A0)
#define EZYSLICE_SLICER_CREATEFROM_OFFSET UNITYSDK_OFFSET(0x1B7F70F0)
#define EZYSLICE_SLICER_CREATEHULL_OFFSET UNITYSDK_OFFSET(0x1B7F7220)
#define EZYSLICE_SLICER_CREATELOWERHULL_OFFSET UNITYSDK_OFFSET(0x1B7F7200)
#define EZYSLICE_SLICER_CREATEUPPERHULL_OFFSET UNITYSDK_OFFSET(0x1B7F71E0)
#define EZYSLICE_SLICER_SLICE_1_OFFSET UNITYSDK_OFFSET(0x1B7F5B90)
#define EZYSLICE_SLICER_SLICE_OFFSET UNITYSDK_OFFSET(0x1B7F57A0)
#define EZYSLICE_SLICER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F9070)

namespace EzySlice
{
	inline static constexpr unsigned int Slicer_TypeDefinitionIndex = 45230;

	class Slicer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER__CTOR_OFFSET))(this);
		}

		static ::EzySlice::SlicedHull* Slice(::UnityEngine::GameObject* a1, ::EzySlice::Plane a2, ::EzySlice::TextureRegion a3, ::UnityEngine::Material* a4)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::GameObject*, ::EzySlice::Plane, ::EzySlice::TextureRegion, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_SLICE_OFFSET))(a1, a2, a3, a4);
		}

		static ::EzySlice::SlicedHull* Slice_1(::UnityEngine::Mesh* a1, ::EzySlice::Plane a2, ::EzySlice::TextureRegion a3, ::System::Int32 a4)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::Mesh*, ::EzySlice::Plane, ::EzySlice::TextureRegion, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_SLICE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::EzySlice::SlicedHull* CreateFrom(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>* a1, ::System::Collections::Generic::List_1<::EzySlice::Triangle>* a2, ::System::Int32 a3)
		{
			return ((::EzySlice::SlicedHull*(*)(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>*, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_CREATEFROM_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Mesh* CreateUpperHull(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::EzySlice::Triangle>* a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Mesh*(*)(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>*, ::System::Int32, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_CREATEUPPERHULL_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Mesh* CreateLowerHull(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::EzySlice::Triangle>* a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Mesh*(*)(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>*, ::System::Int32, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_CREATELOWERHULL_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Mesh* CreateHull(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::EzySlice::Triangle>* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Mesh*(*)(::Il2CppArray<::EzySlice::Slicer_SlicedSubmesh*>*, ::System::Int32, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_CREATEHULL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::EzySlice::Triangle>* CreateFrom_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2, ::EzySlice::TextureRegion a3)
		{
			return ((::System::Collections::Generic::List_1<::EzySlice::Triangle>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::EzySlice::TextureRegion))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_CREATEFROM_1_OFFSET))(a1, a2, a3);
		}
	};
}
