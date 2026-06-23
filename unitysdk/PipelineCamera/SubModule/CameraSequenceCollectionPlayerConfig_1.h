#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class ICameraTimestamp; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int CameraSequenceCollectionPlayerConfig_1_TypeDefinitionIndex = 38027;

	template <typename T>
	struct CameraSequenceCollectionPlayerConfig_1
	{
		::System::Int32 _ActiveChannel_k__BackingField; // 0x0
		::System::Int32 _Priority_k__BackingField; // 0x0
		::System::String* _DebugName_k__BackingField; // 0x0
		::PipelineCamera::ICameraTimestamp* _Timestamp_k__BackingField; // 0x0
		::System::Func_4<T, T, ::System::Int32, T>* _MaskFunc_k__BackingField; // 0x0
	};
}
