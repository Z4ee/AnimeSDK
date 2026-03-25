#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/Triangle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EZYSLICE_SLICER_SLICEDSUBMESH_GET_HASNORMAL_OFFSET UNITYSDK_OFFSET(0x83E1E60)
#define EZYSLICE_SLICER_SLICEDSUBMESH_GET_HASTANGENT_OFFSET UNITYSDK_OFFSET(0x83E1EB0)
#define EZYSLICE_SLICER_SLICEDSUBMESH_GET_HASUV_OFFSET UNITYSDK_OFFSET(0x83E1E10)
#define EZYSLICE_SLICER_SLICEDSUBMESH_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x83E07D0)
#define EZYSLICE_SLICER_SLICEDSUBMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x83E0650)

namespace EzySlice
{
	inline static constexpr unsigned int Slicer_SlicedSubmesh_TypeDefinitionIndex = 37942;

	class Slicer_SlicedSubmesh : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::EzySlice::Triangle>* upperHull; // 0x10
		::System::Collections::Generic::List_1<::EzySlice::Triangle>* lowerHull; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_SLICEDSUBMESH__CTOR_OFFSET))(this);
		}

		::System::Boolean get_hasUV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_SLICEDSUBMESH_GET_HASUV_OFFSET))(this);
		}

		::System::Boolean get_hasNormal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_SLICEDSUBMESH_GET_HASNORMAL_OFFSET))(this);
		}

		::System::Boolean get_hasTangent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_SLICEDSUBMESH_GET_HASTANGENT_OFFSET))(this);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICER_SLICEDSUBMESH_GET_ISVALID_OFFSET))(this);
		}
	};
}
