#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/TrianglesSamplerBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Rand; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define DEST_MATH_INDEXEDTRIANGLESSAMPLER_INIT_OFFSET UNITYSDK_OFFSET(0x1FAD3330)
#define DEST_MATH_INDEXEDTRIANGLESSAMPLER_SAMPLEARRAY_1_OFFSET UNITYSDK_OFFSET(0x1FAD3F50)
#define DEST_MATH_INDEXEDTRIANGLESSAMPLER_SAMPLEARRAY_OFFSET UNITYSDK_OFFSET(0x1FAD3B40)
#define DEST_MATH_INDEXEDTRIANGLESSAMPLER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x1FAD3900)
#define DEST_MATH_INDEXEDTRIANGLESSAMPLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAD3760)
#define DEST_MATH_INDEXEDTRIANGLESSAMPLER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FAD3780)
#define DEST_MATH_INDEXEDTRIANGLESSAMPLER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FAD3870)
#define DEST_MATH_INDEXEDTRIANGLESSAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD32B0)

namespace Dest::Math
{
	inline static constexpr unsigned int IndexedTrianglesSampler_TypeDefinitionIndex = 35465;

	class IndexedTrianglesSampler : public ::Dest::Math::TrianglesSamplerBase
	{
	public:
		::Il2CppArray<::System::Int32>* _indices; // 0x30

		::System::Void _ctor(::Il2CppArray<::UnityEngine::Vector3>* vertices, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + DEST_MATH_INDEXEDTRIANGLESSAMPLER__CTOR_OFFSET))(this, vertices, indices);
		}

		::System::Void _ctor_1(::Il2CppArray<::UnityEngine::Vector3>* vertices, ::Il2CppArray<::System::Int32>* indices, ::Dest::Math::Rand* rand)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*, ::Dest::Math::Rand*))((::PBYTE)hIl2Cpp + DEST_MATH_INDEXEDTRIANGLESSAMPLER__CTOR_1_OFFSET))(this, vertices, indices, rand);
		}

		::System::Void _ctor_2(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DEST_MATH_INDEXEDTRIANGLESSAMPLER__CTOR_2_OFFSET))(this, mesh);
		}

		::System::Void _ctor_3(::UnityEngine::Mesh* mesh, ::Dest::Math::Rand* rand)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::Dest::Math::Rand*))((::PBYTE)hIl2Cpp + DEST_MATH_INDEXEDTRIANGLESSAMPLER__CTOR_3_OFFSET))(this, mesh, rand);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_INDEXEDTRIANGLESSAMPLER_INIT_OFFSET))(this);
		}

		::UnityEngine::Vector3 Sample()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_INDEXEDTRIANGLESSAMPLER_SAMPLE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* SampleArray(::System::Int32 count)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_INDEXEDTRIANGLESSAMPLER_SAMPLEARRAY_OFFSET))(this, count);
		}

		::Il2CppArray<::UnityEngine::Vector3>* SampleArray_1(::System::Int32 count, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::UnityEngine::Texture2D* sampleMap, ::System::Single min, ::System::Single max)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::Texture2D*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_INDEXEDTRIANGLESSAMPLER_SAMPLEARRAY_1_OFFSET))(this, count, uvs, sampleMap, min, max);
		}
	};
}
