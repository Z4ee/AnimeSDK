#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine { template <typename T> class Pool_1; }

#define SPINE_TRIANGULATOR_DECOMPOSE_OFFSET UNITYSDK_OFFSET(0x1E627860)
#define SPINE_TRIANGULATOR_ISCONCAVE_OFFSET UNITYSDK_OFFSET(0x1E627700)
#define SPINE_TRIANGULATOR_POSITIVEAREA_OFFSET UNITYSDK_OFFSET(0x1E627820)
#define SPINE_TRIANGULATOR_TRIANGULATE_OFFSET UNITYSDK_OFFSET(0x1E626BB0)
#define SPINE_TRIANGULATOR_WINDING_OFFSET UNITYSDK_OFFSET(0x1E6289F0)
#define SPINE_TRIANGULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E628A30)

namespace Spine
{
	inline static constexpr unsigned int Triangulator_TypeDefinitionIndex = 38408;

	class Triangulator : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::System::Int32>* indicesArray; // 0x10
		::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Single>*>* convexPolygons; // 0x18
		::Spine::ExposedList_1<::System::Int32>* triangles; // 0x20
		::Spine::Pool_1<::Spine::ExposedList_1<::System::Int32>*>* polygonIndicesPool; // 0x28
		::Spine::ExposedList_1<::System::Boolean>* isConcaveArray; // 0x30
		::Spine::Pool_1<::Spine::ExposedList_1<::System::Single>*>* polygonPool; // 0x38
		::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Int32>*>* convexPolygonsIndices; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR__CTOR_OFFSET))(this);
		}

		::Spine::ExposedList_1<::System::Int32>* Triangulate(::Spine::ExposedList_1<::System::Single>* a1)
		{
			return ((::Spine::ExposedList_1<::System::Int32>*(*)(::PVOID, ::Spine::ExposedList_1<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_TRIANGULATE_OFFSET))(this, a1);
		}

		::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Single>*>* Decompose(::Spine::ExposedList_1<::System::Single>* a1, ::Spine::ExposedList_1<::System::Int32>* a2)
		{
			return ((::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Single>*>*(*)(::PVOID, ::Spine::ExposedList_1<::System::Single>*, ::Spine::ExposedList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_DECOMPOSE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean IsConcave(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Single>* a3, ::Il2CppArray<::System::Int32>* a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_ISCONCAVE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean PositiveArea(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_POSITIVEAREA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Winding(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_WINDING_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
