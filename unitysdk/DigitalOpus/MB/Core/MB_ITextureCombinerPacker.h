#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Texture2D; }

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_ITextureCombinerPacker_TypeDefinitionIndex = 94621;

	class MB_ITextureCombinerPacker
	{
	public:
	};
}
