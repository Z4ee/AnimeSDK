#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/ChunkComponentData_1.h"
#include "unitysdk/PipelineCamera/DataOrientated/DoEntityHandle.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::DataOrientated { template <typename T> class ComponentChuckData_1; }

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ComponentChuckData_1_TypeDefinitionIndex = 37733;

	template <typename TScope>
	class ComponentChuckData_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 ChunkSize = 0x10000; // 0x0
		::System::Void* _chunk; // 0x0
		::System::Int32 _numInstances; // 0x0
		::System::Int32 _serialNumber; // 0x0
		::PipelineCamera::DataOrientated::ChunkComponentData_1<TScope> _chunkData; // 0x0
	};
}
