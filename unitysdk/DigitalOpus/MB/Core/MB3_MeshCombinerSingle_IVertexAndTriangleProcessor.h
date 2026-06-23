#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_MeshCombinerSingle_BufferDataFromPreviousBake.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshVertexChannelFlags.h"

class MB2_TextureBakeResults;
namespace DigitalOpus::MB::Core { class IAssignToMeshCustomizer; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MB_DynamicGameObject; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_SerializableIntArray; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_UVAdjuster_Atlas; }
namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettings; }
namespace DigitalOpus::MB::Core { class MB_IMeshCombinerSingle_BoneProcessor; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_IVertexAndTriangleProcessor_TypeDefinitionIndex = 90643;

	class MB3_MeshCombinerSingle_IVertexAndTriangleProcessor
	{
	public:
	};
}
