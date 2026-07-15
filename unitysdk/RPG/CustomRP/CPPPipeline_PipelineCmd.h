#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class ICmdExecuteCb;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CPPPipeline_PipelineCmd_TypeDefinitionIndex = 35987;

	struct alignas(8) CPPPipeline_PipelineCmd
	{
		::UnityEngine::Rendering::CommandBuffer* cmd; // 0x10
		::System::Collections::Generic::List_1<::ICmdExecuteCb*>* cmdCbs; // 0x18
		::ICmdExecuteCb* latest; // 0x20
	};
}
