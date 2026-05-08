#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBD3C20)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD3C60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE___C___CTOR_B__13_0_OFFSET UNITYSDK_OFFSET(0x1BBD3C70)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventQueue___c_TypeDefinitionIndex = 36232;

	class CameraSequenceEventQueue___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::CameraSequenceEventQueue___c** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceEventQueue___c**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEventQueue___c_TypeDefinitionIndex)->GetStaticField(0x27030);
		}
		static ::System::Func_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>** StaticGet___9__13_0()
		{
			return (::System::Func_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEventQueue___c_TypeDefinitionIndex)->GetStaticField(0x27038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>* __ctor_b__13_0()
		{
			return ((::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE___C___CTOR_B__13_0_OFFSET))(this);
		}
	};
}
