#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine { template <typename T> class Pool_1; }

#define SPINE_TRIANGULATOR_DECOMPOSE_OFFSET UNITYSDK_OFFSET(0x1BDB73B0)
#define SPINE_TRIANGULATOR_ISCONCAVE_OFFSET UNITYSDK_OFFSET(0x1BDB71C0)
#define SPINE_TRIANGULATOR_POSITIVEAREA_OFFSET UNITYSDK_OFFSET(0x1BDB7370)
#define SPINE_TRIANGULATOR_TRIANGULATE_OFFSET UNITYSDK_OFFSET(0x1BDB6480)
#define SPINE_TRIANGULATOR_WINDING_OFFSET UNITYSDK_OFFSET(0x1BDB8860)
#define SPINE_TRIANGULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB88A0)

namespace Spine
{
	inline static constexpr unsigned int Triangulator_TypeDefinitionIndex = 31359;

	class Triangulator : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::System::Boolean>* isConcaveArray; // 0x10
		::Spine::Pool_1<::Spine::ExposedList_1<::System::Single>*>* polygonPool; // 0x18
		::Spine::ExposedList_1<::System::Int32>* triangles; // 0x20
		::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Int32>*>* convexPolygonsIndices; // 0x28
		::Spine::Pool_1<::Spine::ExposedList_1<::System::Int32>*>* polygonIndicesPool; // 0x30
		::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Single>*>* convexPolygons; // 0x38
		::Spine::ExposedList_1<::System::Int32>* indicesArray; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR__CTOR_OFFSET))(this);
		}

		::Spine::ExposedList_1<::System::Int32>* Triangulate(::Spine::ExposedList_1<::System::Single>* verticesArray)
		{
			return ((::Spine::ExposedList_1<::System::Int32>*(*)(::PVOID, ::Spine::ExposedList_1<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_TRIANGULATE_OFFSET))(this, verticesArray);
		}

		::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Single>*>* Decompose(::Spine::ExposedList_1<::System::Single>* verticesArray, ::Spine::ExposedList_1<::System::Int32>* triangles)
		{
			return ((::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Single>*>*(*)(::PVOID, ::Spine::ExposedList_1<::System::Single>*, ::Spine::ExposedList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_DECOMPOSE_OFFSET))(this, verticesArray, triangles);
		}

		static ::System::Boolean IsConcave(::System::Int32 index, ::System::Int32 vertexCount, ::Il2CppArray<::System::Single>* vertices, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_ISCONCAVE_OFFSET))(index, vertexCount, vertices, indices);
		}

		static ::System::Boolean PositiveArea(::System::Single p1x, ::System::Single p1y, ::System::Single p2x, ::System::Single p2y, ::System::Single p3x, ::System::Single p3y)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_POSITIVEAREA_OFFSET))(p1x, p1y, p2x, p2y, p3x, p3y);
		}

		static ::System::Int32 Winding(::System::Single p1x, ::System::Single p1y, ::System::Single p2x, ::System::Single p2y, ::System::Single p3x, ::System::Single p3y)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_WINDING_OFFSET))(p1x, p1y, p2x, p2y, p3x, p3y);
		}
	};
}
