#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define PIPELINECAMERA_SCOPEDDELEGATEHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x971600)
#define PIPELINECAMERA_SCOPEDDELEGATEHANDLE_ISNULL_OFFSET UNITYSDK_OFFSET(0x971560)
#define PIPELINECAMERA_SCOPEDDELEGATEHANDLE_MOVE_OFFSET UNITYSDK_OFFSET(0x9715B0)
#define PIPELINECAMERA_SCOPEDDELEGATEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x971530)

namespace PipelineCamera
{
	inline static constexpr unsigned int ScopedDelegateHandle_TypeDefinitionIndex = 36084;

	struct alignas(8) ScopedDelegateHandle
	{
		::System::Action* _onDestroy; // 0x10

		::System::Void _ctor(::System::Action* onDestroy, ::System::Action* onConstruct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SCOPEDDELEGATEHANDLE__CTOR_OFFSET))(this, onDestroy, onConstruct);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SCOPEDDELEGATEHANDLE_ISNULL_OFFSET))(this);
		}

		::PipelineCamera::ScopedDelegateHandle Move()
		{
			return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SCOPEDDELEGATEHANDLE_MOVE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SCOPEDDELEGATEHANDLE_DISPOSE_OFFSET))(this);
		}
	};
}
