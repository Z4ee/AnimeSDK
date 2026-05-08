#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_GET_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1A4D5BE0)
#define PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_GET_ONCONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1A4D5BF0)
#define PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A4D5C00)
#define PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_PIPELINECAMERA_ICAMERADATABLENDERBUILDER_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1A4D5C20)
#define PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_PIPELINECAMERA_ICAMERADATABLENDERBUILDER_GET_BLENDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A4D5D40)
#define PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_PIPELINECAMERA_ICAMERADATABLENDERBUILDER_ONCONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1A4D5CB0)
#define PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4D5C10)

namespace PipelineCamera
{
	inline static constexpr unsigned int DelegateCameraDataBlenderBuilder_TypeDefinitionIndex = 35970;

	class DelegateCameraDataBlenderBuilder : public ::System::Object
	{
	public:
		::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>* _Construct_k__BackingField; // 0x10
		::System::Action_1<::PipelineCamera::ICameraDataBlender*>* _OnConstruct_k__BackingField; // 0x18
		::System::Int32 _Priority_k__BackingField; // 0x20

		::System::Void _ctor(::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>* construct, ::System::Action_1<::PipelineCamera::ICameraDataBlender*>* onConstruct, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>*, ::System::Action_1<::PipelineCamera::ICameraDataBlender*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER__CTOR_OFFSET))(this, construct, onConstruct, priority);
		}

		::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>* get_Construct()
		{
			return ((::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_GET_CONSTRUCT_OFFSET))(this);
		}

		::System::Action_1<::PipelineCamera::ICameraDataBlender*>* get_OnConstruct()
		{
			return ((::System::Action_1<::PipelineCamera::ICameraDataBlender*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_GET_ONCONSTRUCT_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_GET_PRIORITY_OFFSET))(this);
		}

		::PipelineCamera::ICameraDataBlender* PipelineCamera_ICameraDataBlenderBuilder_Construct(::PipelineCamera::ICameraDataBlender* currentBlender)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_PIPELINECAMERA_ICAMERADATABLENDERBUILDER_CONSTRUCT_OFFSET))(this, currentBlender);
		}

		::System::Void PipelineCamera_ICameraDataBlenderBuilder_OnConstruct(::PipelineCamera::ICameraDataBlender* blender)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_PIPELINECAMERA_ICAMERADATABLENDERBUILDER_ONCONSTRUCT_OFFSET))(this, blender);
		}

		::System::Int32 PipelineCamera_ICameraDataBlenderBuilder_get_BlenderPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DELEGATECAMERADATABLENDERBUILDER_PIPELINECAMERA_ICAMERADATABLENDERBUILDER_GET_BLENDERPRIORITY_OFFSET))(this);
		}
	};
}
