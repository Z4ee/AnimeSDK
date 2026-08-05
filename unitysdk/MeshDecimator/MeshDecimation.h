#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MeshDecimator/Algorithm.h"
#include "unitysdk/System/Object.h"

namespace MeshDecimator { class Mesh; }
namespace MeshDecimator::Algorithms { class DecimationAlgorithm; }

#define MESHDECIMATOR_MESHDECIMATION_CREATEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1E27B2F0)
#define MESHDECIMATOR_MESHDECIMATION_DECIMATEMESHLOSSLESS_1_OFFSET UNITYSDK_OFFSET(0x1E27B630)
#define MESHDECIMATOR_MESHDECIMATION_DECIMATEMESHLOSSLESS_2_OFFSET UNITYSDK_OFFSET(0x1E27B720)
#define MESHDECIMATOR_MESHDECIMATION_DECIMATEMESHLOSSLESS_OFFSET UNITYSDK_OFFSET(0x1E27B620)
#define MESHDECIMATOR_MESHDECIMATION_DECIMATEMESH_1_OFFSET UNITYSDK_OFFSET(0x1E27B380)
#define MESHDECIMATOR_MESHDECIMATION_DECIMATEMESH_2_OFFSET UNITYSDK_OFFSET(0x1E27B470)
#define MESHDECIMATOR_MESHDECIMATION_DECIMATEMESH_OFFSET UNITYSDK_OFFSET(0x1E27B370)

namespace MeshDecimator
{
	inline static constexpr unsigned int MeshDecimation_TypeDefinitionIndex = 35476;

	class MeshDecimation : public ::System::Object
	{
	public:
		static ::MeshDecimator::Algorithms::DecimationAlgorithm* CreateAlgorithm(::MeshDecimator::Algorithm algorithm)
		{
			return ((::MeshDecimator::Algorithms::DecimationAlgorithm*(*)(::MeshDecimator::Algorithm))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESHDECIMATION_CREATEALGORITHM_OFFSET))(algorithm);
		}

		static ::MeshDecimator::Mesh* DecimateMesh(::MeshDecimator::Mesh* mesh, ::System::Int32 targetTriangleCount)
		{
			return ((::MeshDecimator::Mesh*(*)(::MeshDecimator::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESHDECIMATION_DECIMATEMESH_OFFSET))(mesh, targetTriangleCount);
		}

		static ::MeshDecimator::Mesh* DecimateMesh_1(::MeshDecimator::Algorithm algorithm, ::MeshDecimator::Mesh* mesh, ::System::Int32 targetTriangleCount)
		{
			return ((::MeshDecimator::Mesh*(*)(::MeshDecimator::Algorithm, ::MeshDecimator::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESHDECIMATION_DECIMATEMESH_1_OFFSET))(algorithm, mesh, targetTriangleCount);
		}

		static ::MeshDecimator::Mesh* DecimateMesh_2(::MeshDecimator::Algorithms::DecimationAlgorithm* algorithm, ::MeshDecimator::Mesh* mesh, ::System::Int32 targetTriangleCount)
		{
			return ((::MeshDecimator::Mesh*(*)(::MeshDecimator::Algorithms::DecimationAlgorithm*, ::MeshDecimator::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESHDECIMATION_DECIMATEMESH_2_OFFSET))(algorithm, mesh, targetTriangleCount);
		}

		static ::MeshDecimator::Mesh* DecimateMeshLossless(::MeshDecimator::Mesh* mesh)
		{
			return ((::MeshDecimator::Mesh*(*)(::MeshDecimator::Mesh*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESHDECIMATION_DECIMATEMESHLOSSLESS_OFFSET))(mesh);
		}

		static ::MeshDecimator::Mesh* DecimateMeshLossless_1(::MeshDecimator::Algorithm algorithm, ::MeshDecimator::Mesh* mesh)
		{
			return ((::MeshDecimator::Mesh*(*)(::MeshDecimator::Algorithm, ::MeshDecimator::Mesh*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESHDECIMATION_DECIMATEMESHLOSSLESS_1_OFFSET))(algorithm, mesh);
		}

		static ::MeshDecimator::Mesh* DecimateMeshLossless_2(::MeshDecimator::Algorithms::DecimationAlgorithm* algorithm, ::MeshDecimator::Mesh* mesh)
		{
			return ((::MeshDecimator::Mesh*(*)(::MeshDecimator::Algorithms::DecimationAlgorithm*, ::MeshDecimator::Mesh*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESHDECIMATION_DECIMATEMESHLOSSLESS_2_OFFSET))(algorithm, mesh);
		}
	};
}
