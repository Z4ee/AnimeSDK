#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/TrianglesSamplerBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Rand; }
namespace UnityEngine { class Mesh; }

#define DEST_MATH_NONINDEXEDTRIANGLESSAMPLER_INIT_OFFSET UNITYSDK_OFFSET(0x1E3A57D0)
#define DEST_MATH_NONINDEXEDTRIANGLESSAMPLER_SAMPLEARRAY_OFFSET UNITYSDK_OFFSET(0x1E3A5E40)
#define DEST_MATH_NONINDEXEDTRIANGLESSAMPLER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x1E3A5C70)
#define DEST_MATH_NONINDEXEDTRIANGLESSAMPLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A5B90)
#define DEST_MATH_NONINDEXEDTRIANGLESSAMPLER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E3A5BA0)
#define DEST_MATH_NONINDEXEDTRIANGLESSAMPLER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E3A5C30)
#define DEST_MATH_NONINDEXEDTRIANGLESSAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A5750)

namespace Dest::Math
{
	inline static constexpr unsigned int NonIndexedTrianglesSampler_TypeDefinitionIndex = 34807;

	class NonIndexedTrianglesSampler : public ::Dest::Math::TrianglesSamplerBase
	{
	public:
		::System::Void _ctor(::Il2CppArray<::UnityEngine::Vector3>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_NONINDEXEDTRIANGLESSAMPLER__CTOR_OFFSET))(this, vertices);
		}

		::System::Void _ctor_1(::Il2CppArray<::UnityEngine::Vector3>* vertices, ::Dest::Math::Rand* rand)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Dest::Math::Rand*))((::PBYTE)hIl2Cpp + DEST_MATH_NONINDEXEDTRIANGLESSAMPLER__CTOR_1_OFFSET))(this, vertices, rand);
		}

		::System::Void _ctor_2(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DEST_MATH_NONINDEXEDTRIANGLESSAMPLER__CTOR_2_OFFSET))(this, mesh);
		}

		::System::Void _ctor_3(::UnityEngine::Mesh* mesh, ::Dest::Math::Rand* rand)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::Dest::Math::Rand*))((::PBYTE)hIl2Cpp + DEST_MATH_NONINDEXEDTRIANGLESSAMPLER__CTOR_3_OFFSET))(this, mesh, rand);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_NONINDEXEDTRIANGLESSAMPLER_INIT_OFFSET))(this);
		}

		::UnityEngine::Vector3 Sample()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_NONINDEXEDTRIANGLESSAMPLER_SAMPLE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* SampleArray(::System::Int32 count)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_NONINDEXEDTRIANGLESSAMPLER_SAMPLEARRAY_OFFSET))(this, count);
		}
	};
}
