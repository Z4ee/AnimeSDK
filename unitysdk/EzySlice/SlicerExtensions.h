#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/Plane.h"
#include "unitysdk/EzySlice/TextureRegion.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EzySlice { class SlicedHull; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x1D459DC0)
#define EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_2_OFFSET UNITYSDK_OFFSET(0x1D459E20)
#define EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_3_OFFSET UNITYSDK_OFFSET(0x1D459E70)
#define EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_4_OFFSET UNITYSDK_OFFSET(0x1D459CA0)
#define EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1D459C70)
#define EZYSLICE_SLICEREXTENSIONS_SLICE_1_OFFSET UNITYSDK_OFFSET(0x1D459930)
#define EZYSLICE_SLICEREXTENSIONS_SLICE_2_OFFSET UNITYSDK_OFFSET(0x1D459980)
#define EZYSLICE_SLICEREXTENSIONS_SLICE_3_OFFSET UNITYSDK_OFFSET(0x1D459900)
#define EZYSLICE_SLICEREXTENSIONS_SLICE_OFFSET UNITYSDK_OFFSET(0x1D4598B0)

namespace EzySlice
{
	inline static constexpr unsigned int SlicerExtensions_TypeDefinitionIndex = 47468;

	class SlicerExtensions : public ::System::Object
	{
	public:
		static ::EzySlice::SlicedHull* Slice(::UnityEngine::GameObject* a1, ::EzySlice::Plane a2, ::UnityEngine::Material* a3)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::GameObject*, ::EzySlice::Plane, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICE_OFFSET))(a1, a2, a3);
		}

		static ::EzySlice::SlicedHull* Slice_1(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Material* a4)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::EzySlice::SlicedHull* Slice_2(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::EzySlice::TextureRegion a4, ::UnityEngine::Material* a5)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::EzySlice::TextureRegion, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICE_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::EzySlice::SlicedHull* Slice_3(::UnityEngine::GameObject* a1, ::EzySlice::Plane a2, ::EzySlice::TextureRegion a3, ::UnityEngine::Material* a4)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::GameObject*, ::EzySlice::Plane, ::EzySlice::TextureRegion, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICE_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* SliceInstantiate(::UnityEngine::GameObject* a1, ::EzySlice::Plane a2)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*, ::EzySlice::Plane))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* SliceInstantiate_1(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* SliceInstantiate_2(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Material* a4)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* SliceInstantiate_3(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::EzySlice::TextureRegion a4, ::UnityEngine::Material* a5)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::EzySlice::TextureRegion, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* SliceInstantiate_4(::UnityEngine::GameObject* a1, ::EzySlice::Plane a2, ::EzySlice::TextureRegion a3, ::UnityEngine::Material* a4)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*, ::EzySlice::Plane, ::EzySlice::TextureRegion, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_4_OFFSET))(a1, a2, a3, a4);
		}
	};
}
