#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/Plane.h"
#include "unitysdk/EzySlice/TextureRegion.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EzySlice { class SlicedHull; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x8C0AEA0)
#define EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_2_OFFSET UNITYSDK_OFFSET(0x8C0AF00)
#define EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_3_OFFSET UNITYSDK_OFFSET(0x8C0AF50)
#define EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_4_OFFSET UNITYSDK_OFFSET(0x8C0AD40)
#define EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x8C0AD10)
#define EZYSLICE_SLICEREXTENSIONS_SLICE_1_OFFSET UNITYSDK_OFFSET(0x8C0A9D0)
#define EZYSLICE_SLICEREXTENSIONS_SLICE_2_OFFSET UNITYSDK_OFFSET(0x8C0AA20)
#define EZYSLICE_SLICEREXTENSIONS_SLICE_3_OFFSET UNITYSDK_OFFSET(0x8C0A9A0)
#define EZYSLICE_SLICEREXTENSIONS_SLICE_OFFSET UNITYSDK_OFFSET(0x8C0A950)

namespace EzySlice
{
	inline static constexpr unsigned int SlicerExtensions_TypeDefinitionIndex = 43820;

	class SlicerExtensions : public ::System::Object
	{
	public:
		static ::EzySlice::SlicedHull* Slice(::UnityEngine::GameObject* obj, ::EzySlice::Plane pl, ::UnityEngine::Material* crossSectionMaterial)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::GameObject*, ::EzySlice::Plane, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICE_OFFSET))(obj, pl, crossSectionMaterial);
		}

		static ::EzySlice::SlicedHull* Slice_1(::UnityEngine::GameObject* obj, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::UnityEngine::Material* crossSectionMaterial)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICE_1_OFFSET))(obj, position, direction, crossSectionMaterial);
		}

		static ::EzySlice::SlicedHull* Slice_2(::UnityEngine::GameObject* obj, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::EzySlice::TextureRegion textureRegion, ::UnityEngine::Material* crossSectionMaterial)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::EzySlice::TextureRegion, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICE_2_OFFSET))(obj, position, direction, textureRegion, crossSectionMaterial);
		}

		static ::EzySlice::SlicedHull* Slice_3(::UnityEngine::GameObject* obj, ::EzySlice::Plane pl, ::EzySlice::TextureRegion textureRegion, ::UnityEngine::Material* crossSectionMaterial)
		{
			return ((::EzySlice::SlicedHull*(*)(::UnityEngine::GameObject*, ::EzySlice::Plane, ::EzySlice::TextureRegion, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICE_3_OFFSET))(obj, pl, textureRegion, crossSectionMaterial);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* SliceInstantiate(::UnityEngine::GameObject* obj, ::EzySlice::Plane pl)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*, ::EzySlice::Plane))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_OFFSET))(obj, pl);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* SliceInstantiate_1(::UnityEngine::GameObject* obj, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_1_OFFSET))(obj, position, direction);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* SliceInstantiate_2(::UnityEngine::GameObject* obj, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::UnityEngine::Material* crossSectionMat)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_2_OFFSET))(obj, position, direction, crossSectionMat);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* SliceInstantiate_3(::UnityEngine::GameObject* obj, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::EzySlice::TextureRegion cuttingRegion, ::UnityEngine::Material* crossSectionMaterial)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::EzySlice::TextureRegion, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_3_OFFSET))(obj, position, direction, cuttingRegion, crossSectionMaterial);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* SliceInstantiate_4(::UnityEngine::GameObject* obj, ::EzySlice::Plane pl, ::EzySlice::TextureRegion cuttingRegion, ::UnityEngine::Material* crossSectionMaterial)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*, ::EzySlice::Plane, ::EzySlice::TextureRegion, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEREXTENSIONS_SLICEINSTANTIATE_4_OFFSET))(obj, pl, cuttingRegion, crossSectionMaterial);
		}
	};
}
